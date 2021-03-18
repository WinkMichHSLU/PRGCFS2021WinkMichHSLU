#include <stdio.h>

int main( )
{
	int sum = 0;
	int start = 1;
	int end = 200;
	int zaehler = 0;

	for( int i = start; i < end; i++)
	{
		// Teilbar durch 11
		if(i%11 == 0)
		{
			if(i%7 == 0)
			{
				printf("11 and 7: %d\n", i);
			}
			else
			{
				printf("11 but not 7: %d\n", i);
			}
			
			
		}
		else 
		{
			//nicht teilbar durch 11
		}
	}
		
	

	


	return 0;
}
