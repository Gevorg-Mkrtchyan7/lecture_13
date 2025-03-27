# include <stdio.h>

int main()
{
	int a = 5, b = 7;
	int* ptr = &a;
	printf("%d \n", *ptr);
	*ptr = 7;
	printf("%d \n", *ptr);
}
