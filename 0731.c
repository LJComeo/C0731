#include <stdio.h>
#include <stdlib.h>

void F(char * str[])
{
	char tmp = '1';
	int i;
	for (i = 0; str[i]!='\0'; i++)
	{
		if (str[i] == str[i + 1])
		{
			tmp = tmp + 1;
		}
		if ((str[i] != str[i + 1]) && (tmp > 1))
			str[i - 1] = tmp;
	}
}


int main()
{
	//int a = 5, *p = &a, *q = &a; 

	//int x, y = 5, *p = &x;
	//x = *p;
	//*p = &y;�൱����p�ֱ�ָ��x��y�ĵ�ַ
	//x = y;
	//x= &y;
	//printf("%d\n", x);

	//int *p = x;p��ֵ��x��ֵ,ָ�����pָ��x
	//int *p = &x;p��ֵ��x�ĵ�ַ��ֵ��ָ�����pָ��x�ĵ�ַ

	//int a[][3] = { 1, 2, 3, 4, 5, 6, 7 };

	//int x = 6, n = 5;
	//x += n++;
	//printf("%d\n", x);//11

	//(x % 3 == 0 && (x+1) % 2 == 0)

	//int x = 4;
	//x += x *= x + x;
	//printf("%d\n",x);//64

	char str[] = "abcdeeeffff";
	F(&str);
	puts(str);


	system("pause");
	return 0;
}