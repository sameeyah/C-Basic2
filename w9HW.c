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
	int n, kosuu=0;

	for (n=1000; kosuu<10; n--){
		if (is_prime(n)==1){
			printf("%d‚Í‘f”‚Å‚·\n", n);
			kosuu++;
		}
	}

return 0;
}