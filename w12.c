/*
#include <stdio.h>

struct Car{
	int num;
	double gas;
};

int main(void)
{	
	struct Car car1;

	car1.num=1234;
	car1.gas=25.5;
	printf("車のナンバーは%d,ガソリン量は%lfです。",car1.num, car1.gas);

	return 0;
}
*/

/*
#include <stdio.h>

typedef struct Car{
	int num;
	double gas;
} Car ;

int main(void)
{	
	Car car1;

	car1.num=1234;
	car1.gas=25.5;
	printf("車のナンバーは%d,ガソリン量は%lfです。",car1.num, car1.gas);

	return 0;
}
*/

/*
#include <stdio.h>

typedef struct Car{
	int num;
	double gas;
} Car ;

int main(void)
{	
	Car car1={1234, 25.5};
	Car car2={4567, 52.2};

	printf("car1の車のナンバーは%d,ガソリン量は%lfです。\n",car1.num, car1.gas);
	printf("car2の車のナンバーは%d,ガソリン量は%lfです。\n",car2.num, car2.gas);

	car2=car1;

	printf("car1の値をcar2に代入しました。\n");
	printf("car2のナンバーは%d,ガソリン量は%lfになりました。\n",car2.num, car2.gas);

	return 0;
}
*/

/*
#include <stdio.h>

typedef struct Car{
	int num;
	double gas;
} Car ;

void show(Car c);

int main(void)
{	
	Car car1={0, 0.0};

	printf("ナンバーを入力してください：");
	scanf("%d",&car1.num);

	printf("ガソリン量を入力してください：");
	scanf("%lf",&car1.gas);

	show(car1);

	return 0;
}

void show (Car c)
{
	printf("車のナンバーは%d,ガソリン量は%lfです。",c.num, c.gas);
}
*/

#include <stdio.h>

typedef struct Car{
	int num;
	double gas;
} Car ;



int main(void)
{	
	Car cars[3];
	int n;

	cars[0].num=1234;
	cars[1].num=4567;
	cars[2].num=7890;

	cars[0].gas=25.5;
	cars[1].gas=52.2;
	cars[2].gas=20.5;

	for(n=0; n<3; n++){	
		printf("車のナンバーは%d,ガソリン量は%lfです。\n",cars[n].num, cars[n].gas);
	}

	return 0;
}

