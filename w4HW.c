#include<stdio.h>

int main(void)
{
	int a,b;

	printf("���w�̓_������͂��Ă��������B\n");
	scanf("%d",&a);

	printf("�p��̓_������͂��Ă��������B\n");
	scanf("%d",&b);

	if(a>=80 && b>=80){
		printf("���w���p����悭�ł��܂����B\n");
	}

	else if(a>=80){
		printf("�p����撣��܂��傤�B\n");
	}

	else if(b>=80){
		printf("���w���撣��܂��傤�B\n");
	}

	else {
		printf("���w�Ɖp��̂ǂ�����撣��܂��傤�B\n");
	}
	return 0;
}
