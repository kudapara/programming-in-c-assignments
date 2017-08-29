#include <stdio.h>
#include <stdlib.h>

/*
  add two integers and return the sum
*/
int sum (int a, int b) {
    return a + b;
}

/*
  multiply two numbers and return the
*/
int product(int a, int b) {
    return a * b;
}

/*
  subtract two numbers and return difference
*/
int difference (int a, int b) {
    return a - b;
}

/*
  Compare two numbers and return the larger one
*/
int max (int a, int b) {
    return (a > b) ? a : b;
}

int main() {
    int first_number = 0;
    int second_number = 0;

    printf("Enter two numbers!\n");
    
    printf("Enter The first number:!\n");
    scanf("%d", &first_number);
    printf("Enter The second number:!\n");
    scanf("%d", &second_number);

    printf("The sum = %d\n", sum(first_number, second_number));
    printf("The product = %d\n", product(first_number, second_number));
    printf("The difference = %d\n", difference(first_number, second_number));
    printf("The bigger number = %d\n", max(first_number, second_number));
    return 0;
}
