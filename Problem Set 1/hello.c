#include <cs50.h>
#include <stdio.h>

int main(void)
{

    // creating a datatype 'string' using variable name as 'ans'
    // Using the cs50 library to use 'get_string' to get input from user
    string ans = get_string("What's your name? ");

    // Now printing the answer that is recieved from the user by greeting with 'hello'

    printf("hello, %s\n", ans);
}
