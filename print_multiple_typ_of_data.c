#include <stdio.h>

int main()
{
    char ch;
    char str[100];
    char sentence[100];

    // get the inputs from the user
    scanf("%c", &ch);
    scanf("%s", str);
    // scanf("\n"); // read the newline character at the end of the string
    scanf("%*c", sentence);

    // print the inputs
    printf("%c\n%s\n%s\n", ch, str, sentence);

    return 0;
}