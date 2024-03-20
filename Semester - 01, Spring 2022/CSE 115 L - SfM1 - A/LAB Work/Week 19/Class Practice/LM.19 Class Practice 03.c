/*
    Reading from a text file:
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *open_file;
    char ch;

    open_file = fopen("test.txt", "r");

    if(open_file == NULL){
        perror("File opening failed!!\n");
        return EXIT_FAILURE;
    }

    while(1){
        ch = fgetc(open_file);
        if(ch == EOF){
            break;
        }
        putchar(ch);
    }

    printf("\n\n");

    fclose(open_file);

    return 0;
}
