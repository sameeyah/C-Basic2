#include<stdio.h>

int main(void)
{
	int x, sum=0;
	double avg;

	printf("����1����͂��Ă�������\n");
	scanf("%d",&x);
	sum+=x;

	printf("�����Q����͂��Ă�������\n");
	scanf("%d",&x);
	sum+=x;

	printf("����3����͂��Ă�������\n");
	scanf("%d",&x);
	sum+=x;

	printf("����4����͂��Ă�������\n");
	scanf("%d",&x);
	sum+=x;

	printf("�����Z�̌��ʂ�%d�ł�\n",sum);

	avg=(double)sum/4;
	printf("���ς̌��ʂ�%lf�ł�\n",avg);

	return 0;
}
