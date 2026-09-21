#include<stdio.h>
#include<string.h>

void changeValue(int *number)
{
	*number=*number+10;
}

int main()
{
	char name[]="Michael";
	char otherName[]="Michael";
	char copiedName[20];

	int length;
	int comparison;

	int number=20;
	int *pointer;

	int numbers[3]={10,20,30};
	int *arrayPointer;

	printf("===== STRINGS AND POINTERS IN C =====\n\n");

	/* 1. STRING */
	printf("1. STRING\n");

	printf("name is:%s\n",name);

	/* 2. STRING LENGTH */
	printf("\n2. STRING LENGTH\n");

	length=strlen(name);

	printf("length is:%d\n",length);

	/* 3. COPYING A STRING */
	printf("\n3. COPYING A STRING\n");

	strcpy(copiedName,name);

	printf("original name is:%s\n",name);
	printf("copied name is:%s\n",copiedName);

	/* 4. COMPARING STRINGS */
	printf("\n4. COMPARING STRINGS\n");

	comparison=strcmp(name,otherName);

	if(comparison==0)
	{
		printf("The strings are equal.\n");
	}
	else
	{
		printf("The strings are not equal.\n");
	}

	/* 5. ADDRESS OF A VARIABLE */
	printf("\n5. ADDRESS OF A VARIABLE\n");

	printf("number is:%d\n",number);
	printf("address of number is:%p\n",(void*)&number);

	/* 6. POINTER */
	printf("\n6. POINTER\n");

	pointer=&number;

	printf("number is:%d\n",number);
	printf("value stored in pointer is:%p\n",(void*)pointer);
	printf("value pointed to by pointer is:%d\n",*pointer);

	/* 7. CHANGING VALUE USING POINTER */
	printf("\n7. CHANGING VALUE USING POINTER\n");

	changeValue(&number);

	printf("new number is:%d\n",number);

	/* 8. POINTER AND ARRAY */
	printf("\n8. POINTER AND ARRAY\n");

	arrayPointer=numbers;

	printf("first element is:%d\n",*arrayPointer);
	printf("second element is:%d\n",*(arrayPointer+1));
	printf("third element is:%d\n",*(arrayPointer+2));

	/* 9. ARRAY USING INDEX */
	printf("\n9. ARRAY USING INDEX\n");

	printf("numbers[0] is:%d\n",numbers[0]);
	printf("numbers[1] is:%d\n",numbers[1]);
	printf("numbers[2] is:%d\n",numbers[2]);

	return 0;
}