#include <stdio.h>

int main(int argc, char *argv[] )
{
	// falls NICHT 3 ARgumente erhalten, dann --> hier hinein
	if( argc != 3 ){
		// input is not valid
		printf("Usage:\n");
		printf("logicOperators Input1 Input2\n");
	}

	else
	{	// input is valid --> genau 3 Argumente erhalten, Prg aufruf + 2 argumente
	
		printf("Number of input arguments: %d\n", argc );
		
		// die drei Elemente in der For-loop Deklaration
		// --------------------------------------
		// nimm eine int-variable i und starte mit 0.
		// führe folgenden Code aus, solange i < argc
		// inkrementiere i bei jedem Durchlauf um 1 (i++)
		// ++i --> inkrementierung VOR durchlauf, i++ --> inkrementierung NACH durchlauf
	
		for( int i = 0; i < argc; i++ )
		{
			printf("Argument %d was %s\n", i, argv[i]);
		}
	}
	return 0;
}
