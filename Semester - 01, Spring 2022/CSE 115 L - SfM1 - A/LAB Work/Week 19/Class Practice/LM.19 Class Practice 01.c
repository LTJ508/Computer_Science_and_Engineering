/*
    Opening & closing a text file:
*/

#include <stdio.h>

int main()
{
    FILE *open_file;

    open_file = fopen("test.txt", "r");

    if(open_file == NULL){
        perror("File opening failed!!\n");
    }
    else{
        printf("File Opened..\n");

        fclose(open_file);
    }
}
