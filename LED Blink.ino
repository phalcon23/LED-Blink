#define LED 13
int X = 0;
void setup()
{

  /* add setup code here */
	Serial.begin(9600);
	Serial.println("hello");
	pinMode(LED, OUTPUT);
	digitalWrite(LED, LOW);
}

void loop()
{

  /* add main program code here */
	digitalWrite(LED, LOW);
	delay(100);
	Serial.print("x = ");
	Serial.println(X);
	digitalWrite(LED, HIGH);
	delay(100);
	X++;
	if (X > 9) {
		X = 0;
	}

}