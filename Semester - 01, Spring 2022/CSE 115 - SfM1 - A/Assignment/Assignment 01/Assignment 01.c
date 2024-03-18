/*
    Problem
    A square number is an integer number whose square root is also an integer. For example 1, 4, 81 are some
    square numbers. Given two numbers a and b you will have to find out how many square numbers are
    there between a and b (inclusive).

    Input
    The input file contains at most 201 lines of inputs. Each line contains two integers a and b (0 < a <= b <= 100000).
    Input is terminated by a line containing two zeros. This line should not be processed.

    Output
    For each line of input produce one line of output. This line contains an integer which denotes how many
    square numbers are there between a and b (inclusive).

    Sample Input
    1 4
    1 10
    0 0

    Sample Output
    2
    3
*/

#include <stdio.h>
#include <math.h>

int main()
{
    int a, b, count;
    double i, i_sqrt;

    //showing some instruction for input
    printf("Enter two integer sequentially. For a and b range is 0<a<=b<=100000.\nEnter 0 0 for exit.\n");

    while(1){ //this loop is always true. 1 means true
        scanf("%d %d", &a, &b);//taking input from user

        if(a == 0 && b == 0){//this condition for exit
            printf("\nExited Successfully.\n");//simple exit message
            break;//if this condition is true it will break the loop
        }


        else if((a <= 0) || (b <= 0) || (b < a) || (a > 100000) || (b > 100000)){//this condition for input validation to check inputs are correct or not
            printf("Error!! Out of range!! Try again\n");//simple error message
            continue;//it will skip the rest part of the loop and start again from beginning part line 37
        }

        else{
            for(i = a, count = 0; i <= b; i++){//this loop is for counting the square number. we need to set the value of count to 0 in every range so i use it in initial part
                i_sqrt = sqrt(i);//calculating the square root of a number

                if(i_sqrt == (int)i_sqrt){//this condition is checking if the square root value integer or not
                    count++;//if integer count will be 1 +
                }
            }

            printf("%d\n", count);//displaying the output, total square number in the range
        }
    }

    return 0;
}
