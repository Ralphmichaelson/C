#include<stdio.h>
main()
{
	int i;
	int number;
	int count;
	int sum;
	int x;
	int y;

	printf("===== LOOPS IN C =====\n\n");

	/* 1. FOR LOOP */
	printf("1. FOR LOOP\n");

	for(i=1;i<=5;i++)
	{
		printf("%d\n",i);
	}

	/* 2. FOR LOOP WITH CALCULATION */
	printf("\n2. SQUARES USING FOR LOOP\n");

	for(i=1;i<=5;i++)
	{
		printf("%d squared is:%d\n",i,i*i);
	}

	/* 3. WHILE LOOP */
	printf("\n3. WHILE LOOP\n");

	count=1;

	while(count<=5)
	{
		printf("%d\n",count);
		count++;
	}

	/* 4. WHILE LOOP WITH CALCULATION */
	printf("\n4. COUNTING DOWN USING WHILE LOOP\n");

	number=5;

	while(number>=1)
	{
		printf("%d\n",number);
		number--;
	}

	/* 5. DO...WHILE LOOP */
	printf("\n5. DO...WHILE LOOP\n");

	count=1;

	do
	{
		printf("%d\n",count);
		count++;
	}
	while(count<=5);

	/* 6. DO...WHILE RUNS AT LEAST ONCE */
	printf("\n6. DO...WHILE EXAMPLE\n");

	number=10;

	do
	{
		printf("This statement runs at least once.\n");
		number++;
	}
	while(number<5);

	/* 7. BREAK */
	printf("\n7. BREAK STATEMENT\n");

	for(i=1;i<=10;i++)
	{
		if(i==6)
		{
			break;
		}

		printf("%d\n",i);
	}

	/* 8. CONTINUE */
	printf("\n8. CONTINUE STATEMENT\n");

	for(i=1;i<=10;i++)
	{
		if(i==5)
		{
			continue;
		}

		printf("%d\n",i);
	}

	/* 9. NESTED LOOPS */
	printf("\n9. NESTED LOOPS\n");

	for(x=1;x<=3;x++)
	{
		for(y=1;y<=3;y++)
		{
			printf("x=%d y=%d\n",x,y);
		}
	}

	/* 10. SUM USING A LOOP */
	printf("\n10. SUM FROM 1 TO 10\n");

	sum=0;

	for(i=1;i<=10;i++)
	{
		sum=sum+i;
	}

	printf("sum is:%d\n",sum);

	return 0;
}