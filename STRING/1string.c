/*

Reverse a String

Problem: Given a string, reverse it and return the reversed string.
Example:
🔹 Input: "hello"
🔹 Output: "olleh"

*/

#include<stdio.h>
#include<string.h>


int main()
{
    char str[100];
    scanf("%s", str);
    int len = strlen(str), i;

    for (i = len - 1; i >= 0; i--) {
        printf("%c", str[i]);
    }
    return 0;
}