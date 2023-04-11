//카이스르 시지 암호
#include<stdio.h>
int main() {
	char passwd[4] = {'e','c','v', '/0'};
	int key = 2; char planeext[4];
	
	plantext[0] = passwd[0] - key;
	plantext[1] = passwd[1] - key;
	plantext[2] = passwd[1] - key;
	plantext[3] = '/0';
	printf("평문은 %s", plantext);
	
	return 0;
}