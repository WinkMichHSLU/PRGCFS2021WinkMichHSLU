#include <stdio.h>

int main( )
{
	int sum = 0;
	int start = 1;
	int end = 500;
	int zaehler = 0;

	for( int i = start; i < end; i++)
	{
		if(i%19 == 0)
		{
			printf("%d\n", i);
		}
	}
		
	

	


	return 0;
}
