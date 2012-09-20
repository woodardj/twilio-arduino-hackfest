int ledPin = 13;
int other = 12;

int count = 10;
int row[] = { 13, 12, 11, 10, 9, 8, 7, 6, 5, 4 };

char test_seq[] = "abcdefg";


void setup(){
  for(int i = 0; i < count ; i++ ){
    pinMode(row[i],OUTPUT);
  }
  //pinMode(ledPin, OUTPUT);
  //pinMode(other, OUTPUT);
}

void loop(){
  for(int j = 0 ; j < count ; j++ ){
    digitalWrite(row[j],HIGH);
    delay(100);
    digitalWrite(row[j],LOW);
  }
  /*
  digitalWrite(ledPin, HIGH);
  digitalWrite(other,LOW);
  delay(500);
  digitalWrite(ledPin, LOW);
  digitalWrite(other,HIGH);
  delay(500);
  */
}

int letter_to_led(char *a){
  switch(a){
    case 'a':
    return 4;
    break;
    case 'b':
    return 5;
    break;
    case 'c':
    return 6;
    break;
    case 'd':
    return 7;
    break;
    case 'e':
    return 8;
    break;
    case 'f':
    return 9;
    break;
    case 'g':
    return 10;
    break;
  }
}
