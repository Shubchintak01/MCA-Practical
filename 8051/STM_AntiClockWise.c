#include <reg51.h>

#define DATAPORT P0

void msdelay (unsigned int time) 	// Definition of delay subroutine
{
	unsigned int i, j;
	for (i = 0; i < time; i++)		// Loop for itime
		for (j = 0; j < 113; j++);	// Calibrated for a 1 ms delay 
}

void main()
{	
	while(1)						// Endless loop
	{
		DATAPORT = 0x09;
		msdelay(2);
		DATAPORT = 0x08;
		msdelay(2);
		DATAPORT = 0x0C;
		msdelay(2);
		DATAPORT = 0x04;				
		msdelay(2);
		DATAPORT = 0x06;
		msdelay(2);
		DATAPORT = 0x02;
		msdelay(2);
		DATAPORT = 0x03;
		msdelay(2);
		DATAPORT = 0x01;				
		msdelay(2);
	}
}


