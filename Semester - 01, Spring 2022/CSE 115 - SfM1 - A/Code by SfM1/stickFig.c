/*
    Draws a stick figure

*/

#include<stdio.h>
void draw_circle(void);
void draw_intersect(void);
void draw_base(void);
void draw_triangle(void);
void print_rboxed(double rnum);

int main()
{
    // draw a circle
    draw_circle();

    // draw a triangle
    draw_triangle();

    // draw intersecting lines
    draw_intersect();
    // draw rbox
    print_rboxed(135.68);
    return 0;
}

void print_rboxed(double rnum)
{
    // draw rbox with rnum in it
    printf("***********\n");
    printf("*         *\n");
    printf("* %7.2f *\n", rnum);
    printf("*         *\n");
    printf("***********\n");
}

void draw_circle(void)
{
    // draw a circle
    printf("   *   \n");
    printf(" *   * \n");
    printf("  * *  \n");
}

void draw_intersect(void)
{
    // draw intersecting lines
    printf("   / \\  \n");
    printf("  /   \\ \n");
    printf(" /     \\\n");
}
void draw_base(void)
{
    // draw a base
    printf(" -------\n");
}

void draw_triangle()
{
    // draw a triangle
    draw_intersect();
    draw_base();
}
