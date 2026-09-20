#include<stdio.h>
main()
{
	int age=20;
	int score=75;
	int number=10;
	int choice=2;

	printf("===== CONDITIONAL STATEMENTS IN C =====\n\n");

	/* 1. if statement */
	printf("1. IF STATEMENT\n");

	if(age>=18)
	{
		printf("You are an adult.\n");
	}

	/* 2. if...else statement */
	printf("\n2. IF...ELSE STATEMENT\n");

	if(number%2==0)
	{
		printf("%d is an even number.\n",number);
	}
	else
	{
		printf("%d is an odd number.\n",number);
	}

	/* 3. else if statement */
	printf("\n3. ELSE IF STATEMENT\n");

	if(score>=80)
	{
		printf("Grade: A\n");
	}
	else if(score>=70)
	{
		printf("Grade: B\n");
	}
	else if(score>=60)
	{
		printf("Grade: C\n");
	}
	else if(score>=50)
	{
		printf("Grade: D\n");
	}
	else
	{
		printf("Grade: F\n");
	}

	/* 4. Nested if statement */
	printf("\n4. NESTED IF STATEMENT\n");

	if(age>=18)
	{
		printf("You are old enough to vote.\n");

		if(age>=21)
		{
			printf("You are also 21 or older.\n");
		}
		else
		{
			printf("You are below 21.\n");
		}
	}
	else
	{
		printf("You are below 18.\n");
	}

	/* 5. switch statement */
	printf("\n5. SWITCH STATEMENT\n");

	switch(choice)
	{
		case 1:
			printf("You selected Option 1.\n");
			break;

		case 2:
			printf("You selected Option 2.\n");
			break;

		case 3:
			printf("You selected Option 3.\n");
			break;

		case 4:
			printf("You selected Option 4.\n");
			break;

		default:
			printf("Invalid choice.\n");
	}

	/* 6. Another switch example */
	printf("\n6. DAY EXAMPLE\n");

	switch(choice)
	{
		case 1:
			printf("Monday\n");
			break;

		case 2:
			printf("Tuesday\n");
			break;

		case 3:
			printf("Wednesday\n");
			break;

		case 4:
			printf("Thursday\n");
			break;

		case 5:
			printf("Friday\n");
			break;

		case 6:
			printf("Saturday\n");
			break;

		case 7:
			printf("Sunday\n");
			break;

		default:
			printf("Invalid day.\n");
	}

	printf("\nConditional statements allow a program to make decisions.\n");

	return 0;
}