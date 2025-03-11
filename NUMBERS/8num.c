/*
Write a program to make prime number by adding even numbers only 5 numbers

Input Format

19

Constraints

Input should be the numbers

Output Format

4 10 12 18 22

Sample Input 0

3

Sample Output 0

2 4 8 10 14


*/


#include<stdio.h>

int isPrime(int num);

int main()
{
    int num, count = 0, even_num = 2;
    scanf("%d", &num);

    while(count != 5) {
        if(isPrime(num + even_num)) {
            printf("%d ", even_num);
            even_num += 2;
            count++;
        } else {
            even_num += 2;
        }
    }

}

int isPrime(int num) {
   // printf("%d ", num);
    int i, flag = 1;
    for(i = 2; i < num ; i++) {
        if(num % i == 0) {
            flag = 0;
            break;
        }
    }
    if(flag == 1) {
        return 1;
    } else {
        return 0;
    }
}