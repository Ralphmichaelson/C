#include<stdio.h>
main()
{
	int a=20;
	int b=6;

	int sum;
	int difference;
	int product;
	int quotient;
	int remainder;

	int x;

	int equal;
	int not_equal;
	int greater;
	int less;
	int greater_equal;
	int less_equal;

	int both_true;
	int either_true;
	int not_true;

	int increment;
	int decrement;

	int result1;
	int result2;

	sum=a+b;
	difference=a-b;
	product=a*b;
	quotient=a/b;
	remainder=a%b;

	printf("a is:%d\n",a);
	printf("b is:%d\n",b);

	printf("sum is:%d\n",sum);
	printf("difference is:%d\n",difference);
	printf("product is:%d\n",product);
	printf("quotient is:%d\n",quotient);
	printf("remainder is:%d\n",remainder);

	x=20;

	x+=5;
	printf("\nx after +=5 is:%d\n",x);

	x-=3;
	printf("x after -=3 is:%d\n",x);

	x*=2;
	printf("x after *=2 is:%d\n",x);

	x/=4;
	printf("x after /=4 is:%d\n",x);

	x%=3;
	printf("x after %%=3 is:%d\n",x);

	equal=a==b;
	not_equal=a!=b;
	greater=a>b;
	less=a<b;
	greater_equal=a>=b;
	less_equal=a<=b;

	printf("\na==b is:%d\n",equal);
	printf("a!=b is:%d\n",not_equal);
	printf("a>b is:%d\n",greater);
	printf("a<b is:%d\n",less);
	printf("a>=b is:%d\n",greater_equal);
	printf("a<=b is:%d\n",less_equal);

	both_true=(a>10)&&(b<10);
	either_true=(a>10)||(b>10);
	not_true=!(a<10);

	printf("\na>10 && b<10 is:%d\n",both_true);
	printf("a>10 || b>10 is:%d\n",either_true);
	printf("!(a<10) is:%d\n",not_true);

	increment=10;
	increment++;
	printf("\nincrement value is:%d\n",increment);

	decrement=10;
	decrement--;
	printf("decrement value is:%d\n",decrement);

	result1=2+3*4;
	result2=(2+3)*4;

	printf("\n2+3*4 is:%d\n",result1);
	printf("(2+3)*4 is:%d\n",result2);

	return 0;
}