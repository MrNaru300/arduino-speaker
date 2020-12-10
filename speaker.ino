#define RATE 14400 
#define CHUNK 1024

byte buf[CHUNK];


void setup() {
  Serial.begin(RATE*8); //Number of bits per sample

  //Set the first 8 pins to output and resets them
  for (int pin = 0; pin < 8; pin++) {
  	pinMode(pin, OUTPUT);
    digitalWrite(pin, LOW);
  }
}

void loop() {
  Serial.readBytes(buf, CHUNK*8);
  playMusic();
}


void testWaves(int freq) {
  //Tests every wave tone for 1s 
  for (int i = 0; i < freq; i++) {
   squareTone(freq); 
  }
  for (int i = 0; i < freq; i++) {
   sawtoothTone(freq); 
  }
  for (int i = 0; i < freq; i++) {
   sineTone(freq); 
  }
}

void sawtoothTone(int freq) {

  for (int i = 0; i < RATE/freq; i++) {
 	playSample(i);
   	delayMicroseconds(1000000/RATE);
 }
 playSample(0);
}

void squareTone(int freq) {
  playSample(255);
  delayMicroseconds(floor(500000/freq));
  playSample(0);
  delayMicroseconds(floor(500000/freq));
}

void sineTone (int freq) {
  float pos = 0;
  for (int i = 0; i < RATE/freq; i++) {
    pos = sin(6.28318530718*i*freq/RATE);
    playSample(floor((pos+1)*127));
    delayMicroseconds(floor(1000000/RATE));
  }
  playSample(0);
}

void playMusic() {
  for (int i = 0; i < CHUNK; i++) {
    playSample(buf[i]);
    buf[i] = 0;
  }
}

void playSample(byte sample) {
  PORTD = sample;
}
