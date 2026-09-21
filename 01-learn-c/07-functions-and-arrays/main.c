#include<stdio.h>

int add(int a,int b)
{
	int sum;

	sum=a+b;

	return sum;
}

int multiply(int a,int b)
{
	int product;

	product=a*b;

	return product;
}

void displayArray(int numbers[],int size)
{
	int i;

	for(i=0;i<size;i++)
	{
		printf("%d ",numbers[i]);
	}
}

int sumArray(int numbers[],int size)
{
	int i;
	int sum;

	sum=0;

	for(i=0;i<size;i++)
	{
		sum=sum+numbers[i];
	}

	return sum;
}

int largestArray(int numbers[],int size)
{
	int i;
	int largest;

	largest=numbers[0];

	for(i=1;i<size;i++)
	{
		if(numbers[i]>largest)
		{
			largest=numbers[i];
		}
	}

	return largest;
}

int main()
{
	int a=10;
	int b=5;
	int result;

	int numbers[5]={10,20,30,40,50};
	int total;
	int largest;

	printf("===== FUNCTIONS AND ARRAYS IN C =====\n\n");

	printf("1. FUNCTION WITH PARAMETERS\n");

	result=add(a,b);

	printf("sum is:%d\n",result);

	result=multiply(a,b);

	printf("product is:%d\n",result);

	printf("\n2. ARRAY ELEMENTS\n");

	printf("First element is:%d\n",numbers[0]);
	printf("Second element is:%d\n",numbers[1]);
	printf("Third element is:%d\n",numbers[2]);
	printf("Fourth element is:%d\n",numbers[3]);
	printf("Fifth element is:%d\n",numbers[4]);

	printf("\n3. DISPLAY ARRAY USING FUNCTION\n");

	displayArray(numbers,5);

	printf("\n\n4. SUM OF ARRAY ELEMENTS\n");

	total=sumArray(numbers,5);

	printf("sum is:%d\n",total);

	printf("\n5. LARGEST ARRAY ELEMENT\n");

	largest=largestArray(numbers,5);

	printf("largest value is:%d\n",largest);

	return 0;
}