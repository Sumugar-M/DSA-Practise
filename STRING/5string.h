/*

Find the First Non-Repeating Character

Problem: Return the first character in the string that does not repeat.
Example:
🔹 Input: "swiss"
🔹 Output: "w"

*/

#include<stdio.h>
#include<string.h>

int main()
{
    char str[100];
    scanf("%s", str);
    int left_ptr = 0, rigth_ptr = strlen(str) - 1;

    while(left_ptr < rigth_ptr) {
        if(str[left_ptr] == str[rigth_ptr]) {
            left_ptr++;
            rigth_ptr = strlen(str) - 1;
        } else {
            if(rigth_ptr == left_ptr + 1) {
                printf("%c", str[left_ptr]);
                break;
                
            } else {
                rigth_ptr--;
            }
        }
    }

    

    return 0;
}