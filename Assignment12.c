#include <stdio.h>

int main() {
    int num1, num2, i;
    int scd = -1, gcd = 1;
    printf("Enter two positive numbers: ");
    scanf("%d %d", &num1, &num2);

     for (i=1; i<=num1 && i<=num2; i++) {
        if (num1%i == 0 && num2%i == 0) {
            gcd = i;
            if (i>1 && scd == -1) {
                scd=i;
            }
        }
     }
    printf("Greatest Common Divisor (GCD): %d\n", gcd);

    if (scd==-1) 
        printf("No Common Divisor other than 1\n");
    else 
        printf("Smallest Common Divisor (other than 1): %d\n", scd);
       
    return 0;
}