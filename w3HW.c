#include<stdio.h>

int main(void)
{
	int m, r, sum=0;

	printf("元本（整数）を入力してください。\n");
	scanf("%d",&m);
	
	printf("利率（％、整数）を入力してください。\n");
	scanf("%d",&r);

	sum+=m+(m*r*0.01);
	printf("１年後の合計は%d円です。\n",sum);

	sum+=(sum*r*0.01);
	printf("２年後の合計は%d円です。\n",sum);

	return 0;
}
