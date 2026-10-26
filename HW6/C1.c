#include <stdio.h>

int modul(int n) {
	if (n < 0)
		return -n;
	else 
		return n;
}

int main() {
	int n;
	scanf("%d", &n);
	
	printf("%d", modul(n));
	
	return 0;
	
}

