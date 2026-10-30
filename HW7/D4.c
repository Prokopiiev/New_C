#include <stdio.h>
#include <stdlib.h>

void print_num(int num)
{
	if (num >= 10)
		print_num (num / 10);
		
	printf("%d ", num % 10);
			
}

int main()
{
	int num;
	scanf("%d", &num);
	
	print_num(num);
	
	return 0;
	
}

