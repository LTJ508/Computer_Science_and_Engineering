/*
    Appending to a text file:
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *open_file;

    char ch;

    open_file = fopen("test.txt", "a");

    if(open_file == NULL){
        perror("File opening failed!!\n");
        return EXIT_FAILURE;
    }

    printf("Enter New text to write to file(hit enter to stop): ");

    fputc('\n', open_file);

    while(1){
        ch = getchar();
        if(ch == '\n'){
            break;
        }
        fputc(ch, open_file);
    }

    printf("\nYour New text saved successfully.\n");

    fclose(open_file);

    return 0;
}
