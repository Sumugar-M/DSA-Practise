/*

Need to find out the given number is prime number or not.

Input Format

5

Constraints

1<=N<=100

Output Format

Prime Number

Sample Input 0

8

Sample Output 0

Not Prime Number

Explanation 0

Because this 8 can be divided by 1,2,4 and 8. So this 8 is not prime number

*/

#include<stdio.h>

int main()
{
    int num, i, flag = 0;
    scanf("%d", &num);

    if (num == 1 || num == 0) {
        printf("Non Prime\n");
        return 0;
    }
    for(i = 2; i < num; i++) {
        if(num % i == 0) {
            flag = 1;
            printf("Non Prime\n");
            break;
        }
    }

    if (flag == 0) {
        printf("Prime\n");
    }

    return 0;
}