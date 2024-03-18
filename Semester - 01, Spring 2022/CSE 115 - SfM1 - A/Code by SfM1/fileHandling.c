#include<stdio.h>

int main()
{
    FILE *inp, *outp;
    inp = fopen("text.txt", "r");
    outp = fopen("results.txt", "w");
    int n, input_status;
    input_status = fscanf(inp, "%d", &n);
    while(input_status == 1)
    {
        while(n!= 1)
        {
            fprintf(outp, "%d-->", n);
            if(n%2==0)
                n /=2;
            else
                n = 3*n + 1;
        }
        fprintf(outp, "%d\n", n);
        input_status = fscanf(inp, "%d", &n);

    }

    fclose(inp);
    fclose(outp);


}
