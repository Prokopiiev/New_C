#include <stdio.h>

int main() {
	int n;
	scanf("%d", &n);
	
	while(n / 10 != 0) {
		if (n % 10 == (n / 10) % 10) {
			printf("YES");
			return 0;
		}
		n = n /10;
	}
	
	printf("NO");
	return 0;
	
}
