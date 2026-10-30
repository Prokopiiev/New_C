#include <stdio.h>
#include <stdlib.h>

void bin(int n)
{
	if (n >= 2)
		bin(n / 2);
		
	printf("%d", n % 2);
	
}

int main()
{ 
	int n;
	scanf("%d", &n);
	
	bin(n);
	
	return 0;
	
}
