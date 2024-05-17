#include <stdio.h>

int main()
{
    FILE *ptr;
    ptr = fopen("newFile.txt", "w");
    fputs("Najaf is a CEO of a digital company", ptr);
    fputs("He is a Nice Guy", ptr);

    fclose(ptr);
}