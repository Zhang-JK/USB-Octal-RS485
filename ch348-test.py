import serial
import os
import time

print("Please select testing port, number from 0 to 7")
p1 = int(input("Input 1st port number: "))
p2 = int(input("Input 2nd port number: "))

if p1 == p2:
    print("Ports must be different")
    exit()
if p1 > 7 or p2 > 7:
    print("Ports must be in range 0-7")
    exit()

testingRange = [115200, 1000000, 2000000, 4000000, 6000000, 8000000, 10000000]
testingRounds = 1000
testingLength = 50

errorTimes = {}
for i in testingRange:
    errorTimes[i] = 0

def test(tx, rx, i):
    for j in range(testingRounds):
        arrayTx = os.urandom(testingLength)
        tx.write(arrayTx)
        time.sleep(0.001)
        arrayRx = rx.read(testingLength)
        if len(arrayRx) != testingLength:
            errorTimes[i] += 1
            print("Error in length occur")
            continue
        for k in range(testingLength):
            if arrayTx[k] != arrayRx[k]:
                errorTimes[i] += 1
                print("Error in data occur")
                break

for i in testingRange:
    print("\n----------------------Testing baudrate: ", i, "----------------------\n")
    serialP1 = serial.Serial(port=f'/dev/ttyCH9344USB{p1}', baudrate=i, timeout=0.1)
    serialP2 = serial.Serial(port=f'/dev/ttyCH9344USB{p2}', baudrate=i, timeout=0.1)
    test(serialP1, serialP2, i)
    test(serialP2, serialP1, i)
    serialP1.close()
    serialP2.close()
    print("----> Error times: ", errorTimes[i], "<----")
    print("----> Error rate: ", errorTimes[i] / (testingRounds * 2), "<----")
    print("\n----------------------Testing baudrate: ", i, " finished----------------------\n")

passed = True
for i in testingRange:
    if errorTimes[i] != 0:
        passed = False
        break
if passed:
    print("\n------------------------------------------------------------")
    print("--------------------- ALL TESTS PASSED ---------------------")
    print("------------------------------------------------------------")
else:
    print("\n------------------------------------------------------------")
    print("--------------------- TESTS FAILED -------------------------")
    print("------------------------------------------------------------")
