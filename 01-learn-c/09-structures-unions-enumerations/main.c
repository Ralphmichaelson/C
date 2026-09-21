#include<stdio.h>
#include<string.h>

/* Structure */
struct Student
{
	char name[30];
	int age;
	float marks;
};

/* Union */
union Data
{
	int number;
	float decimal;
	char letter;
};

/* Enumeration */
enum Day
{
	MONDAY=1,
	TUESDAY,
	WEDNESDAY,
	THURSDAY,
	FRIDAY,
	SATURDAY,
	SUNDAY
};

int main()
{
	struct Student student;
	struct Student students[2];

	union Data data;

	enum Day today;

	printf("===== STRUCTURES, UNIONS AND ENUMERATIONS =====\n\n");

	/* 1. STRUCTURE */
	printf("1. STRUCTURE\n");

	strcpy(student.name,"Michael");
	student.age=20;
	student.marks=78.5;

	printf("Name:%s\n",student.name);
	printf("Age:%d\n",student.age);
	printf("Marks:%.2f\n",student.marks);

	/* 2. ARRAY OF STRUCTURES */
	printf("\n2. ARRAY OF STRUCTURES\n");

	strcpy(students[0].name,"Michael");
	students[0].age=20;
	students[0].marks=78.5;

	strcpy(students[1].name,"John");
	students[1].age=21;
	students[1].marks=82.0;

	printf("Student 1:%s Age:%d Marks:%.2f\n",
		students[0].name,
		students[0].age,
		students[0].marks);

	printf("Student 2:%s Age:%d Marks:%.2f\n",
		students[1].name,
		students[1].age,
		students[1].marks);

	/* 3. UNION */
	printf("\n3. UNION\n");

	data.number=100;

	printf("Integer value:%d\n",data.number);

	data.decimal=25.5;

	printf("Float value:%.2f\n",data.decimal);

	data.letter='A';

	printf("Character value:%c\n",data.letter);

	/* 4. ENUMERATION */
	printf("\n4. ENUMERATION\n");

	today=WEDNESDAY;

	printf("Today is day number:%d\n",today);

	if(today==WEDNESDAY)
	{
		printf("Today is Wednesday.\n");
	}

	/* 5. ENUMERATION WITH SWITCH */
	printf("\n5. ENUMERATION WITH SWITCH\n");

	switch(today)
	{
		case MONDAY:
			printf("Monday\n");
			break;

		case TUESDAY:
			printf("Tuesday\n");
			break;

		case WEDNESDAY:
			printf("Wednesday\n");
			break;

		case THURSDAY:
			printf("Thursday\n");
			break;

		case FRIDAY:
			printf("Friday\n");
			break;

		case SATURDAY:
			printf("Saturday\n");
			break;

		case SUNDAY:
			printf("Sunday\n");
			break;

		default:
			printf("Invalid day\n");
	}

	printf("\nStructures group related data.\n");
	printf("Unions store different data types in the same memory location.\n");
	printf("Enumerations give names to integer constants.\n");

	return 0;
}