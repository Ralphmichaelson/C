#include<stdio.h>
#include<string.h>

struct Student
{
	char name[30];
	int age;
	float marks;
};

void addStudent()
{
	struct Student student;
	FILE *file;

	file=fopen("students.txt","a");

	if(file==NULL)
	{
		printf("Error opening file.\n");
		return;
	}

	printf("\n===== ADD STUDENT =====\n");

	printf("Enter name: ");
	scanf("%s",student.name);

	printf("Enter age: ");
	scanf("%d",&student.age);

	printf("Enter marks: ");
	scanf("%f",&student.marks);

	fprintf(file,"%s %d %.2f\n",
		student.name,
		student.age,
		student.marks);

	fclose(file);

	printf("Student saved successfully.\n");
}

void displayStudents()
{
	struct Student student;
	FILE *file;

	file=fopen("students.txt","r");

	if(file==NULL)
	{
		printf("\nNo student records found.\n");
		return;
	}

	printf("\n===== STUDENT RECORDS =====\n");

	while(fscanf(file,"%s %d %f",
		student.name,
		&student.age,
		&student.marks)==3)
	{
		printf("\nName:%s\n",student.name);
		printf("Age:%d\n",student.age);
		printf("Marks:%.2f\n",student.marks);
	}

	fclose(file);
}

int main()
{
	int choice;

	printf("===== STUDENT RECORD SYSTEM =====\n");

	do
	{
		printf("\n1. Add Student\n");
		printf("2. Display Students\n");
		printf("3. Exit\n");

		printf("\nEnter your choice: ");
		scanf("%d",&choice);

		switch(choice)
		{
			case 1:
				addStudent();
				break;

			case 2:
				displayStudents();
				break;

			case 3:
				printf("\nExiting program...\n");
				break;

			default:
				printf("\nInvalid choice.\n");
		}

	}
	while(choice!=3);

	return 0;
}