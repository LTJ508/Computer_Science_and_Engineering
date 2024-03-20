/*
    Writing multiple entries to files:
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *open_file;

    open_file = fopen("input.txt", "w");

    if(open_file == NULL){
        perror("File opening failed!!\n");
        return EXIT_FAILURE;
    }

    fprintf(open_file, "Bob\n30\n20000\n");
    fprintf(open_file, "Amanda\n20\n10000\n");

    fclose(open_file);

    printf("Multiple Entries Write successful..\n\n");

    return 0;
}
