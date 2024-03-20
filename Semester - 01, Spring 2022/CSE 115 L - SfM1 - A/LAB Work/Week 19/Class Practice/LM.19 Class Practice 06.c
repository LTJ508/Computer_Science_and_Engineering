/*
    Reading multiple entries from files:
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    FILE *open_file;
    char name[100];
    int age;
    int salary;

    open_file = fopen("input.txt", "r");

    if(open_file == NULL){
        perror("File opening failed!!\n");
        return EXIT_FAILURE;
    }

    while(fscanf(open_file, "%s%d%d", name, &age, &salary) == 3){
        if(name[strlen(name)-1] == '\n'){
            name[strlen(name)-1] = '\0';
        }

        printf("%s\n%d\n%d\n", name, age, salary);
        if(feof(open_file) == 1){
            break;
        }
    }

    fclose(open_file);

    return 0;
}
