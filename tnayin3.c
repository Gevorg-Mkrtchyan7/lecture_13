# include <stdio.h>

int main()
{
	char a = 'a';
	char* ptr = &a;
	printf("%p \n", ptr);
	*ptr += 1;
	printf("%p \n", ptr);
}
