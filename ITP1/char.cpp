#include<cctype>
#include<cstdio>

int main()
{
	char c;
	while((c = getchar()) != '\n'){
		if(isalpha(c))c ^= ' ';
		putchar(c);
	}
}
