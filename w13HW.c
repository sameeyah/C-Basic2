#include <stdio.h>
#define NUM 10

int main(){

	FILE *fp1, *fp2;
	int test[NUM];
	int sum=0, n;
	double ave;
	char fname[100];

	fp1=fopen("test13.txt","r");

	if(fp1==NULL){
		printf("�t�@�C�����I�[�v���ł��܂���ł����B\n");
	return 1;
	}

	else {
	printf("�I�[�v�����܂����B");
	}


	for(n=0; n<NUM; n++){
		fscanf(fp1,"%d",&test[n]);
		sum+=test[n];
	}

	fclose(fp1);

	ave=(double)sum/(double)NUM;

	fp2=fopen("kekka.txt","w");
	for(n=0; n<NUM; n++){
		fprintf(fp2,"%d\n",test[n]);
	}
	

	fprintf(fp2,"���v=%d, ����=%lf\n",sum, ave);

	fclose(fp2);

	return 0;
}
