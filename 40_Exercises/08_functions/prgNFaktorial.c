#include <stdio.h>
#include <stdlib.h>

// function declaration
long long ComputeNFaktorial(long number, int end);

long long ComputeBino(int nNumber, int kNumber);


int main(int argc, char *argv[])
{
	// falls nicht 2 Argumente erhalten, fehlermeldung	
	if( argc != 3)
	{
		printf("Usage\n");
		printf("prgNFaktorial input1 input2\n");
	}
	else
	{
		
	
		int myNumber = atoi(argv[1]);
		int myK = atoi(argv[2]);
		
		/* 
		Berechnung von N tief K
		
		int myDiff = myNumber - myK;
		
		int nFaktorial = ComputeNFaktorial(myNumber);
		int kFaktorial = ComputeNFaktorial(myK);
		int diffFaktorial = ComputeNFaktorial(myDiff);
		int nTiefK = (nFaktorial / ( kFaktorial * diffFaktorial));
		*/
		
		long long nTiefKResult = ComputeBino(myNumber, myK);
		
		printf("n = %d\nk = %d\nn tief k = %lld\n", myNumber, myK, nTiefKResult);  
	}
	return 0;
}


// function implementation
long long ComputeNFaktorial(long number, int end)
{
	if (number>end+1)
	{
		long long sum;
		
		sum = number*ComputeNFaktorial(number-1, end);
		printf("%ld, %lld\n", number, sum);
		return sum;
	} 
	return end+1;
}

long long ComputeBino(int nNumber, int kNumber)
{
	long long nFaktorial = ComputeNFaktorial(nNumber, nNumber-kNumber);
	long long kFaktorial = ComputeNFaktorial(kNumber, 0);
	//int myDiff = nNumber - kNumber;
	//long long diffFaktorial = ComputeNFaktorial(myDiff);
	long long nTiefK = (nFaktorial /  kFaktorial );//* diffFaktorial));
	
	return nTiefK;
}
