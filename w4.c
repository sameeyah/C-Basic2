#include<stdio.h>

int main(void)
{

/*	int a;

	printf("10+50=%d\n",10+50);
	printf("10>50=%d\n",10>50);
	printf("10<50=%d\n",10<50);

	a=10;

	printf("10+50=%d\n",10+50);
	printf("10>50=%d\n",10>50);
	printf("10<50=%d\n",10<50);


	int res;

	printf("整数を入力してください。\n");
	scanf("%d",&res);

	if (res==1)
		printf("１が入力されました。\n");

	printf("処理を終了します。\n");


	int res;

	printf("整数を入力してください。\n");
	scanf("%d",&res);

	printf("１が入力されました。\n");


	if (res>1){
		printf("resは１より大きいです。\n");
	}
	else (res<1);{
		printf("resは１より小さいです。\n");
	}

	printf("処理を終了します。\n");


	int t;

	printf("整数を入力してください。\n");
	scanf("%d",&t);

	if(t==1){
		printf("１が入力されました。\n");
		printf("１を選択しました。\n");
	}

	printf("処理を終了します。\n");



	int s;

	printf("整数を入力してください。\n");
	scanf("%d",&s);

	printf("%dが入力されました。\n",s);

	if(s%2!=1)
		printf("偶数です。\n");

	printf("処理を終了します。\n");


	int s;

	printf("整数を入力してください。\n");
	scanf("%d",&s);

	printf("%dが入力されました。\n",s);

	if(s%2==1){
		printf("偶数です。\n");
	}

	printf("処理を終了します。\n");



	int s;

	printf("整数を入力してください。\n");
	scanf("%d",&s);

	printf("%dが入力されました。\n",s);

	if(s%2==0){
		printf("偶数です。\n");
			if(s%3==0){
				printf("３の倍数です。\n");
			}
	}

	printf("処理を終了します。\n");



	int a,b;

	printf("整数を入力してください。\n");
	scanf("%d",&a);

	printf("整数を入力してください。\n");
	scanf("%d",&b);

	printf("%dと%dが入力されました。\n",a,b);

	if(a>b){
		printf("%dの方が大きいです。\n",a);
	}
	else{
		printf("%dの方が大きいです。\n",b);
	}

	printf("処理を終了します。\n");



	double a;

	printf("実数を入力してください。\n");
	scanf("%lf",&a);

	printf("%lfが入力されました。\n",a);

	if(a>0){
		printf("絶対値は%lfです。\n",a);
	}
	else{
		printf("絶対値は%lfです。\n",-a);
	}

	printf("処理を終了します。\n");


	int a;

	printf("整数を入力してください。\n");
	scanf("%d",&a);

	printf("%dが入力されました。\n",a);

	if(a>0){
		printf("%dは正です。\n",a);
	}
	else if(a<0){
		printf("%dは負です。\n",a);
	}
	else{
		printf("%dはゼロです。\n",a);
	}

	printf("処理を終了します。\n");


	int a,b;

	printf("数学の点数を入力してください。\n");
	scanf("%d",&a);

	printf("英語の点数を入力してください。\n");
	scanf("%d",&b);

	if(a&&b>=80){
		printf("数学も英語もよくできました。\n");
	}

	else if(a>=80){
		printf("数学がよくできました。\n");
	}

	else if(b>=80){
		printf("英語がよくできました。\n");
	}

	else {
		printf("頑張りましょう。\n");
	}

*/

	int a,b;

	printf("数学の点数を入力してください。\n");
	scanf("%d",&a);

	printf("英語の点数を入力してください。\n");
	scanf("%d",&b);

	if(a>=80&&b>=80){
		printf("数学も英語もよくできました。\n");
	}

	else {
		printf("頑張りましょう。\n");
	}


return 0;
}
