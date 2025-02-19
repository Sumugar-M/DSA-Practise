/*

 Check Palindrome

Problem: Check if a given string is a palindrome (reads the same forward and backward).
Example:
🔹 Input: "madam"
🔹 Output: True

*/

#include<stdio.h>
#include<string.h>

int isPalindrome(char str[], int len);

int main()
{
    char str[100];
    scanf("%s", str);
    int len = strlen(str);

    if (isPalindrome(str, len)) 
        printf("TRUE");
    else 
        printf("FALSE");

}

int isPalindrome(char str[], int len) {
    int left_ptr = 0, rigth_ptr = len - 1;
    while (left_ptr <= rigth_ptr) {
        if (str[left_ptr] != str[rigth_ptr]) {
            return 0;
        }
        left_ptr++;
        rigth_ptr--;
    }
    return 1;
}