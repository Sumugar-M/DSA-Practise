/*

Write a program to add first and last Armstrong numbers in the given range.

Input Format

100
1000

Constraints

Input should be the range

Output Format

560

Sample Input 0

1
400

Sample Output 0

372



*/

#include<stdio.h>
#include<math.h>

int isArmstrong(int num);
int calcLength(int num);

int main()
{
   int num1, num2, i, sum = 0;
   scanf("%d %d",&num1, &num2);

   for (i = num1; i <= num2 ;i++) {
      if (isArmstrong(i)) {
          //printf("%d ", i);
          sum += i;
          break;
      } 
   }

   for (i = num2; i >= num1; i--) {
       if(isArmstrong(i)) {
         //printf("%d ", i);
         sum += i;
         break;
       }
   }
   printf("%d", sum);
   return 0;

}

int isArmstrong(int num)
{
    int temp, orgnl_num = num, arms_num = 0, length;
    length = calcLength(num);

    while(num != 0) {
        temp = num % 10;
        arms_num += (int)round(pow(temp,length));
        num /= 10;
    }

    if(arms_num == orgnl_num) {
        return 1;
    } 
    return 0;
}

int calcLength(int num) 
{
    int count  = 0;

    while(num != 0) {
        count++;
        num /= 10;
    }
    
    return count;

}