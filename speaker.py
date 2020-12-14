import sys
import serial
import wave
import audioop

SAMPLE_RATE = 14000
RATE        = 14000
CHUNK       = RATE
BAUD_RATE   = 115200

port = "/dev/ttyACM0"

audio = wave.open(sys.argv[1], 'rb')
arduino = serial.Serial(port, BAUD_RATE)

chunks = audio.getnframes()//CHUNK #number of chunks
time = audio.getnframes()/RATE #time in seconds

arduino.readline()

while True:
    audio.rewind()
    for n in range(chunks):
        fragment = audio.readframes(CHUNK)
        print(f"""[{'#'*20*(n//chunks)}{' '*20*(1-n//chunks)}] {round(n/chunks*100, 1)}%\
         {round(n*time/chunks, 1)}s / {round(time, 1)}s\
         byte={n*CHUNK}; chunk={n}\r """, end="")


        arduino.write(fragment)