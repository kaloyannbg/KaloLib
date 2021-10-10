#include <stdio.h>

int countDigits(long long int num)
{

    int counter = 0;

    while (num > 0)
    {

        num = num / 10;

        counter++;
    }

    return counter;
}

int countChars(char *cArr)
{

    int counter = 0;

    while (cArr[counter] != '\0')
    {

        counter++;
    }

    return counter;
}

long long int fromNegativeToPositive(long long int iNumber)
{

    if (iNumber < 0)
    {

        iNumber = iNumber / -1;

        return iNumber;
    }
    else
    {

        return iNumber;
    }
}

long long int power(long long int num, long long int exp)
{

    long long int sum = 1;

    while (exp > 0)
    {

        sum = sum * num; // sum = 1 * 2 | sum = 2 * 2 | 4 * 2 = 8 |

        exp--;
    }

    return sum;
}

int isFibonacci(long long int iNumber)
{

    iNumber = fromNegativeToPositive(iNumber);

    long long int num = 0;

    long long int nextNum = 1;

    long long int sum = 0;

    int count = 0;

    int isFibo = 0;

    if (iNumber == 0)
    {
        isFibo = 1;
    }
    else
    {

        while (count < 100)
        {
            sum = num + nextNum; // 0 + 1 = 1 | 1 + 1 = 2 | 1 + 2 = 3;

            if (iNumber == sum)
            {
                isFibo = 1;
                break;
            }

            num = nextNum;

            nextNum = sum;

            count++;
        }
    }

    if (isFibo == 1)
    {
        return 1; // ITS FIBONACCI NUMBER
    }
    else
    {
        return 0; // ITS NOT FIBONACCI
    }
}

long long int factorial(long long int iNumber) {

    iNumber = fromNegativeToPositive(iNumber);

    long long int tempNumber = iNumber;

    long long int nextNumber = tempNumber - 1;

    while(nextNumber > 0) {

        tempNumber = tempNumber * nextNumber;

        nextNumber--;

    }

    return tempNumber;

}

char *stringCopy( char *copyHere, char *StringYouPass) {

    int length = countChars(StringYouPass);

    for(int i = 0; i < length; i++) {
        copyHere[i] = StringYouPass[i];
    }

    copyHere[length] = '\0';

    return copyHere;

}
