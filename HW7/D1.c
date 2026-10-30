#include <stdio.h>

void rekurs(int n)
{
	if (n > 1)
		rekurs(n -1);
	printf("%d ", n);
}
	
int main()
{ 
int n;
	scanf("%d", &n);
	
	rekurs(n);
	
	return 0;

}
