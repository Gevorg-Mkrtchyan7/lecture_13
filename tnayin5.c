# include <stdio.h>

int main()
{
	int a = 20;
	int* ptr = NULL;
	if(ptr == NULL){
		printf("msg \n");
	}
	ptr = &a;
	printf("%d \n", *ptr); 
	
}
