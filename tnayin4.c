# include <stdio.h>

int main()
{
	int a = 4;
	int b = 5;
	int* ptr_a = &a;
	int* ptr_b = &b;
	printf("Before a = %d, b = %d:\n", *ptr_a, *ptr_b);
	int x = *ptr_a;
	*ptr_a = *ptr_b;
	*ptr_b = x;
	printf("After a = %d, b = %d:\n", *ptr_a, *ptr_b);
}
