#define BUZZER_PIN 8

#define NOTE_587 587
#define NOTE_494 494
#define NOTE_523 523
#define NOTE_440 440
#define NOTE_392 392
#define NOTE_659 659


int total_nada = 36;

int nada[] = {
	NOTE_587, NOTE_494, NOTE_494,
	NOTE_494, NOTE_587, NOTE_587,
	NOTE_523, NOTE_440, NOTE_440,
	NOTE_440, NOTE_587, NOTE_523,
	NOTE_494, NOTE_392, NOTE_392,
	NOTE_392, NOTE_523, NOTE_659,
	NOTE_659, NOTE_659, NOTE_659,
	NOTE_659, NOTE_587, NOTE_494,
	NOTE_494, NOTE_494, NOTE_587,
  NOTE_587, NOTE_587, NOTE_523,
  NOTE_494, NOTE_440, NOTE_494,
  NOTE_440, NOTE_392
	
};

int delay_ketukan[] = {
	748, 432, 131,
	702, 455, 154,
	741, 409, 131,
	741, 401, 170,
	1543, 502, 293,
	193, 748, 370,
	116, 625, 363,
	208, 741, 378,
	147, 702, 378,
	170, 733, 363,
	193, 725, 463,
	147, 2284
};

void setup() {

}

void loop() {
  for (int index_nada = 0; index_nada < total_nada; index_nada++) {
    tone(BUZZER_PIN, nada[index_nada]);
    delay(delay_ketukan[index_nada]);
    noTone(BUZZER_PIN);
  }

  delay(500);
}
