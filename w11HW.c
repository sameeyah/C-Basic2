/*
#include<stdio.h>

void tasu_hiku(double x, double y, double *pWa, double *pSa);

int main(void)
{
	double x,y,a,b;

	printf("実数x,y?\n");
	scanf("%lf%lf",&x,&y);

	tasu_hiku(x,y,&a,&b);

	printf("和=%lf, 差=%lf\n",a,b);

	return 0;

}

void tasu_hiku(double x, double y, double *pWa, double *pSa)
{
	*pWa=x+y;
	*pSa=x-y;

}
*/

#include<stdio.h>

int sum(int x[], int n);

int main(void)
{
	int a[4]={10,30,40,20};
	int b[6]={1,2,3,4,5,6};

	printf("aの合計は=%d\n",sum(a,4));
	printf("bの合計は=%d\n",sum(b,6));

	return 0;

}

int sum(int x[], int n)
{
	int sum=0, num;

	for(num=0; num<n; num++){
		sum+=x[num];
	}

	return sum;

}
