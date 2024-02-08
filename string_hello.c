#include <stdio.h>

int main()
{
    char input[100];

    // input from the user
    fgets(input, sizeof(input), stdin);

    // print "Hello, World!" and the user's input
    printf("Hello, World!\n%s", input); 

    return 0;
}