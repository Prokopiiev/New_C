#include <stdio.h>
#include <stdlib.h>

void rekurs(int n)
{
	if (n > 0); {
		printf("%d", n % 10);
		rekurs(n / 10);
		
	}
	
}

int main()
{
	int n;
	scanf("%d", &n);
	
	rekurs(n);
	
	return 0;
	
}
