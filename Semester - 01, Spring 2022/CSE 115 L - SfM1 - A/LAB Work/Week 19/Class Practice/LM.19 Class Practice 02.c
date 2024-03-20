/*
    Writing user inputs to a text file:
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *open_file;

    char ch;

    open_file = fopen("test.txt", "w");

    if(open_file == NULL){
        perror("File opening failed!!\n");
        return EXIT_FAILURE;
    }

    printf("Enter text to write to file(hit enter to stop): ");

    while(1){
        ch = getchar();
        if(ch == '\n'){
            break;
        }
        fputc(ch, open_file);
    }

    printf("\nYour text saved successfully.\n");

    fclose(open_file);

    return 0;
}
