#include <stdio.h>

int main()
{
	int sum = 0;
	int start = 0;
	int end = 50;
	int zaehler = 0;
	
	/* Anfangssituation
	for( int i = start; i <= end; i++ )
	{
		sum = sum + i;
	}
	
	printf("The sum from %d to %d is equal to %d\n", start, end, sum);
	*/
	
	//--------------------------------------------------------------------
	
	/* Alle Geraden Zahlen inkrementieren
	 start = 1
	
	for( int i = start; i <= end; i++ )
	{
		i++;
		sum = sum + i;
	}
	
	printf("The sum from %d to %d is equal to %d\n", start, end, sum);
	*/
	
	//-----------------------------------------------------------------------------
	
	/* von 40 runterzählen nach 25
	for( int i = sum; i > 25; i-- )
	{
		
		sum = sum + -1;
		printf("%d\n",sum);
	}
	
	*/
	
	//--------------------------------------------------------
	
	/* sum mal 3
	// anstatt sum auf 1 zu stellen
	sum = start; 
	
	for( int i = start; i < end; i++ )
	{
		
		sum = sum * 3;
		printf("%d\n",sum);
	}
	
	*/

	//-------------------------------------------------------------------------
	
	/* verschachtelte for loops
	
	for( int i = start; i < end; ++i )
	{
		
		
		for( int u = start; u < end-1; ++u)
		{
			sum = sum + 1;
			printf("%d ", sum);
		}
		sum = sum + 1;
		printf("%d\n",sum);
	}

	*/
	
	//---------------------------------------------------------------------
	
	for( int i = start; i <= end; i++ )
	{
		sum = sum + i;
		zaehler = zaehler + 1;
		//printf("Zaehler value = %d\n", zaehler);
		
		if (sum > 555) 
		{
			break;
		}
		else
		{
			continue;
		}
	}
	
	printf("With max. sum 555, the integers from %d to %d sum to %d\n", start+1, zaehler, sum);

	return 0;
}
