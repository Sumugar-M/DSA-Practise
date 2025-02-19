/*

Count Vowels and Consonants

Problem: Count the number of vowels (a, e, i, o, u) and consonants in a given string.
Example:
🔹 Input: "hello"
🔹 Output: Vowels: 2, Consonants: 3

*/

#include<stdio.h>
#include<string.h>

int vowel_Consont_Count(char str[], int len, int *vowel, int *consonant);


int main()
{
    char str[100];
    scanf("%s", str);
    int len = strlen(str), vowl_count, consnt_count;

    vowel_Consont_Count(str, len, &vowl_count, &consnt_count);
   
    printf("Vowels: %d\n", vowl_count);
    printf("Consonants: %d\n", consnt_count);

    return 0;

}

int vowel_Consont_Count(char str[], int len, int *vowel, int *consonant) {
    int i, v_count = 0, c_count = 0;
    for (i = 0; i < len; i++) {
        if (str[i] == 'a' || str[i] == 'A' || str[i] == 'e' || str[i] == 'E' || str[i] == 'i' || 
        str[i] == 'I' || str[i] == 'o' || str[i] =='O' || str[i] == 'u' || str[i] == 'U' ) {
            v_count++;
        } else {
            c_count++;
        }
    }
    *vowel = v_count;
    *consonant = c_count;
}