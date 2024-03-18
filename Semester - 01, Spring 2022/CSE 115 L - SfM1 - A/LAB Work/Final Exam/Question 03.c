#include <stdio.h>

int main()
{
    char str[100], ch;

    printf("Enter string: ");
    gets(str);

    printf("Enter character: ");
    scanf("%c", &ch);
    fflush(stdin);

    for(int i = 0; str[i] != '\0'; i++){
        if(str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U' || str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u'){
            str[i] = ch;
        }
    }

    printf("Updated String: %s\n", str);

    return 0;
}
