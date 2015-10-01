#include <stdio.h>

int main()
{
	int *p;
	int k = 1234;
	int t;
	
	p = &k;
	t = *p;
	
	printf("p=%d, t=%d\n", *p, t);
	return 0;
}
