#include <stdio.h>

int main() {
    
    int temp, num, sum, digit;
   
    printf("Enter number: ");
    scanf("%d", &num);
   
    sum=0;
    temp=num;
   
    while(temp!=0) {
        digit= temp%10;
        sum= sum+(digit*digit*digit);
        temp= temp/10;
    }
    
    if (num==sum) {
        printf("Number is an Armstrong Number");
   } else {
        printf("Number is not an Armstrong Number");
   }
   
    return 0;
}
    