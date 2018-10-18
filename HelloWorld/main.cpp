#include <stdio.h>
#include <stdlib.h>

int Add(int a, int b)
{
	int z = 0;
	z = a + b;
	return z;
}
int main()
{
	int a = 3;
	int b = 5;
	int ret = 0;
	ret = Add(a, b);
	return 0;
}


/*
int main()
{
	printf("Hello World!");
	system("pause");
	return 0;
}*/