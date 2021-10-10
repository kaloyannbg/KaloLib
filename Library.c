#include <stdio.h>
#include "KaloLib.h"

int main() {

    printf("\n\n");

    int number = 101010;

    char str[20] = "WorldWorldWorldWorld";

    char copied[20];

    int negative = -555;

    int n = 5;

    int exp = 3;

    int fiboN = 34;

    int factorialN = 5;

    printf("  == number \'%d\' is %d digits == \n", number, countDigits(number));

    printf("  == \'%s\' is %d chars == \n", str, countChars(str));

    printf("  == \'%d\' is \'%d\' now == \n", negative, fromNegativeToPositive(negative));

    printf("  == \'%d^%d\' = \'%d\' == \n", n, exp, power(n, exp));

    if(isFibonacci(fiboN) == 1) {
        printf("  == \'%d\' is Fibonacci number!\n", fiboN);
    }
    else {
        printf("  == \'%d\' is not Fibonacci number!\n", fiboN);
    }

        printf("  == factorial of number \'%d\' is \'%d\' == \n", factorialN, factorial(factorialN));

        printf("  == Copied before StringCopy() = %11s ==\n", copied);

        stringCopy(copied, str);

        printf("  == Copied after StringCopy() = %s (%d chars)", copied, countChars(copied));



    printf("\n\n");

    return 0;
}
