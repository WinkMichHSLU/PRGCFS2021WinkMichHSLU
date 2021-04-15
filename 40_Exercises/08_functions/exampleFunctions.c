#include <stdio.h>

// function declaration
void ComputeCircleArea(float radius, float *area);


int main()
{
	float myRadius = 4.545;
	float area = 0.0f;
	ComputeCircleArea(myRadius, &area);
	printf("%.2f\n", area);  
	return 0;
}


// function implementation
void ComputeCircleArea(float radius, float *area)
{
	*area = radius*radius*3.1415926535;
}
