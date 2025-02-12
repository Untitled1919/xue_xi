#include"头文件.h"
int sj(int min, int max)
{
	return rand() % (max - min + 1) + min;
}

void shuffle(int x[], int n)
{
	for (int i = n - 1; i > 0; i--)
	{
		int j = sj(0, i - 1);
		int over = x[i];
		x[i] = x[j];
		x[j] = over;
	}
}




void chinese(char c[], char e[])
{
	int number[13] = { 0,1,2,3,4,5,6,7,8,9,10,11,12 };
	char answer[20];
	shuffle(number, 13);//使用洗牌算法给出13个不重复数字
	int i = 0;
	int f = 0;
	double count = 0.0;
	for (i = 0; i < 13; i++)
	{
		printf("英文：%s\n", e + number[i] * 20);
		printf("请输入对应英文：");
		while ((f = getchar()) != '\n');
		scanf("%[^\n]", answer);

		if (strcmp(answer, c + number[i] * 20) == 0)
		{
			printf("正确的\n");
			count++;
		}
		else
		{
			printf("错误的，答案为%s\n", c + number[i] * 20);
		}
	}
	printf("中文模式学习完毕\n准确率为百分之%lf       按1返回", (count / 13) * 100);
	scanf("%d", &i);
	switch (i)
	{
	case 1:
		return;
	default:
		printf("只能选1或2");
	}

}



void english(char c[], char e[])
{
	int number[13] = { 0,1,2,3,4,5,6,7,8,9,10,11,12 };
	char answer[20];
	shuffle(number, 13);
	int i = 0;
	int f = 0;
	double count = 0.0;
	for (i = 0; i < 13; i++)
	{
		printf("中文：%s\n", c + number[i] * 20);
		printf("请输入对应英文：");
		while ((f = getchar()) != '\n');
	
		scanf("%[^\n]", answer);

		if (strcmp(answer, e + number[i] * 20) == 0)
		{
			printf("正确的\n");
			count++;
		}
		else
		{
			printf("错误的，答案为%s\n", e + number[i] * 20);
		}
	}
	printf("英文模式学习完毕\n准确率为百分之%fl       按1返回", (count / 13) * 100);
	scanf("%d", &i);
	switch (i)
	{
	case 1:
		return;
	default:
		printf("只能选1或2");
	}


}