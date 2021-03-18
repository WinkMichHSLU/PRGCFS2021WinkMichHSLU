#include <stdio.h>

int main( )
{
	int sum = 0;
	int start = 1;
	int end = 200;
	int zaehler = 0;

	for( int i = start; i < end; i++)
	{
		// Teilbar durch 17
		if(i%17 == 0)
		{
			
			printf("17: %d\n", i);
		}
		else if(i%7 == 0 && i%11 == 0)
		{
			printf("7 and 11: %d\n", i);
		}
	}
		
	

	


	return 0;
}
