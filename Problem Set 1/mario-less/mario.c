#include <cs50.h>
#include <stdio.h>

int main(void)
{

    // printing right-aligned staircase.

    // get input from the user by using the library 'cs50.h'

    int n;
    do
    {
        n = get_int("Height: ");
    } while (n < 1 || n >= 8);

    // this outer loops is for printing rows
    for (int row = 1; row <= n; row++)
    {
        // This loops print spaces before '#'
        for (int space = 0; space < n - row; space++)
        {
            printf(" ");
        }

        // this loops print '#'
        for (int column = 0; column < row; column++)
        {
            printf("#");
        }
        printf("\n");
    }
}
