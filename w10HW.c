#include <stdio.h>
#define N 5

double a[N];

void get_data();
double calc_sum();

int main(void)
{
	get_data();

	printf("���v��%lf�ł��B",calc_sum());

	return 0;
}

void get_data()
{
	int i;
	
	for(i=0; i<N; i++){
	printf("%d�ڂ̃f�[�^�H�@",i+1);
	scanf("%lf",&a[i]);
	}
}

double calc_sum()
{
	int j;
	double sum=0;
	
	for(j=0; j<N; j++){
		sum+=a[j];
	}
	return sum;
	
}