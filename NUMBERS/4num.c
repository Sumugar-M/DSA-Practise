/*

Need to write a program to find out the sum of digit of number.

Input Format

1234

Constraints

1000<=N<=100000

Output Format

10

Sample Input 0

4567

Sample Output 0

22

Explanation 0

4+5+6+7 = 22

*/
#include<stdio.h>

int main()
{
   int num, temp, sum = 0;
   scanf("%d", &num);

   while (num != 0) {
    temp = num % 10;
    sum += temp;
    num /= 10;    
   }
   
   printf("%d", sum);
}