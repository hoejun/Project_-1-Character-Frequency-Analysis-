#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

FILE *fr1, *fr2, *fr3, *fr4, *fr5;//�Է� ����
FILE *fw;//��� ���� 

int i;//�ݺ� ����
int Count[52];//���ĺ� ����
char Alphabet;//���ĺ�

void Fr1()
{
	fseek(fr1, 0L, SEEK_SET);

	//���ĺ� ī����
	while ((Alphabet = fgetc(fr1)) != EOF)
	{
		if ((Alphabet >= 'A') && (Alphabet <= 'Z'))//�빮�� �ϰ��
		{
			Count[Alphabet - 65]++;
		}
		else if ((Alphabet >= 'a') && (Alphabet <= 'z'))//�ҹ��� �ϰ��
		{
			Count[Alphabet - 71]++;
		}
	}

	for (i = 0; i < 52; i++)
	{
		if (i < 26)
		{
			fprintf(fw, "%c\t%d\n", i + 65, Count[i]);
		}
		else
		{
			fprintf(fw, "%c\t%d\n", i + 71, Count[i]);
		}
	}

	memset(Count, 0, sizeof(int) * 52);//�ʱ�ȭ

	fprintf(fw, "\n\n");
}

void Fr2()
{
	fseek(fr2, 0L, SEEK_SET);

	//���ĺ� ī����
	while ((Alphabet = fgetc(fr2)) != EOF)
	{
		if ((Alphabet >= 'A') && (Alphabet <= 'Z'))//�빮�� �ϰ��
		{
			Count[Alphabet - 65]++;
		}
		else if ((Alphabet >= 'a') && (Alphabet <= 'z'))//�ҹ��� �ϰ��
		{
			Count[Alphabet - 71]++;
		}
	}

	for (i = 0; i < 52; i++)
	{
		if (i < 26)
		{
			fprintf(fw, "%c\t%d\n", i + 65, Count[i]);
		}
		else
		{
			fprintf(fw, "%c\t%d\n", i + 71, Count[i]);
		}
	}

	memset(Count, 0, sizeof(int) * 52);//�ʱ�ȭ

	fprintf(fw, "\n\n");
}

void Fr3()
{
	fseek(fr3, 0L, SEEK_SET);

	//���ĺ� ī����
	while ((Alphabet = fgetc(fr3)) != EOF)
	{
		if ((Alphabet >= 'A') && (Alphabet <= 'Z'))//�빮�� �ϰ��
		{
			Count[Alphabet - 65]++;
		}
		else if ((Alphabet >= 'a') && (Alphabet <= 'z'))//�ҹ��� �ϰ��
		{
			Count[Alphabet - 71]++;
		}
	}

	for (i = 0; i < 52; i++)
	{
		if (i < 26)
		{
			fprintf(fw, "%c\t%d\n", i + 65, Count[i]);
		}
		else
		{
			fprintf(fw, "%c\t%d\n", i + 71, Count[i]);
		}
	}

	memset(Count, 0, sizeof(int) * 52);//�ʱ�ȭ

	fprintf(fw, "\n\n");
}

void Fr4()
{
	fseek(fr4, 0L, SEEK_SET);

	//���ĺ� ī����
	while ((Alphabet = fgetc(fr4)) != EOF)
	{
		if ((Alphabet >= 'A') && (Alphabet <= 'Z'))//�빮�� �ϰ��
		{
			Count[Alphabet - 65]++;
		}
		else if ((Alphabet >= 'a') && (Alphabet <= 'z'))//�ҹ��� �ϰ��
		{
			Count[Alphabet - 71]++;
		}
	}

	for (i = 0; i < 52; i++)
	{
		if (i < 26)
		{
			fprintf(fw, "%c\t%d\n", i + 65, Count[i]);
		}
		else
		{
			fprintf(fw, "%c\t%d\n", i + 71, Count[i]);
		}
	}

	memset(Count, 0, sizeof(int) * 52);//�ʱ�ȭ

	fprintf(fw, "\n\n");
}

void Fr5()
{
	fseek(fr5, 0L, SEEK_SET);

	//���ĺ� ī����
	while ((Alphabet = fgetc(fr5)) != EOF)
	{
		if ((Alphabet >= 'A') && (Alphabet <= 'Z'))//�빮�� �ϰ��
		{
			Count[Alphabet - 65]++;
		}
		else if ((Alphabet >= 'a') && (Alphabet <= 'z'))//�ҹ��� �ϰ��
		{
			Count[Alphabet - 71]++;
		}
	}

	for (i = 0; i < 52; i++)
	{
		if (i < 26)
		{
			fprintf(fw, "%c\t%d\n", i + 65, Count[i]);
		}
		else
		{
			fprintf(fw, "%c\t%d\n", i + 71, Count[i]);
		}
	}

	memset(Count, 0, sizeof(int) * 52);//�ʱ�ȭ

	fprintf(fw, "\n\n");
}

