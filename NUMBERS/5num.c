/*
Need to write a program find out the factorial of a number.

Input Format

5

Constraints

5<=N<=10

Output Format

120

Sample Input 0

6

Sample Output 0

720

Explanation 0

1*2*3*4*5*6 = 720
*/

#include<stdio.h>

int main()
{
    int num, prdct_stor = 1;
    scanf("%d", &num);

    while (num != 0) {
        //printf("%d\n", num);                   //WITHOUT using RECURSION
        prdct_stor *= num;
        num--;
    }
    
    printf("%d", prdct_stor);

}