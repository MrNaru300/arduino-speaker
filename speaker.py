import sys
import serial
import wave
import audioop

SAMPLE_RATE = 14000
CHUNK       = 1024
RATE        = 14000

audio = wave.open(sys.argv[0], 'rb')
arduino = serial.Serial("/dev/ttyUSB0", 115200)
rate = 0




for n in range(audio.getnframes()//CHUNK):
        fragment = audio.readframes(CHUNK)
        fragment = audioop.lin2lin(fragment, audio.getsampwidth(), 1)
        fragment = audioop.tomono(fragment, 1, 1, 1)
        fragment = audioop.ratecv(
            fragment, 1, 1, audio.getframerate(), RATE
        )

        arduino.write(fragment)




