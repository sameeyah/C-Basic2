#include<stdio.h>

/*
void buy(void)
{
	printf("車を買いました。\n");
}

int main(void)
{
	printf("関数buyを呼び出します\n");

	buy();
	
	printf("もう一度関数buyを呼び出しました。\n");

	buy();


void buy(void)
{
	printf("車を買いました。\n");
}

int main(void)
{
	printf("関数buyを呼び出します\n");

	buy();


void buy(int x)
{
	printf("%d万円の車を買いました。\n",x);
}

int main(void)
{
	printf("関数buyを呼び出します\n");

	buy(20);

	buy(50);



void buy(int x)
{
	printf("%d万円の車を買いました。\n",x);
}

int main(void)
{
	int num;

	printf("1台目はいくらの車を買いますか？\n");
	scanf("%d",&num);

	buy(num);

	printf("2台目はいくらの車を買いますか？\n");
	scanf("%d",&num);

	buy(num);



void buy(int x, int y)
{
	printf("%d万円と%d万円の車を買いました。\n",x,y);
}

int main(void)
{
	int x,y;

	printf("1台目はいくらの車を買いますか？\n");
	scanf("%d",&x);

	printf("2台目はいくらの車を買いますか？\n");
	scanf("%d",&y);

	buy(x,y);


void buy(void)
{
	printf("車を買いました。\n");
}

int main(void)
{

	buy();

*/

int buy(int x, int y)
{
	int z;

	printf("%d万円と%d万円の車を買いました。\n",x,y);

	z=x+y;
	
	return z;
}

int main(void)
{
	int num1, num2, sum;

	printf("1台目はいくらの車を買いますか？\n");
	scanf("%d",&num1);

	printf("2台目はいくらの車を買いますか？\n");
	scanf("%d",&num2);

	sum=buy(num1, num2);

	printf("合計で%d万円です。\n",sum);

return 0;
}
