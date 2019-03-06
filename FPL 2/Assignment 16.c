#include <avr/io.h>			//IO header
#define F_CPU 11059200UL	//defining crystal frequency
#include <util/delay.h>  	//delay header

int main(void)
{
	DDRD = 0xFF; //PORTD as output
    DDRA = 0xFF; //PORTA as output
    DDRC = 0xFF; //PORTC as output
    
	char ALPHA[]={
	0,0,0,0,0,0,0,0,0,0,0,
    //K
		0,0b11000011,0b11100111,0b01111110,0b00111100,0b00011000,0b11111111,0b11111111,
	//A
		0,0b01111111,0b11111111,0b11001100,0b11001100,0b11001100,0b11111111,0b01111111,
	//R
		0b01111001,0b11111011,0b11011111,0b11011110,0b11011100,0b11011000,0b11111111,0b11111111,
	//T
		0b11000000,0b11000000,0b11000000,0b11111111,0b11111111,0b11000000,0b11000000,0b11000000,
	//I
		0b11000011,0b11000011,0b11000011,0b11111111,0b11111111,0b11000011,0b11000011,0b11000011,
	//K
		0,0b11000011,0b11100111,0b01111110,0b00111100,0b00011000,0b11111111,0b11111111
    0,0,0,0,0,0,0,0,0,0,0,
    };

    char PORT[8] = {1,2,4,8,16,32,64,128}; //pin values of a port
    uint8_t l =0;
    
    while(1)
    {
		for(int x=0;x<142;x++)
        {
        	for(int a=0;a<20;a++) //show each character 20 times before shifting a column
            {
				for (int i=0;i<8;i++)
                {
                	PORTC = ~PORT[i];    //ground the PORTC pin
                    PORTA = ALPHA[i+x];  //power the PORTA 
                    _delay_ms(1);
                    PORTC = PORT[i];     //clear pin after 1msec
				}
            }
		}
	}
}
