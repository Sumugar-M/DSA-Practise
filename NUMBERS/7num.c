/*

Take the given input number, reverse it and add it to the original number until the
obtained number is a palindrome or 5 iterations are completed.

Input Format

32
Explanation:
23 + 32 = 55

Constraints

20<=n<=1000

Output Format

55

Sample Input 0

39

Sample Output 0

363



*/


void reverseAdd(int num);
void checkPalindrome(int pal_num);
int reverse(int rev_num);

#include<stdio.h>

int itrtion_count = 0;

int main()
{
    int num;
    scanf("%d", &num);
    reverseAdd(num);
    return 0;
}

void reverseAdd(int num) {

    int orgnl_num = num, new_num, reversed_num;
    reversed_num = reverse(num);    

    if (reversed_num == orgnl_num){
        printf("%d", orgnl_num);
        return;
    }
    
    new_num  = orgnl_num + reversed_num;

    checkPalindrome(new_num);

}

int reverse(int rev_num) {
    int temp, reversed_num  = 0;

    while (rev_num != 0) {
        temp = rev_num % 10;
        reversed_num = reversed_num * 10 + temp;
        rev_num /= 10;
    }

    return  reversed_num;
}

void checkPalindrome(int pal_num) {

    int palin_check;
    itrtion_count++;

    if(itrtion_count == 5) {
        printf("Five Iteration Completed");
        return;
    }

    palin_check  = reverse(pal_num);

    if(palin_check == pal_num) {
        printf("%d\n",    pal_num);
       
    } else {
        reverseAdd(pal_num);
        
    }
   
}
