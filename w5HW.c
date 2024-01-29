/*
#include<stdio.h>

int main(void)
{

	int n;

	for(n=1; n<=100; n++){
		if(n%17==0){
			printf("%d\n",n);
		}
	}

	return 0;
}



*/


#include <stdio.h>

int main(void)
{
   	int  i, j, n;

   	printf("‚¢‚­‚Âo—Í‚µ‚Ü‚·‚©H\n");
   	scanf("%d", &n);

   	for(i=1; i<=n; i++){
		printf("%d ",i);
       			for(j=1; j<=i; j++){
				if(i%2==0){
            				printf("+");
				}
				else{
            				printf("*");
				}
        		}
        	printf("\n");
    	}

    	return 0;
}

