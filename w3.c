#include<stdio.h>

int main(void)
{
	int x, sum=0;
	double avg;

	printf("整数1を入力してください\n");
	scanf("%d",&x);
	sum+=x;

	printf("整数２を入力してください\n");
	scanf("%d",&x);
	sum+=x;

	printf("整数3を入力してください\n");
	scanf("%d",&x);
	sum+=x;

	printf("整数4を入力してください\n");
	scanf("%d",&x);
	sum+=x;

	printf("足し算の結果は%dです\n",sum);

	avg=(double)sum/4;
	printf("平均の結果は%lfです\n",avg);

	return 0;
}
