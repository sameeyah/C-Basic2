/*#include <stdio.h>
#define NUM 8

int main(void)
{

	int test[NUM]={2,4,6,8,1,3,5,7};
	int i, min, max;
	min=test[0];
	max=test[0];

	printf("配列x: ");

	for(i=0; i<NUM; i++){
		printf("%d ",test[i]);
	}

	printf("\n");

	for(i=1; i<NUM; i++){
		if(test[i]<min){
			min=test[i];
		}
		if(test[i]>max){
			max=test[i];
		}
	}

	printf("最大値= %d, 最小値= %d\n", max, min);

	printf("配列x(逆順): ");

	for(i=NUM-1; i>=0; i--){
		printf("%d ",test[i]);
	}

    	return 0;
}
*/




#include <stdio.h>
#define NUM 5

int main(void)
{

	int test[NUM]={80,60,22,50,75};
	int i, m;

	for(i=0; i<NUM; i++){
		printf("%d ",i+1);
			for(m=1; m<=test[i]/10; m++){
				printf("■");	
			}
		printf(" %d\n",test[i]);
	}

    	return 0;
}


