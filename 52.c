#include <stdio.h>

int main() {
	
	char a[5] = {'K','O','R','E','A'}; //--> char a[6] = {'K','O','R','E','A','\0'}; \0= 쓰레기 값 제거
	printf("%c\n",a[1]);
	printf("%s\n",a);
	char b[6] = {'K','O','R','E','A','\0'};
	printf("%s\n",b);
	char c[6] = "KOREA";
	printf("%s\n",c);
	
	return 0;
}