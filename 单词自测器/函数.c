#include"ͷ�ļ�.h"
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
	shuffle(number, 13);//ʹ��ϴ���㷨����13�����ظ�����
	int i = 0;
	int f = 0;
	double count = 0.0;
	for (i = 0; i < 13; i++)
	{
		printf("Ӣ�ģ�%s\n", e + number[i] * 20);
		printf("�������ӦӢ�ģ�");
		while ((f = getchar()) != '\n');
		scanf("%[^\n]", answer);

		if (strcmp(answer, c + number[i] * 20) == 0)
		{
			printf("��ȷ��\n");
			count++;
		}
		else
		{
			printf("����ģ���Ϊ%s\n", c + number[i] * 20);
		}
	}
	printf("����ģʽѧϰ���\n׼ȷ��Ϊ�ٷ�֮%lf       ��1����", (count / 13) * 100);
	scanf("%d", &i);
	switch (i)
	{
	case 1:
		return;
	default:
		printf("ֻ��ѡ1��2");
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
		printf("���ģ�%s\n", c + number[i] * 20);
		printf("�������ӦӢ�ģ�");
		while ((f = getchar()) != '\n');
	
		scanf("%[^\n]", answer);

		if (strcmp(answer, e + number[i] * 20) == 0)
		{
			printf("��ȷ��\n");
			count++;
		}
		else
		{
			printf("����ģ���Ϊ%s\n", e + number[i] * 20);
		}
	}
	printf("Ӣ��ģʽѧϰ���\n׼ȷ��Ϊ�ٷ�֮%fl       ��1����", (count / 13) * 100);
	scanf("%d", &i);
	switch (i)
	{
	case 1:
		return;
	default:
		printf("ֻ��ѡ1��2");
	}


}