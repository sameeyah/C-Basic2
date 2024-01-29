#include<stdio.h>

int main(void)
{
	int x, sum=0;
	double avg;

	printf("®”1‚ğ“ü—Í‚µ‚Ä‚­‚¾‚³‚¢\n");
	scanf("%d",&x);
	sum+=x;

	printf("®”‚Q‚ğ“ü—Í‚µ‚Ä‚­‚¾‚³‚¢\n");
	scanf("%d",&x);
	sum+=x;

	printf("®”3‚ğ“ü—Í‚µ‚Ä‚­‚¾‚³‚¢\n");
	scanf("%d",&x);
	sum+=x;

	printf("®”4‚ğ“ü—Í‚µ‚Ä‚­‚¾‚³‚¢\n");
	scanf("%d",&x);
	sum+=x;

	printf("‘«‚µZ‚ÌŒ‹‰Ê‚Í%d‚Å‚·\n",sum);

	avg=(double)sum/4;
	printf("•½‹Ï‚ÌŒ‹‰Ê‚Í%lf‚Å‚·\n",avg);

	return 0;
}
