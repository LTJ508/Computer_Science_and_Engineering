/*
    Writing structures to files:
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
    int i;

    open_file = fopen("accounts.dat", "w");

    if(open_file == NULL){
        perror("File opening failed!!\n");
        return EXIT_FAILURE;
    }

    for(i = 0; i < 100; i++){
        printf("For %d-th Customer\nFirst Name(just hit enter to stop): ", i+1);
        gets(customer[i].name.frist_name);

        if(strcmp(customer[i].name.frist_name, "") == 0) break;

        printf("Last Name: ");
        gets(customer[i].name.last_name);
        printf("Account Number: ");
        scanf("%d", &customer[i].account_number);
        printf("Account Balance: ");
        scanf("%lf", &customer[i].account_balance);
        fflush(stdin);
        printf("\n");
    }

    fwrite(customer, sizeof(Customer), i, open_file);

    fclose(open_file);

    return 0;
}
