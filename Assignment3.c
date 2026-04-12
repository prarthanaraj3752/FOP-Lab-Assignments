#include <stdio.h>

int main() {

    int n, i;
    printf("Multiplication Table\n");
    printf("Enter a number: ");
    scanf("%d", &n);

    for(i = 1; i <= 10; i++) {
        printf("%d x %d = %d\n", n, i, n * i);
    }

    return 0;
}
