#include <stdio.h>
#include <stdlib.h>

struct signalData
{
	long long time;
	int pressure;
	char systemState;
	char alarmState;
};

//void readFile(numbRecords);

int main()
{
	int i;
	int numbRecords= 400;
	
	//printf("How many Records do you want to see? ");
	//scanf("%d", &numbRecords);
	struct signalData sigDa;
	FILE *fptr;
	
	if ((fptr = fopen("pressureSpike.bin", "rb")) == NULL){
		printf("Error! opening file");
		
		exit(1);
	}
	
	for(i = 1; i < numbRecords; i++)
	{
		
		
		fread(&sigDa, 14, 1, fptr);
		printf("time: %lld\npressure: %d psi\nsystem State: %x\nalarm State: %x\n\n", sigDa.time, sigDa.pressure, sigDa.systemState, sigDa.alarmState);
	}
	
	fclose(fptr);

	return 0;
}

/*
void readFile(int j)
{
	
	


}
*/
