//coping a file content to another file.
#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *pt;
    char ch;

    pt = fopen("pr.txt", "r");
    if (pt == NULL) {
        printf("Invalid.\n");
        exit(1);
    }

    // Read and print until '!' or EOF
    while ((ch = fgetc(pt)) != EOF && ch != '!') {
        printf("%c", ch);
    }
    fclose(pt);

    FILE *fp1, *fp2, *fp3;

    fp1 = fopen("f1.txt", "r");
    fp2 = fopen("f2.txt", "r");
    fp3 = fopen("f3.txt", "w");

    if (fp1 == NULL || fp2 == NULL || fp3 == NULL) {
        printf("Error opening one of the files.\n");
        exit(1);
    }

    // Copy from f1.txt until '!'
    while ((ch = fgetc(fp1)) != EOF && ch != '!') {
        fputc(ch, fp3);
    }

    // Copy from f2.txt until '!'
    while ((ch = fgetc(fp2)) != EOF && ch != '!') {
        fputc(ch, fp3);
    }

    fputc('!', fp3); // End marker
    fclose(fp1);
    fclose(fp2);
    fclose(fp3);

    // Display contents of f3.txt until '!'
    fp3 = fopen("f3.txt", "r");
    if (fp3 == NULL) {
        printf("Error opening f3.txt.\n");
        exit(1);
    }

    while ((ch = fgetc(fp3)) != EOF && ch != '!') {
        printf("%c", ch);
    }
    fclose(fp3);

    return 0;
}