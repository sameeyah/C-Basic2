#include<stdio.h>

int main(void)
{

/*
	int test[5];
	int i;

	test[0]=80;
	test[1]=60;
	test[2]=22;
	test[3]=50;
	test[4]=75;

	for(i=0; i<5; i++){
		printf("%d番目の人の点数は%d\n",i+1,test[i]);
	}



	int test[5];
	int i;

	test[4]=80;
	test[3]=60;
	test[2]=22;
	test[1]=50;
	test[0]=75;

	for(i=0; i<5; i++){
		printf("%d番目の人の点数は%d\n",i+1,test[i]);
	}



	int test[5]={80,60,22,50,75};
	int i;

	for(i=0; i<5; i++){
		printf("%d番目の人の点数は%d\n",i+1,test[i]);
	}


	#define NUM 5

	int test[NUM];
	int i;

	test[4]=80;
	test[3]=60;
	test[2]=22;
	test[1]=50;
	test[0]=75;

	for(i=0; i<NUM; i++){
		printf("%d番目の人の点数は%d\n",i+1,test[i]);
	}


	#define NUM 10

	int test[NUM]={80,60,22,50,75,49,93,58,68,39};
	int i;

	for(i=0; i<NUM; i++){
		printf("%d番目の人の点数は%d\n",i+1,test[i]);
	}

*/

	#define NUM 5

	int test[NUM]={80,60,22,50,75};
	int i, min=test[0];

	for(i=0; i<NUM; i++){
		if(test[i]<min){
			min=test[i];
		}
	}

	printf("最小値＝%d\n",min);

return 0;
}
