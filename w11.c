/*
#include<stdio.h>

int main()
{
	int a;
	a=5;

	printf("変数aの値は%dです。\n",a);
	printf("変数aのアドレスは%pです。\n",&a);

	return 0;
}
*/

/*
#include<stdio.h>

int main()
{
	int a;
	int *pA;

	a=5;
	pA=&a;

	printf("変数aの値は%dです。\n",a);
	printf("変数aのアドレスは%pです。\n",&a);

	printf("ポインタpAの値は%pです。\n",pA);

	return 0;
}
*/

/*
#include<stdio.h>

int main()
{
	int a;
	int *pA;

	a=5;
	pA=&a;

	printf("変数aの値は%dです。\n",a);
	printf("変数aのアドレスは%pです。\n",&a);

	printf("ポインタpAの値は%pです。\n",pA);
	printf("pAのさす値は%dです。\n",*pA);

	return 0;
}
*/


/*
#include<stdio.h>

int main()
{
	int a,b;
	int *pA;

	a=5;
	b=10;

	pA=&a;

	printf("変数aの値は%dです。\n",a);
	printf("ポインタpAの値は%pです。\n",pA);
	printf("pAのさす値は%dです。\n",*pA);

	pA=&b;

	printf("変数aの値は%dです。\n",b);
	printf("ポインタpAの値は%pです。\n",pA);
	printf("pAのさす値は%dです。\n",*pA);

	return 0;
}

*/

/*
#include<stdio.h>

int main()
{
	int a;
	int *pA;

	a=5;
	pA=&a;

	printf("変数aの値は%dです。\n",a);

	*pA=50;

	printf("pAに50を代入しました。\n");
	printf("変数aの値は%dです。\n",a);

	return 0;
}
*/

/*
#include<stdio.h>

int main()
{

	int num1, num2;

	num1=5;
	num2=10;

	swap(&num1, &num2);

	return 0;
}

void swap(int *pX, int *pY)
{
	int tmp;

	tmp=*pX;
	*pX=*pY;
	*pY=tmp;
}
*/

/*
#include<stdio.h>

int main()
{

	int test[5]={80,60,55,22,75};

	printf("test[0]の値は%dです。\n",test[0]);
	printf("test[0]のアドレスは%pです。\n",&test[0]);

	printf("test[1]の値は%dです。\n",test[1]);
	printf("test[1]のアドレスは%pです。\n",&test[1]);

	return 0;
}
*/

#include<stdio.h>

int main()
{
	double avg(int t[]);

	
}

double avg(int t[])
{
	int n;
	double sum=0.0;

	for(n=0; n<5; n++){
		sum+=t[n]
	}

	return sum/5;
}


