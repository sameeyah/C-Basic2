/*
#include<stdio.h>

int a=0;

void func(void)
{
	int c=2;
}

int main(void)
{
	int b=1;

	printf("main�֐��ł�a��b���g���܂��B\n");
	printf("�ϐ�a�̒l��%d�ł��B\n",a);
	printf("�ϐ�b�̒l��%d�ł��B\n",b);
	//printf("�ϐ�c�̒l��%d�ł��B\n",c);

	func();

	return 0;
}

*/

/*
#include<stdio.h>

int a=0;

void func(void)
{
	int c=2;

	printf("[func]a=%d\n",a);
	printf("[func]b=%d\n",b);
	printf("[func]c=%d\n",c);
}

int main(void)
{
	int b=1;

	printf("[main]a=%d\n",a);
	printf("[main]b=%d\n",b);
	printf("[main]c=%d\n",c);

	func();

	return 0;
}
*/

/*
#include<stdio.h>

int a=0;

void func(void)
{
	int c=2;
	a=a+100;

	printf("[func]a=%d\n",a);
	printf("[func]c=%d\n",c);
}

int main(void)
{
	int b=1;
	a+=10;

	printf("[main]a=%d\n",a);
	printf("[main]b=%d\n",b);

	func();

	return 0;
}
*/

/*
#include<stdio.h>

int a=0;

void func(void)
{
	int b=0;
	static int c=0;

	printf("�ϐ�a��%d�A�ϐ�b��%d�A�ϐ�c��%d\n",a,b,c);
	
	a++;
	b++;
	c++;

}

int main(void)
{
	int i;

	for(i=0; i<5; i++)
		func();

	return 0;
}
*/


