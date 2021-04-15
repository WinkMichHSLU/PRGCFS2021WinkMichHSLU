#include <stdio.h>

#define MAX_NAME_LENGTH 30
#define NUM_GRADES 6
#define NUM_STUDENTS 5

struct Student{
	char firstname[MAX_NAME_LENGTH];
	char lastname[MAX_NAME_LENGTH];
	float grades[NUM_GRADES];
	float average;
};

struct Student students[NUM_STUDENTS] = {
[0].firstname = "Tony",	[0].lastname = "Stark",	[0].grades = {6.0, 5.8, 5.9, 6.0, 5.9, 6.0},
[1].firstname = "Peter",	[1].lastname = "Parker",	[1].grades = {4.5, 4.8, 5.8, 3.2, 5.9, 5.2},
[2].firstname = "Bruce",	[2].lastname = "Banner",	[2].grades = {5.5, 2.8, 5.3, 4.8, 5.4, 4.5},
[3].firstname = "Steve",	[3].lastname = "Rodgers",	[3].grades = {4.9, 3.9, 5.8, 2.3, 4.3, 5.4},
[4].firstname = "Natasha",	[4].lastname = "Romanoff",	[4].grades = {5.3, 5.2, 5.1, 5.7, 4.9, 5.9}};

void printStudents(struct Student myStudents[] );

double ComputeStudGradeAverage(struct Student *pStud);

double ComputeClassAverage(struct Student *pStud);

struct Student *pStudent = &students[0];




int main()
{
		
	
	
	// initial Array
	printStudents(students);
	
	
	// Average Grades
	for(int i = 0; i < NUM_STUDENTS; i++)
	{
		
		pStudent->average = ComputeStudGradeAverage(pStudent);
		pStudent++;
	}
		
	printStudents(students);
	
	// Class Average
	float classAverage = 0.0;
	classAverage = ComputeClassAverage(&students[0]);
	printf("Class Average: %.2f\n", classAverage);
	
	return 0;
}

void printStudents(struct Student myStudents[] )
{
	for(int i = 0; i < 5; i++)
	{
		printf("%s\t%s\t\t", myStudents[i].firstname, myStudents[i].lastname);
		for(int j = 0; j < 6; j++)
		{
			printf("%.1f ", myStudents[i].grades[j]);
		}
		printf("\tAvg: %.2f ", myStudents[i].average);
		printf("\n");
	}
	//printf("finished\n");
}

double ComputeStudGradeAverage(struct Student *pStud){

	float sum_grades = 0.0;
	
	for(int j = 0; j < NUM_GRADES; j++)
	{
		sum_grades = sum_grades + pStud->grades[j];
		
	}
	sum_grades = sum_grades / NUM_GRADES;
	
	return sum_grades;
}
	
	
double ComputeClassAverage(struct Student *pStud){
	
	float gradeAverage = 0.0;
	
	for(int i = 0; i < NUM_STUDENTS; i++)
	{
		gradeAverage += pStud->average;
		
		pStud++;
	}
	gradeAverage = gradeAverage / NUM_STUDENTS;
	return gradeAverage;
}	
		
		
		
		
		
		
		
			
	
	
	
	
	

