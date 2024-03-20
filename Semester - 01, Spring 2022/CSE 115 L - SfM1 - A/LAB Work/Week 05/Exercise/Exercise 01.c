/*1.	Write a C program that takes input the first letter of any of the following fruits name– 
Mango ---- Tk.500/kg, 
Apple   ---- Tk.250/kg, 
Banana ----Tk. 130/kg, 
Cherry -----Tk. 270/kg, and suggests the price of the fruit as output, using switch case.
*/

#include <stdio.h>

int main()
{
    char ch;

    printf("Enter the first character of fruits name: ");
    scanf("%c", &ch);

    switch(ch)
    {
        case 'M': printf("\nPrice of Mango: TK. 500/kg\n");
        break;

        case 'm': printf("\nPrice of Mango: TK. 500/kg\n");
        break;

        case 'A': printf("\nPrice of Apple: TK. 250/kg\n");
        break;

        case 'a': printf("\nPrice of Apple: TK. 250/kg\n");
        break;

        case 'B': printf("\nPrice of Banana: TK. 130/kg\n");
        break;

        case 'b': printf("\nPrice of Banana: TK. 130/kg\n");
        break;

        case 'C': printf("\nPrice of Cherry: TK. 270/kg\n");
        break;

        case 'c': printf("\nPrice of Cherry: TK. 270/kg\n");
        break;

        default: printf("\nSorry!! This fruit is not in the database.\n");
    }

    return 0;
}
