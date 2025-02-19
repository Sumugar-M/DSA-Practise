/*

Remove Spaces from String

Problem: Remove all spaces from a given string.
Example:
🔹 Input: "hello world"
🔹 Output: "helloworld"

*/
#include<stdio.h>
#include<string.h>
//#include<ctype.h>

int main() 
{
    char str[100];
    scanf("%[^\n]s", str);
    int len = strlen(str), i;

    for (i = 0; i < len; i++) {
        if(str[i] != ' ') {
            printf("%c",str[i]);
        }
    }
    return 0;
}
