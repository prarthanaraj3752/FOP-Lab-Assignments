#include <stdio.h>

int main() 
{
    int n,i;
    printf("Enter number of elements: ");
    scanf("%d", &n);

    int A[n], even[n], odd[n];
    int e=0, o=0;

    printf("Enter the elements: ");
    for (i=0; i<n; i++) {
        scanf("%d", &A[i]);
    }

    for (i=0; i<n; i++) {
        if (A[i]%2==0) {
            even[e++] = A[i];
        }
        else {
            odd[o++] = A[i];
        }
    }

    printf("Even number:\n");
    for (i=0; i<e; i++) {
        printf("%d\n", even[i]);
    }

    printf("Odd numbers:\n");
    for (i=0; i<o; i++) {
        printf("%d\n", odd[i]);
    }
    return 0;
}