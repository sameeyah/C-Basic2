#include<stdio.h>

/*
void buy(void)
{
	printf("�Ԃ𔃂��܂����B\n");
}

int main(void)
{
	printf("�֐�buy���Ăяo���܂�\n");

	buy();
	
	printf("������x�֐�buy���Ăяo���܂����B\n");

	buy();


void buy(void)
{
	printf("�Ԃ𔃂��܂����B\n");
}

int main(void)
{
	printf("�֐�buy���Ăяo���܂�\n");

	buy();


void buy(int x)
{
	printf("%d���~�̎Ԃ𔃂��܂����B\n",x);
}

int main(void)
{
	printf("�֐�buy���Ăяo���܂�\n");

	buy(20);

	buy(50);



void buy(int x)
{
	printf("%d���~�̎Ԃ𔃂��܂����B\n",x);
}

int main(void)
{
	int num;

	printf("1��ڂ͂�����̎Ԃ𔃂��܂����H\n");
	scanf("%d",&num);

	buy(num);

	printf("2��ڂ͂�����̎Ԃ𔃂��܂����H\n");
	scanf("%d",&num);

	buy(num);



void buy(int x, int y)
{
	printf("%d���~��%d���~�̎Ԃ𔃂��܂����B\n",x,y);
}

int main(void)
{
	int x,y;

	printf("1��ڂ͂�����̎Ԃ𔃂��܂����H\n");
	scanf("%d",&x);

	printf("2��ڂ͂�����̎Ԃ𔃂��܂����H\n");
	scanf("%d",&y);

	buy(x,y);


void buy(void)
{
	printf("�Ԃ𔃂��܂����B\n");
}

int main(void)
{

	buy();

*/

int buy(int x, int y)
{
	int z;

	printf("%d���~��%d���~�̎Ԃ𔃂��܂����B\n",x,y);

	z=x+y;
	
	return z;
}

int main(void)
{
	int num1, num2, sum;

	printf("1��ڂ͂�����̎Ԃ𔃂��܂����H\n");
	scanf("%d",&num1);

	printf("2��ڂ͂�����̎Ԃ𔃂��܂����H\n");
	scanf("%d",&num2);

	sum=buy(num1, num2);

	printf("���v��%d���~�ł��B\n",sum);

return 0;
}
