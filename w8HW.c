#include <stdio.h>

void name(void)
{

	printf("�w�����ԍ�: 1CJM2221\n");
	printf("����: �A�����@�T�~�n\n");

	return ;
}

void ave1(double a, double b, double c)
{

	printf("���ρ�%lf\n",(a+b+c)/3.0);

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

	printf("1�ڂ̎����́H\n");
	scanf("%lf",&num1);

	printf("2�ڂ̎����́H\n");
	scanf("%lf",&num2);

	printf("3�ڂ̎����́H\n");
	scanf("%lf",&num3);

	printf("\n");

	ave1(num1,num2,num3);

	printf("\n");

	x=ave2(num1, num2, num3);
	printf("���ρ�%lf\n",x);

    	return 0;
}


