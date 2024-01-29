/*
#include <stdio.h>

int main ()
{
	int n;

	for (n=1; n<=10; n++){
		printf("%3d",n);
	}

	printf("\n");

	for (n=1; n<=10; n++){
		printf("%-3d",n);
	}

	return 0;

}
*/

/*
#include <stdio.h>

int main ()
{
	double n;

	printf("実数を入力してください\n");
	scanf("%lf",&n);

	printf("小数点以下を３桁で出力すると、%.3lfです\n",n);

	return 0;

}
*/

/*
#include <stdio.h>

int main ()
{

	printf("円周率は%-6.2lfです\n",3.141592);

	return 0;

}
*/

/*
#include <stdio.h>

int main ()
{

	printf("10を10進数で表記すると%dです。\n",10);

	printf("10を8進数で表記すると%oです。\n",10);
	printf("12を8進数で表記すると%oです。\n",12);

	printf("10を16進数で表記すると%xです。\n",10);

	return 0;

}
*/

/*
#include <stdio.h>

int main ()
{
	FILE *fp;

	fp = fopen("test.txt","w");

	if(fp == NULL){
		printf("ファイルをオープンできませんでした。\n");
		return 1;
	}

	else{
		printf("ファイルをオープンしました。\n");
	}

	fclose(fp);
	printf("ファイルをクローズしました。\n");

	return 0;

}
*/

/*
#include <stdio.h>

int main ()
{
	FILE *fp;

	fp = fopen("test.txt","a");

	if(fp == NULL){
		printf("ファイルをオープンできませんでした。\n");
		return 1;
	}

	else{
		printf("ファイルをオープンしました。\n");
	}

	fputs("hello\n",fp);
	fputs("good morning\n",fp);
	printf("ファイルに書き込みしました。\n");
	

	fclose(fp);
	printf("ファイルをクローズしました。\n");

	return 0;

}
*/

/*
#include <stdio.h>
#define NUM 5

int main ()
{
	FILE *fp;
	int test[NUM];
	int n;

	fp = fopen("test2.txt","a");

	if(fp == NULL){
		printf("ファイルをオープンできませんでした。\n");
		return 1;
	}

	else{
		printf("ファイルをオープンしました。\n");
	}

	printf("%d人の点数を入力してください。\n",NUM);
	for(n=0; n<NUM; n++){
;		scanf("%d",&test[n]);
	}

	for (n=0; n<NUM; n++){
		fprintf(fp,"No.%-5d%d\n",n+1,test[n]);
	}

	printf("ファイルに書き込みしました。\n");

	fclose(fp);
	printf("ファイルをクローズしました。\n");

	return 0;

}
*/

/*
#include <stdio.h>
#define NUM 20

int main ()
{
	FILE *fp;
	char str1[NUM], str2[NUM];

	fp = fopen("test.txt","r");

	if(fp == NULL){
		printf("ファイルをオープンできませんでした。\n");
		return 1;
	}

	else{
		printf("ファイルをオープンしました。\n");
	}


	fgets(str1, NUM-1, fp);
	fgets(str2, NUM-1, fp);

	printf("ファイルに書き込まれている文字列は\n");

	printf("%s",str1);
	printf("%s",str2);

	fclose(fp);
	printf("ファイルをクローズしました。\n");

	return 0;

}
*/

#include <stdio.h>
#define NUM 8

int main ()
{
	FILE *fp;
	int test[NUM];
	int max, min, n;

	fp = fopen("test3.txt","r");

	if(fp == NULL){
		printf("ファイルをオープンできませんでした。\n");
		return 1;
	}

	for (n = 0; n < NUM; n++) {
		fscanf(fp, "%d", &test[n]) ;
	}

	max = min = test[0] ;

	for(n=0; n<NUM; n++){
		if(max < test[n])
			max = test[n];
		if(min > test[n])
			min = test[n];

	printf("No.%-5d%d\n", n+1, test[n]) ;
	}

	printf("最高点は%dです。\n",max);
	printf("最低点は%dです。\n",min);

	fclose(fp);
	printf("ファイルをクローズしました。\n");

	return 0;

}
