import crcmod
import serial
import time

PORT = 0
# BAUD = [115200, 1000000, 1500000, 2000000, 2500000, 3000000, 3500000, 4000000, 4500000, 5000000, 5500000, 6000000]
# BAUD = [*range(100000, 6000001, 100000)]
BAUD = [*range(2200000, 2800000, 10000)]
ID = [*(range(1, 256).__reversed__())]
finded = False

print("Searching domain: ")
print("Baudrate: ", BAUD)
print("ID: ", ID)

for b in BAUD:
    s = serial.Serial(port=f'/dev/ttyCH9344USB{PORT}', baudrate=b, timeout=0.1)

    for i in ID:
        # read encoder
        msg = bytearray([0x3e, i, 0x08, 0x60, 0, 0, 0, 0, 0, 0, 0])
        crc = crcmod.crcmod.mkCrcFun(0x18005)
        val = crc(msg)
        msg.append(val & 0xff)
        msg.append(val >> 8)
        s.write(msg)
        rec = bytearray()
        time.sleep(0.01)
        while s.in_waiting != 0:
            rec += s.read(s.in_waiting)
        if len(rec) != 0:
            print ("---------------- MESSAGE RECEIVED ----------------")
            print (" ".join(hex(int(n)) for n in rec))
            print ("Baudrate: ", b, " ID: ", i)
            # finded = True
            # break
        # time.sleep(0.001)
    if finded:
        break
    print ("---------------- Search finished at", b, "----------------")
    time.sleep(10)

s.close()
