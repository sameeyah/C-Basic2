#include<stdio.h>

int main(void)
{
	int m, r, sum=0;

	printf("���{�i�����j����͂��Ă��������B\n");
	scanf("%d",&m);
	
	printf("�����i���A�����j����͂��Ă��������B\n");
	scanf("%d",&r);

	sum+=m+(m*r*0.01);
	printf("�P�N��̍��v��%d�~�ł��B\n",sum);

	sum+=(sum*r*0.01);
	printf("�Q�N��̍��v��%d�~�ł��B\n",sum);

	return 0;
}
