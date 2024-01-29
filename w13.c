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

	printf("��������͂��Ă�������\n");
	scanf("%lf",&n);

	printf("�����_�ȉ����R���ŏo�͂���ƁA%.3lf�ł�\n",n);

	return 0;

}
*/

/*
#include <stdio.h>

int main ()
{

	printf("�~������%-6.2lf�ł�\n",3.141592);

	return 0;

}
*/

/*
#include <stdio.h>

int main ()
{

	printf("10��10�i���ŕ\�L�����%d�ł��B\n",10);

	printf("10��8�i���ŕ\�L�����%o�ł��B\n",10);
	printf("12��8�i���ŕ\�L�����%o�ł��B\n",12);

	printf("10��16�i���ŕ\�L�����%x�ł��B\n",10);

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
		printf("�t�@�C�����I�[�v���ł��܂���ł����B\n");
		return 1;
	}

	else{
		printf("�t�@�C�����I�[�v�����܂����B\n");
	}

	fclose(fp);
	printf("�t�@�C�����N���[�Y���܂����B\n");

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
		printf("�t�@�C�����I�[�v���ł��܂���ł����B\n");
		return 1;
	}

	else{
		printf("�t�@�C�����I�[�v�����܂����B\n");
	}

	fputs("hello\n",fp);
	fputs("good morning\n",fp);
	printf("�t�@�C���ɏ������݂��܂����B\n");
	

	fclose(fp);
	printf("�t�@�C�����N���[�Y���܂����B\n");

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
		printf("�t�@�C�����I�[�v���ł��܂���ł����B\n");
		return 1;
	}

	else{
		printf("�t�@�C�����I�[�v�����܂����B\n");
	}

	printf("%d�l�̓_������͂��Ă��������B\n",NUM);
	for(n=0; n<NUM; n++){
;		scanf("%d",&test[n]);
	}

	for (n=0; n<NUM; n++){
		fprintf(fp,"No.%-5d%d\n",n+1,test[n]);
	}

	printf("�t�@�C���ɏ������݂��܂����B\n");

	fclose(fp);
	printf("�t�@�C�����N���[�Y���܂����B\n");

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
		printf("�t�@�C�����I�[�v���ł��܂���ł����B\n");
		return 1;
	}

	else{
		printf("�t�@�C�����I�[�v�����܂����B\n");
	}


	fgets(str1, NUM-1, fp);
	fgets(str2, NUM-1, fp);

	printf("�t�@�C���ɏ������܂�Ă��镶�����\n");

	printf("%s",str1);
	printf("%s",str2);

	fclose(fp);
	printf("�t�@�C�����N���[�Y���܂����B\n");

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
		printf("�t�@�C�����I�[�v���ł��܂���ł����B\n");
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

	printf("�ō��_��%d�ł��B\n",max);
	printf("�Œ�_��%d�ł��B\n",min);

	fclose(fp);
	printf("�t�@�C�����N���[�Y���܂����B\n");

	return 0;

}
