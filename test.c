#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	int ch;
	system("hcode /e");
	system("chcp 437");
	system("cls");
	for(ch = 0; ch <= 255; ch++)
	{
		if(ch <= 31) // 특수문자 처리
			printf("%3d : ^%c  ", ch, ch+64);
		else if(ch <= 127) // 일반문자 처리
			printf("%3d :  %c  ",ch,ch);
		else // 확장 ASCII 문자 처리
			printf("%3d :  %c  ",ch,ch);
		if(ch == 127)
			system("pause");
	}
	system("pause");
	return 0;
}
