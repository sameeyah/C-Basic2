#include <stdio.h>
#include <string.h>

typedef struct Seito{
	char name[100];
	char gakka[100];
	int age;
	double weight;
	double height;
	int score[3];
} Seito ;
	
void disp_seito (Seito x);

int main(void){

	Seito s1={"���Y", "�o�c�V�X�e���H�w��", 22, 65.9, 173.5, 90, 60, 70};

	Seito s2;

	s2=s1;

	s2.height *= 0.9;
	s2.score[1] += 10;
	strcpy(s2.name, "�Ԏq");

	disp_seito (s1);
	disp_seito (s2);

	return 0;
}

void disp_seito(Seito x)
{
	double ave;

	ave=( x.score[0]+ x.score[1]+ x.score[2])/3;

	printf("%s,%s�B�N���%d,�̏d��%lf,�g����%lf,�_����%d,%d,%d�B\n",x.name, x.gakka, x.age, x.weight, x.height, x.score[0], x.score[1], x.score[2]);
	printf("���ς�%lf\n",ave);
}

