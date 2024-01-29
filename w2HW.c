#include<stdio.h>

int main(void)
{
	int a,b;
	double x,y;

	a = 123;
	printf("a = %d\n",a);

	b = a; 
	printf("変数bに変数aの値が代入されました\n");
	printf("b = %d\n",b);

	printf("変数xの値を入力してください（実数）");
	scanf("%lf",&x);
	printf("x = %lf\n",x);

	y = x;
	printf("変数yに変数xの値が代入されました\n");
	printf("y = %lf",y);

	return 0;
}
