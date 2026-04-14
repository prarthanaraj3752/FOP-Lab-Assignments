#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *f1, *f2;
    char ch;
    f1 = fopen("input.txt", "r");
    f2 = fopen("output.txt", "w");

    while ((ch=fgetc(f1))!=EOF) {
        fputc(ch, f2);
        }
    printf("File copied successfully");
    fclose(f1);
    fclose(f2);
    return 0;
}