#include <stdio.h>

char *firstnames[5] = {"Tony", "Peter", "Bruce", "Steve", "Natasha"};
char *lastnames[5] = {"Stark", "Parker", "Banner", "Rodgers", "Romanoff"};
float grades[5][6] = {{6.0, 5.8, 5.9, 6.0, 5.9, 6.0}, {4.5, 4.8, 5.8, 3.2, 5.9, 5.2}, {5.5, 2.8, 5.3, 4.8, 5.4, 4.5}, {4.9, 3.9, 5.8, 2.3, 4.3, 5.4}, {5.3, 5.2, 5.1, 5.7, 4.9, 5.9}};





typedef struct{
	char *firstname;
	char *lastname;
	float grades[6];
	float average;
} Student;

void insert(Student *s, char *firstname, char *lastname, float *grades)
{
	s->firstname = firstname;
	s->lastname = lastname;
	for(int i = 0; i < 6; i++)
	{
	
		s->grades[i] = grades[i];
	}
}


void printStudents( Student myStudents[] )
{
	for(int i = 0; i < 5; i++)
	{
		printf("%s\t%s\t\t", myStudents[i].firstname, myStudents[i].lastname);
		for(int j = 0; j < 6; j++)
		{
			printf("%.1f ", myStudents[i].grades[j]);
		}
		printf("\n");
	}
	printf("finished\n");
}

int main()
{
	Student students[5];	
	
	for(int i = 0; i < 5; i++){
		
		//printf("Enter firstname: ");
		//scanf("%s" , &students[i].firstname[20]);
		//printf("Enter lastname: ");
		//scanf("%s" , &students[i].lastname[30]);

		
		insert(&students[i], firstnames[i], lastnames[i], grades[i]);
	}
	
	// print array	
	printStudents(students);
		
	
	
	return 0;
}



