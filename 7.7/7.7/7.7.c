#include <stdio.h>
#include <stdarg.h>
long factorial(int n)		//½×³Ë
{
	if (n <= 0)
		return 1;
	else
		return n * factorial(n - 1);
}

int main()
{
	printf("%d",factorial(4));
	getchar();
}