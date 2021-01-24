#define increase 13
#define decrease 12
#define led 3
int lux = 0;

void setup()
{
  Serial.begin(9600);
  pinMode(increase, INPUT);
  pinMode(decrease, INPUT);
  pinMode(led, OUTPUT);
}

void loop()
{
  
  int state_increase = digitalRead(increase);
  int state_decrease = digitalRead(decrease);
  
  if (state_increase == 1 && lux != 255)
    lux++;
    
  if (state_decrease == 1 && lux != 0)
    lux--;
  
  analogWrite(led, lux);

  Serial.println(lux);
  delay(300);
}
