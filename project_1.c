#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

FILE *fr1, *fr2, *fr3, *fr4, *fr5;//입력 파일
FILE *fw;//결과 파일 

int i;//반복 변수
int Count[52];//알파벳 개수
char Alphabet;//알파벳

void Fr1()
{
	fseek(fr1, 0L, SEEK_SET);

	//알파벳 카운터
	while ((Alphabet = fgetc(fr1)) != EOF)
	{
		if ((Alphabet >= 'A') && (Alphabet <= 'Z'))//대문자 일경우
		{
			Count[Alphabet - 65]++;
		}
		else if ((Alphabet >= 'a') && (Alphabet <= 'z'))//소문자 일경우
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

	memset(Count, 0, sizeof(int) * 52);//초기화

	fprintf(fw, "\n\n");
}

void Fr2()
{
	fseek(fr2, 0L, SEEK_SET);

	//알파벳 카운터
	while ((Alphabet = fgetc(fr2)) != EOF)
	{
		if ((Alphabet >= 'A') && (Alphabet <= 'Z'))//대문자 일경우
		{
			Count[Alphabet - 65]++;
		}
		else if ((Alphabet >= 'a') && (Alphabet <= 'z'))//소문자 일경우
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

	memset(Count, 0, sizeof(int) * 52);//초기화

	fprintf(fw, "\n\n");
}

void Fr3()
{
	fseek(fr3, 0L, SEEK_SET);

	//알파벳 카운터
	while ((Alphabet = fgetc(fr3)) != EOF)
	{
		if ((Alphabet >= 'A') && (Alphabet <= 'Z'))//대문자 일경우
		{
			Count[Alphabet - 65]++;
		}
		else if ((Alphabet >= 'a') && (Alphabet <= 'z'))//소문자 일경우
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

	memset(Count, 0, sizeof(int) * 52);//초기화

	fprintf(fw, "\n\n");
}

void Fr4()
{
	fseek(fr4, 0L, SEEK_SET);

	//알파벳 카운터
	while ((Alphabet = fgetc(fr4)) != EOF)
	{
		if ((Alphabet >= 'A') && (Alphabet <= 'Z'))//대문자 일경우
		{
			Count[Alphabet - 65]++;
		}
		else if ((Alphabet >= 'a') && (Alphabet <= 'z'))//소문자 일경우
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

	memset(Count, 0, sizeof(int) * 52);//초기화

	fprintf(fw, "\n\n");
}

void Fr5()
{
	fseek(fr5, 0L, SEEK_SET);

	//알파벳 카운터
	while ((Alphabet = fgetc(fr5)) != EOF)
	{
		if ((Alphabet >= 'A') && (Alphabet <= 'Z'))//대문자 일경우
		{
			Count[Alphabet - 65]++;
		}
		else if ((Alphabet >= 'a') && (Alphabet <= 'z'))//소문자 일경우
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

	memset(Count, 0, sizeof(int) * 52);//초기화

	fprintf(fw, "\n\n");
}

//main 시작
int main(int argc, char *argv[])
{
	memset(Count, 0, sizeof(int) * 52);//초기화

	//입력 파일 1개
	if (argc == 3)
	{
		printf("입력 파일 1개 입력받음.\n");

		fr1 = fopen(argv[1], "rt");
		fw = fopen(argv[2], "w");

		if (fr1 == NULL)//존재 하지 않는 파일
		{
			printf("파일이 없다.\n");
			system("pause");
			return 0;
		}

		if (fw == NULL)//결과 낼 수 없음
		{
			printf("결과를 낼수가 없다.\n");
			system("pause");
			return 0;
		}

		Fr1();

		fclose(fr1);
		fclose(fw);
	}

	//입력 파일 2개
	if (argc == 4)
	{
		printf("입력 파일 2개 입력받음.\n");

		fr1 = fopen(argv[1], "rt");
		fr2 = fopen(argv[2], "rt");
		fw = fopen(argv[3], "w");

		if ((fr1 == NULL) || (fr2 == NULL))//존재 하지 않는 파일
		{
			printf("파일이 없다.\n");
			system("pause");
			return 0;
		}

		if (fw == NULL)//결과 낼 수 없음
		{
			printf("결과를 낼수가 없다.\n");
			system("pause");
			return 0;
		}

		Fr1();
		Fr2();

		fclose(fr1);
		fclose(fr2);
		fclose(fw);
	}

	//입력 파일3개
	if (argc == 5)
	{
		printf("입력 파일 3개 입력받음.\n");

		fr1 = fopen(argv[1], "rt");
		fr2 = fopen(argv[2], "rt");
		fr3 = fopen(argv[3], "rt");
		fw = fopen(argv[4], "w");

		if ((fr1 == NULL) || (fr2 == NULL) || (fr3 == NULL))//존재 하지 않는 파일
		{
			printf("파일이 없다.\n");
			system("pause");
			return 0;
		}

		if (fw == NULL)//결과 낼 수 없음
		{
			printf("결과를 낼수가 없다.\n");
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

	//입력 파일4개
	if (argc == 6)
	{
		printf("입력 파일 4개 입력받음.\n");

		fr1 = fopen(argv[1], "rt");
		fr2 = fopen(argv[2], "rt");
		fr3 = fopen(argv[3], "rt");
		fr4 = fopen(argv[4], "rt");
		fw = fopen(argv[5], "w");

		if ((fr1 == NULL) || (fr2 == NULL) || (fr3 == NULL) || (fr4 == NULL))//존재 하지 않는 파일
		{
			printf("파일이 없다.\n");
			system("pause");
			return 0;
		}

		if (fw == NULL)//결과 낼 수 없음
		{
			printf("결과를 낼수가 없다.\n");
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

	//입력 파일5개
	if (argc == 7)
	{
		printf("입력 파일 5개 입력받음.\n");

		fr1 = fopen(argv[1], "rt");
		fr2 = fopen(argv[2], "rt");
		fr3 = fopen(argv[3], "rt");
		fr4 = fopen(argv[4], "rt");
		fr5 = fopen(argv[5], "rt");
		fw = fopen(argv[6], "w");

		if ((fr1 == NULL) || (fr2 == NULL) || (fr3 == NULL) || (fr4 == NULL) || (fr5 == NULL))//존재 하지 않는 파일
		{
			printf("파일이 없다.\n");
			system("pause");
			return 0;
		}

		if (fw == NULL)//결과 낼 수 없음
		{
			printf("결과를 낼수가 없다.\n");
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