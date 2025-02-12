#include"头文件.h"
int main()
{
	srand(time(NULL));
	int play;
	char e[13][20]; // 存储英文单词
	char c[13][20]; // 存储中文翻译

	printf("请输入13个单词及按顺序输入中文：\n");

	for (int i = 0; i < 13; i++) 
	{
		// 输入英文单词
		printf("英文 %d: ", i + 1);
		fgets(e[i], 20, stdin);
		e[i][strcspn(e[i], "\n")] = '\0'; // 去除末尾的换行符

		// 输入中文翻译
		printf("中文 %d: ", i + 1);
		fgets(c[i], 20, stdin);
		c[i][strcspn(c[i], "\n")] = '\0'; // 去除末尾的换行符
	}
	/*char c[13][20] = { "事情","孩子们","累","男孩","女孩","口渴","妈","坐下","正确的/右","左","冰淇淋","大的","小的" };
	char e[13][20] = { "matter","children","tired","boy","girl","thirsty","mum","sit down","right","left","ice cream","big","small" };*/
	system("cls");
	do
	{
		printf("**************************\n");
		printf("******** 单词听写 ********\n");
		printf("1:写英文  2:写中文  3:偷懒\n");
		printf("**************************\n");
		printf("**************************");
		printf("\n   请选择(1或2或3)：");
		scanf("%d", &play);
		switch (play)
		{
		case 1:
			english(c, e);

			break;
		case 2:
			chinese(c, e);
			break;
		case 3:
			play = 0;
			break;
		default:
			printf("只能选1或2或3");
		}

	} while (play);

	return 0;
}

