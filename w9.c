/*
#include<stdio.h>

int main(void)
{
	int n, k;

	for (n=1; n<=10; n++){
		for(k=1; k<=n; k++){
			printf("Z");
		}
		printf("\n");
	}

return 0;
}
*/

/*
#include <stdio.h>

void maru(int m)
{	
	int k;

	for(k=1; k<=m; k++){
		printf("Z");
	}
	printf("\n");
}

int main (void)
{
	int n;

	for(n=1; n<=10; n++){
		maru(n);
	}

	return 0;
}
*/

/*
#include<stdio.h>

int main(void)
{
	int n, k;

	printf("³‚Ì®”‚ğ“ü—Í‚µ‚Ä‚­‚¾‚³‚¢ ") ;
	scanf("%d", &n) ;

	for (k=2; k<n; k++){
		if(n%k==0){
			printf("%d‚Í‘f”‚Å‚È‚¢",n);
			return 0;
		}
	}
	printf("%d‚Í‘f”‚Å‚·\n", n) ;

return 0;
}
*/

/*
#include <stdio.h>

int is_prime(int m)
{
	int k;

	for (k=2; k<m; k++){
		if(m%k==0){
			return 0;
		}
	}
return 1;
}

int main(void)
{
	int n, kekka;

	printf("³‚Ì®”‚ğ“ü—Í‚µ‚Ä‚­‚¾‚³‚¢ ") ;
	scanf("%d", &n) ;

	kekka=is_prime(n);

	if (kekka==1){
		printf("%d‚Í‘f”‚Å‚·\n", n);
	}
	else{
		printf("%d‚Í‘f”‚Å‚È‚¢",n);
	}

return 0;
}
*/

/*
#include <stdio.h>
int is_prime(int m)
{
	int k;

	for (k=2; k<m; k++){
		if(m%k==0){
			return 0;
		}
	}
return 1;
}

int main(void)
{
	int n, kekka;

	for (n=1001; n<=1100; n++){

		if (is_prime(n)==1){
			printf("%d‚Í‘f”‚Å‚·\n", n);
		}
	}

return 0;
}
*/




