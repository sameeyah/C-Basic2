#include<stdio.h>

int main(void)
{

/*
	int n,m;

	printf("何回繰り返しますか？");
	scanf("%d",&m);

	for(n=1; n<=m; n++){
		printf("n=%d\n",n);
	}

	printf("繰り返しが終わりました。\n");


	int n;

	for(n=10; n>=1; n--){
		printf("n=%d\n",n);
	}

	printf("繰り返しが終わりました。\n");


	int n;

	for(n=1; n<=10; n++){
		printf("n=%d\n",n);
	}

	printf("繰り返しが終わりました。\n");


	int n;

	for(n=1; n<=100; n+=15){
		printf("n=%d\n",n);
	}

	printf("繰り返しが終わりました。\n");

	printf("n=%d\n",n);


	int n,m,sum=0;

	printf("何回繰り返しますか？\n");
	scanf("%d",&m);

	for(n=1; n<=m; n++){
		sum+=n;
		printf("1から%dまでの合計%d\n",n,sum);
	}

	printf("繰り返しが終わりました。\n");

	printf("1から%dまでの合計%d\n",m,sum);


	int n,m;

	printf("いくつ出力しますか？\n");
	scanf("%d",&m);

	for(n=1; n<=m; n++){
		printf("＊\n");
	}

	printf("繰り返しが終わりました。\n");


	int n,m,sum;

	printf("いくつ出力しますか？\n");
	scanf("%d",&m);

	for(n=1; n<=m; n++){
		if(m%2==0){
			printf("*");
			printf("\n");
		}
		else{
			printf("+");
			printf("\n");
		}
	}

	printf("繰り返しが終わりました。\n");


	int n,m;

	printf("いくつ出力しますか？\n");
	scanf("%d",&m);

	for(n=1; n<=m; n++){
		if(n%2==0){
			printf("*");
		}
		else{
			printf("+");
		}
	}

	printf("\n");
	printf("繰り返しが終わりました。\n");

*/

	int n,m;

	printf("いくつ出力しますか？\n");
	scanf("%d",&m);

	for(n=1; n<=m; n++){
		if(n%2==0){
			printf("*");
		}
		else{
			printf("+");
		}
	}

	printf("\n");
	printf("繰り返しが終わりました。\n");


return 0;
}