//main ����
int main(int argc, char *argv[])
{
	memset(Count, 0, sizeof(int) * 52);//�ʱ�ȭ

	//�Է� ���� 1��
	if (argc == 3)
	{
		printf("�Է� ���� 1�� �Է¹���.\n");

		fr1 = fopen(argv[1], "rt");
		fw = fopen(argv[2], "w");

		if (fr1 == NULL)//���� ���� �ʴ� ����
		{
			printf("������ ����.\n");
			system("pause");
			return 0;
		}

		if (fw == NULL)//��� �� �� ����
		{
			printf("����� ������ ����.\n");
			system("pause");
			return 0;
		}

		Fr1();

		fclose(fr1);
		fclose(fw);
	}

	//�Է� ���� 2��
	if (argc == 4)
	{
		printf("�Է� ���� 2�� �Է¹���.\n");

		fr1 = fopen(argv[1], "rt");
		fr2 = fopen(argv[2], "rt");
		fw = fopen(argv[3], "w");

		if ((fr1 == NULL) || (fr2 == NULL))//���� ���� �ʴ� ����
		{
			printf("������ ����.\n");
			system("pause");
			return 0;
		}

		if (fw == NULL)//��� �� �� ����
		{
			printf("����� ������ ����.\n");
			system("pause");
			return 0;
		}

		Fr1();
		Fr2();

		fclose(fr1);
		fclose(fr2);
		fclose(fw);
	}

	//�Է� ����3��
	if (argc == 5)
	{
		printf("�Է� ���� 3�� �Է¹���.\n");

		fr1 = fopen(argv[1], "rt");
		fr2 = fopen(argv[2], "rt");
		fr3 = fopen(argv[3], "rt");
		fw = fopen(argv[4], "w");

		if ((fr1 == NULL) || (fr2 == NULL) || (fr3 == NULL))//���� ���� �ʴ� ����
		{
			printf("������ ����.\n");
			system("pause");
			return 0;
		}

		if (fw == NULL)//��� �� �� ����
		{
			printf("����� ������ ����.\n");
			system("pause");
			return 0;
		}

		Fr1();
		Fr2();
		Fr3();

		fclose(fr1);
		fclose(fr2);
		fclose(fr3);
		fclose(fw);
	}

	//�Է� ����4��
	if (argc == 6)
	{
		printf("�Է� ���� 4�� �Է¹���.\n");

		fr1 = fopen(argv[1], "rt");
		fr2 = fopen(argv[2], "rt");
		fr3 = fopen(argv[3], "rt");
		fr4 = fopen(argv[4], "rt");
		fw = fopen(argv[5], "w");

		if ((fr1 == NULL) || (fr2 == NULL) || (fr3 == NULL) || (fr4 == NULL))//���� ���� �ʴ� ����
		{
			printf("������ ����.\n");
			system("pause");
			return 0;
		}

		if (fw == NULL)//��� �� �� ����
		{
			printf("����� ������ ����.\n");
			system("pause");
			return 0;
		}

		Fr1();
		Fr2();
		Fr3();
		Fr4();

		fclose(fr1);
		fclose(fr2);
		fclose(fr3);
		fclose(fr4);
		fclose(fw);
	}

	//�Է� ����5��
	if (argc == 7)
	{
		printf("�Է� ���� 5�� �Է¹���.\n");

		fr1 = fopen(argv[1], "rt");
		fr2 = fopen(argv[2], "rt");
		fr3 = fopen(argv[3], "rt");
		fr4 = fopen(argv[4], "rt");
		fr5 = fopen(argv[5], "rt");
		fw = fopen(argv[6], "w");

		if ((fr1 == NULL) || (fr2 == NULL) || (fr3 == NULL) || (fr4 == NULL) || (fr5 == NULL))//���� ���� �ʴ� ����
		{
			printf("������ ����.\n");
			system("pause");
			return 0;
		}

		if (fw == NULL)//��� �� �� ����
		{
			printf("����� ������ ����.\n");
			system("pause");
			return 0;
		}

		Fr1();
		Fr2();
		Fr3();
		Fr4();
		Fr5();

		fclose(fr1);
		fclose(fr2);
		fclose(fr3);
		fclose(fr4);
		fclose(fr5);
		fclose(fw);
	}

	return 0;
}