#include <stdio.h> //specifies library

int countVowels(char* str) { //specifies a variable, countVowels and specifies a function
    int count = 0;  //specifies a variable count, and sets the value at 0
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u') {    //
            count++;  // '||' conditional boolean statement whichṇ checks if vowels are present
        }
    }
    return count; // returns final value of the code above and is used in the final output below
}

int main() { //main commandṇ
    char str[100];   //defines a string
    printf("Enter a string (without space): ");
    scanf("%s", str); //takes input and then executes previously defined command
    printf("Number of vowels: %d", countVowels(str)); //output printed
    return 0;
}
