#include <stdio.h>


int summa(int n)
{	int sum = 0;
	for (int i = 1; i <= n; i++)
	{
		sum = sum + i;
	}
	
	return sum;
}
	
int main() 
{   
	int n;
    scanf("%d", &n);

    printf("%d", summa(n));

    return 0;
}
