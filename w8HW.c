#include <stdio.h>

void name(void)
{

	printf("学生明番号: 1CJM2221\n");
	printf("氏名: アラム　サミハ\n");

	return ;
}

void ave1(double a, double b, double c)
{

	printf("平均＝%lf\n",(a+b+c)/3.0);

	return ;
}

double ave2(double a, double b, double c)
{
	return (a+b+c)/3.0;
}

int main(void)
{
	double num1, num2, num3,x;

	name();

	printf("\n");

	printf("1個目の実数は？\n");
	scanf("%lf",&num1);

	printf("2個目の実数は？\n");
	scanf("%lf",&num2);

	printf("3個目の実数は？\n");
	scanf("%lf",&num3);

	printf("\n");

	ave1(num1,num2,num3);

	printf("\n");

	x=ave2(num1, num2, num3);
	printf("平均＝%lf\n",x);

    	return 0;
}


