import crcmod
import serial
import time

PORT = 0
BAUD = 2500000

# read encoder
msg = bytearray([0x3e, 1, 0x08, 0x60, 0, 0, 0, 0, 0, 0, 0])

# set baudrate
# msg = bytearray([0x3e, 0x01, 0x08, 0xb4, 0, 0, 0, 0, 0, 0, 2])
crc = crcmod.crcmod.mkCrcFun(0x18005)
val = crc(msg)
msg.append(val & 0xff)
msg.append(val >> 8)
print (" ".join(hex(int(n)) for n in msg))

s = serial.Serial(port=f'/dev/ttyCH9344USB{PORT}', baudrate=BAUD, timeout=0.1)
s.write(msg)
rec = bytearray()
time.sleep(0.01)
start = time.time_ns()
while time.time_ns() - start < 20*10**5:
    pass
while s.in_waiting != 0:
    rec += s.read(s.in_waiting)

print (" ".join(hex(int(n)) for n in rec))
