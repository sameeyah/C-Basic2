/*
#include<stdio.h>

int main()
{
	int a;
	a=5;

	printf("�ϐ�a�̒l��%d�ł��B\n",a);
	printf("�ϐ�a�̃A�h���X��%p�ł��B\n",&a);

	return 0;
}
*/

/*
#include<stdio.h>

int main()
{
	int a;
	int *pA;

	a=5;
	pA=&a;

	printf("�ϐ�a�̒l��%d�ł��B\n",a);
	printf("�ϐ�a�̃A�h���X��%p�ł��B\n",&a);

	printf("�|�C���^pA�̒l��%p�ł��B\n",pA);

	return 0;
}
*/

/*
#include<stdio.h>

int main()
{
	int a;
	int *pA;

	a=5;
	pA=&a;

	printf("�ϐ�a�̒l��%d�ł��B\n",a);
	printf("�ϐ�a�̃A�h���X��%p�ł��B\n",&a);

	printf("�|�C���^pA�̒l��%p�ł��B\n",pA);
	printf("pA�̂����l��%d�ł��B\n",*pA);

	return 0;
}
*/


/*
#include<stdio.h>

int main()
{
	int a,b;
	int *pA;

	a=5;
	b=10;

	pA=&a;

	printf("�ϐ�a�̒l��%d�ł��B\n",a);
	printf("�|�C���^pA�̒l��%p�ł��B\n",pA);
	printf("pA�̂����l��%d�ł��B\n",*pA);

	pA=&b;

	printf("�ϐ�a�̒l��%d�ł��B\n",b);
	printf("�|�C���^pA�̒l��%p�ł��B\n",pA);
	printf("pA�̂����l��%d�ł��B\n",*pA);

	return 0;
}

*/

/*
#include<stdio.h>

int main()
{
	int a;
	int *pA;

	a=5;
	pA=&a;

	printf("�ϐ�a�̒l��%d�ł��B\n",a);

	*pA=50;

	printf("pA��50�������܂����B\n");
	printf("�ϐ�a�̒l��%d�ł��B\n",a);

	return 0;
}
*/

/*
#include<stdio.h>

int main()
{

	int num1, num2;

	num1=5;
	num2=10;

	swap(&num1, &num2);

	return 0;
}

void swap(int *pX, int *pY)
{
	int tmp;

	tmp=*pX;
	*pX=*pY;
	*pY=tmp;
}
*/

/*
#include<stdio.h>

int main()
{

	int test[5]={80,60,55,22,75};

	printf("test[0]�̒l��%d�ł��B\n",test[0]);
	printf("test[0]�̃A�h���X��%p�ł��B\n",&test[0]);

	printf("test[1]�̒l��%d�ł��B\n",test[1]);
	printf("test[1]�̃A�h���X��%p�ł��B\n",&test[1]);

	return 0;
}
*/

#include<stdio.h>

int main()
{
	double avg(int t[]);

	
}

double avg(int t[])
{
	int n;
	double sum=0.0;

	for(n=0; n<5; n++){
		sum+=t[n]
	}

	return sum/5;
}


