#include<stdio.h>

int main()
{
    int num_elements, i, even_count = 0, odd_count = 0;
    scanf("%d", &num_elements);
    int arr[num_elements];

    for (i = 0; i < num_elements; i++) {
        scanf("%d", &arr[i]);
    }

    for (i = 0; i < num_elements; i++) {
        if (arr[i] % 2 == 0) {
            even_count++;
        } else {
            odd_count++;
        }
    }

    printf("Odd number count: %d\n", odd_count);
    printf("Even number count: %d\n", even_count);  
}