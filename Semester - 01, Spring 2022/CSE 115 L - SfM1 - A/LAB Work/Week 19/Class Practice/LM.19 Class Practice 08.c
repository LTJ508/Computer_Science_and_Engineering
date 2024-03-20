/*
    Reading structures from files:
*/


#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    char frist_name[20];
    char last_name[20];
} nametype;

typedef struct {
    nametype name;
    int account_number;
    double account_balance;
} Customer;

int main()
{
    FILE *open_file;
    Customer customer[100];
    int i, num;

    open_file = fopen("accounts.dat", "r");

    if(open_file == NULL){
        perror("File opening failed!!\n");
        return EXIT_FAILURE;
    }

    num = fread(customer, sizeof(Customer), 100, open_file);

    for(i = 0; i < num; i++){
        printf("Name: %s %s\nAccount Number: %d\nAccount Balance: %0.2lf\n\n", customer[i].name.frist_name, customer[i].name.last_name, customer[i].account_number, customer[i].account_balance);
    }

    fclose(open_file);

    return 0;
}
