#include <stdio.h> // specifies library

int main() { //main command
    int rows;
    printf("Enter number of rows: "); //takes input from user, which goes on to act as the
    scanf("%d", &rows);

    for (int i = 1; i <= rows; i++) {
        for (int j = 1; j <= i; j++) {  //for loop initiates process and executes it till the number of rows
                                        //that have been added via the scanf function which acts as the end limit
            printf("*");
        }
        printf("\n");  //as i is incremented till a certain value (which the user inputs), that set value is used as a limit for the
                       // j variable which prints the number of * row number of times

    }

    return 0; // runs without error
}
