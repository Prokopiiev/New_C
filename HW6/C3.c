#include <stdio.h>

int middle(int a, int b) {
    
    return (int)(((long long)a + b) / 2);
}

int main(void) {
    int a, b;
    scanf("%d %d", &a, &b);
    printf("%d\n", middle(a, b));
    return 0;
}
