#include <stdio.h>  // specifies library


int main() { // main command



    char c;
    printf("Enter a character: "); //char input
    scanf("%c", &c);

    int i;
    printf("Enter an integer: "); //int input
    scanf("%d", &i);

    double d;
    printf("Enter a double: "); //double input
    scanf("%f", &d);

    char s[100];
    printf("Enter a string: "); //string input 
    scanf("%s", &s);

    printf("You entered: %c %d %f %s\n", c, i, d, s); //output

    return 0;
}
