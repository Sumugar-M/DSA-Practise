/*

Need to write a program to print the 3 greatest numbers.

Input Format

3 2 6

Constraints

2<=N<=10

Output Format

6

Sample Input 0

6 5 8

Sample Output 0

8



*/


#include<stdio.h>

int main() 
{
    int num1 ,num2, num3, max;
    scanf("%d %d %d", &num1, &num2, &num3);
    max   = (num1 > num2) ? (num1 > num3 ? num1 : num3 ) : (num2 > num3) ? num2 : num3;
    printf("%d", max);
}