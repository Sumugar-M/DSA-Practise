/*

Write a program to print the non prime numbers for the given range

Input Format

10
20

Constraints

Input should be numbers

Output Format

10 12 14 15 16 18 20

Sample Input 0

15
20

Sample Output 0

15 16 18 20


*/

#include<stdio.h>

int isPrime(int num);

int main()
{
  int num1, num2, i;
  scanf("%d %d", &num1, &num2);

  for (i = num1; i <= num2; i++) {
      if (isPrime(i)) {
        continue;
      } else {
        printf("%d ", i);
      }
  }

}

int isPrime(int num) {
    int i;
    for (i = 2; i < num ;i++) {
        if(num % i == 0) {
            return 0;
        }
    }
    return 1;
}