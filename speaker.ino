#define RATE 12000 
#define CHUNK 1024

byte buf[CHUNK];


void setup() {
  Serial.begin(RATE*8); //Number of bits per sample

  //Set the first 8 pins to output and resets them
  //The ports need to be 1-8 for more speed using direct port manipulation
  for (int pin = 0; pin < 8; pin++) {
  	pinMode(pin, OUTPUT);
    digitalWrite(pin, LOW);
  }
}


void serialEvent() {
  while (Serial.avalible()) {
    Serial.readBytes(buf, CHUNK);
    playMusic();
  }
  playSample(0); //Stop playing if there is no data
}

void testWaves(int freq, int time) {
  //Tests every wave tone for especific time 
  for (int i = 0; i < time*freq; i++) {
   squareTone(freq); 
  }
  for (int i = 0; i < time*freq; i++) {
   sawtoothTone(freq); 
  }
  for (int i = 0; i < time*freq; i++) {
   sineTone(freq); 
  }
}

void sawtoothTone(int freq) {
  //Play one wave legth of a sawtooth tone
  for (int i = 0; i < RATE/freq; i++) {
 	playSample(i);
   	delayMicroseconds(1000000/RATE);
 }
 playSample(0);
}

void squareTone(int freq) {
  //Play one wave legth of a square tone
  playSample(255);
  delayMicroseconds(floor(500000/freq));
  playSample(0);
  delayMicroseconds(floor(500000/freq));
}

void sineTone (int freq) {
  //Play one wave legth of a sine tone
  float pos = 0;
  for (int i = 0; i < RATE/freq; i++) {
    pos = sin(6.28318530718*i*freq/RATE);
    playSample(floor((pos+1)*127));
    delayMicroseconds(floor(1000000/RATE));
  }
  playSample(0);
}


void playMusic() {
  //Automatically play every sample from buffer
  for (int i = 0; i < CHUNK; i++) {
    playSample(buf[i]);
  }
}

void playSample(byte sample) {
  //Directly writes the sample on ports 1-8 for more speed
  PORTD = sample;
}
