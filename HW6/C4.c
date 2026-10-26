#include <stdio.h>


int f(int x) {
	if (x >= -2 && x < 2) {
		return (x * x);
	} else if (x >= 2) {
		return x * x + 4 * x + 5;
	} else {
		return 4; // при x < -2
	}
} 

int main() {
	int x;
	int max_f;
	int first = 1;
	
	while (scanf("%d", &x) == 1 && x != 0) {
		int current_f = f(x);
		
		if (first) {
			max_f = current_f;
			first = 0;
		} else if (current_f > max_f) {
			max_f = current_f;
		}
	}
	
	printf("%d\n", max_f);
	
	return 0;

}
