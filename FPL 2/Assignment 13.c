#include <LiquidCrystal.h>

LiquidCrystal lcd(12, 11, 5, 4, 3, 2);
int a =0;
int e = 7;

void setup()
{
  	lcd.begin(16, 2);
	lcd.print("Hello World!");
	pinMode(e,INPUT);
}

void loop()
{
  	int button = digitalRead(e);
	lcd.setCursor(3, 1);
    lcd.print(a);
  	
	if(button==HIGH)
	{
    	a++;
		lcd.setCursor(3, 1);
		lcd.print(a);
		delay(200);
    }
}
