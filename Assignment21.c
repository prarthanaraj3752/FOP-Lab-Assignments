#include <stdio.h>

int main() {
    FILE *fp;
    char data[100];
    fp = fopen("output.txt", "w");
    printf("Enter text to write into the file\n");
    fgets(data, sizeof(data), stdin);
    fputs(data, fp);
    fclose(fp);
    printf("Data written to file successfully.");
    return 0;
}