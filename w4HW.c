#include<stdio.h>

int main(void)
{
	int a,b;

	printf("数学の点数を入力してください。\n");
	scanf("%d",&a);

	printf("英語の点数を入力してください。\n");
	scanf("%d",&b);

	if(a>=80 && b>=80){
		printf("数学も英語もよくできました。\n");
	}

	else if(a>=80){
		printf("英語を頑張りましょう。\n");
	}

	else if(b>=80){
		printf("数学を頑張りましょう。\n");
	}

	else {
		printf("数学と英語のどちらも頑張りましょう。\n");
	}
	return 0;
}
