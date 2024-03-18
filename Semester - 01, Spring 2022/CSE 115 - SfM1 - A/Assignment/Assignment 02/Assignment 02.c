/*
    Writing a c program to calculate cubic root in analog procedure.
1 Preamble
Richard P. Feynman was a musician, artist, scientist, teacher and Nobel laureate. He contributed to the development of the atomic bomb, expanded the
understanding of quantum electrodynamics, translated Mayan hieroglyphics,
and cut to the heart of the Challenger disaster. But beyond all of that, Richard
Feynman was a unique and multi-faceted individual and he was famous for his
unbelievable stories, unusual life style and his popular books and lectures on
mathematics and physics.
Once, in Brazil, Feynman got into a kind of a competition with a native
to see who could do faster simple aritmethics, Feynman or an abacus (aka a
manual calculator machine)! Feynman lost in operations such as addition and
multiplication but he won in cubic roots. Given the number 1729.03 he got the
result of 12.002 at the end of a few seconds while his oponent got 12.0!

Example
Feynman has an excellent memory – he knows ‘all’ perfect squares (as well
cubes) To calculate square root of 17, he knows that 4 × 4 = 16 then he just
use the method above and calculate 4 + 1/8 that equals 4.125 (not very bad as
square root of 17 = 4.123 . . . ). As Feynman is very lazy, and he doesn’t like
subtractions at all, he doesn’t use negative dx . . . .
Your task is to generalize this procedure to the cubic root, and HELP FEYNMAN!

3 Input
The input contains a positive floating-point number per line in the inteval [1
. . . 1000000] (inclusive). The last line of the input file contains a number ‘0’
(zero). This zero should not be processed.

4 Output
For each line of input print the value of the cubic root approximated by the
method explained above. Print the value rounded upto four digits after the
decimal point.

5 Sample Input
1729.0300
64.0000
63.9990
0

6 Sample Output
12.0024
4.0000
4.3703

7 Hint
The built in function cbrt can be used to find the cube root of a double-type
number. In order to use this function, you have to import the math.h header
file.

8 Deliverables
You must submit the assignment (in the pdf format) through canvas. Your
assignment must include (1) explanation of your approach and (2) the complete
program in C. The entire assignment should be submitted in the pdf format.
Please note that under no circumstances, there will be an extension
to the given deadline.
*/

#include <stdio.h>

int main()
{
    double number, dx, cubic_root, a, nearest_perfect_cube;

    //this loop is infinity it will take input until get zero as input
    while(1){
        printf("Enter a Number: ");
        scanf("%lf", &number);

        if(number == 0){//this condition for exit the programm
            printf("\nExit Successfully.\n");//simple exit message
            break;//if user give 0 as input it will break the loop
        }

        //validity check loop. this loop will check the range of input
        while(number < 1 || number > 1000000){
            printf("\nOut of Range Enter again: ");
            scanf("%lf", &number);
            if(number == 0){
                break;
            }
        }

        //again check exit command as i found an error in previous loop.
        if(number == 0){//this condition for exit the program
            printf("\nExit Successfully.\n");//simple exit message
            break;//if user give 0 as input it will break the loop
        }

        //this loop will calculate the nearest perfect cube
        for(a = 1, nearest_perfect_cube = 1; nearest_perfect_cube <= number; a++){
            nearest_perfect_cube = a * a * a;
        }

        a = a - 2;//as nearest perfect cube increment the value of a twice up, so decrease it by 2. so we can find the nearest perfect cubic root accurately

        dx = (number - (a * a * a)) / (3 * a * a);//this statement is for calculating  the dx part

        cubic_root = a + dx;//main cubic root rules

        printf("Cubic Root of %0.4lf is %0.4lf\n\n", number, cubic_root);//printing the cubic root
    }

    return 0;
}
