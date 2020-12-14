#define RATE 14000 //It need to be less than or equal to BAUD_RATE/BAUD_RATE
#define CHUNK 8
#define BAUD_RATE 115200 //Using maximum baud rate for more audio quality

byte buf[CHUNK];

void setup() {
  for (int pin = 2; pin < 9; pin++) {
  	pinMode(pin, OUTPUT);
    digitalWrite(pin, LOW);
  }
  //testWaves(1440, 1);
  Serial.begin(BAUD_RATE);
  Serial.println("");
}

void loop() {
  Serial.readBytes(buf, CHUNK);
  playMusic();
}

void testWaves(int freq, float time) {
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
    delayMicroseconds(floor(1000000/RATE));
  }
}

void playSample(byte sample) {
  //Directly writes the sample on ports 1-8 for more speed
  PORTD = 0b00111111 & sample;
  PORTB = 0b11000000 & sample;
}
