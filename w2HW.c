#include<stdio.h>

int main(void)
{
	int a,b;
	double x,y;

	a = 123;
	printf("a = %d\n",a);

	b = a; 
	printf("�ϐ�b�ɕϐ�a�̒l���������܂���\n");
	printf("b = %d\n",b);

	printf("�ϐ�x�̒l����͂��Ă��������i�����j");
	scanf("%lf",&x);
	printf("x = %lf\n",x);

	y = x;
	printf("�ϐ�y�ɕϐ�x�̒l���������܂���\n");
	printf("y = %lf",y);

	return 0;
}
