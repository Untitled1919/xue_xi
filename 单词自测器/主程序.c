#include"ͷ�ļ�.h"
int main()
{
	srand(time(NULL));
	int play;
	char e[13][20]; // �洢Ӣ�ĵ���
	char c[13][20]; // �洢���ķ���

	printf("������13�����ʼ���˳���������ģ�\n");

	for (int i = 0; i < 13; i++) 
	{
		// ����Ӣ�ĵ���
		printf("Ӣ�� %d: ", i + 1);
		fgets(e[i], 20, stdin);
		e[i][strcspn(e[i], "\n")] = '\0'; // ȥ��ĩβ�Ļ��з�

		// �������ķ���
		printf("���� %d: ", i + 1);
		fgets(c[i], 20, stdin);
		c[i][strcspn(c[i], "\n")] = '\0'; // ȥ��ĩβ�Ļ��з�
	}
	/*char c[13][20] = { "����","������","��","�к�","Ů��","�ڿ�","��","����","��ȷ��/��","��","�����","���","С��" };
	char e[13][20] = { "matter","children","tired","boy","girl","thirsty","mum","sit down","right","left","ice cream","big","small" };*/
	system("cls");
	do
	{
		printf("**************************\n");
		printf("******** ������д ********\n");
		printf("1:дӢ��  2:д����  3:͵��\n");
		printf("**************************\n");
		printf("**************************");
		printf("\n   ��ѡ��(1��2��3)��");
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
			printf("ֻ��ѡ1��2��3");
		}

	} while (play);

	return 0;
}

