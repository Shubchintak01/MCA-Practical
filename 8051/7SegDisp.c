#include <reg51.h>

#define DATAPORT P0

sbit DISP1	= P3^4;
	

void msdelay (unsigned int time);		//Function to generate delay

int main()
{
    unsigned char  seg_code[]= {0xC0,0xF9,0xA4,0xB0,0x99,0x92,0x82,0xF8,0x80,0x90,0x88,0x83,0xC6,0xA1,0x86,0x8E};
    int cnt;

    while (1) 
    {
        for (cnt = 0; cnt <= 9; cnt++) // loop to display 0-9999
        {
	        DISP1 = 0; 
	        DATAPORT = seg_code[cnt];
	        msdelay(500);     
        }
    }
}


//Function Definitions
void msdelay (unsigned int time) //Function to generate delay
{
unsigned int i, j;
  for (i = 0; i < time; i++)
	for (j = 0; j < 113; j++);//Calibrated for a 1 ms delay in MPLAB
}