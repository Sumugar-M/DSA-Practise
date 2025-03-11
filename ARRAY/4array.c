#include<stdio.h>

int main()
{
    int num_elements, i, temp;
    scanf("%d", &num_elements);
    int arr[num_elements], left_ptr = 0, right_ptr = num_elements - 1;

    for (i = 0; i < num_elements; i++) {
        scanf("%d", &arr[i]);
    }

    while (left_ptr < right_ptr) {
        temp = arr[left_ptr];
        arr[left_ptr] = arr[right_ptr];
        arr[right_ptr] = temp;
        left_ptr++;
        right_ptr--;
    }

    for (i = 0; i < num_elements; i++) {
        printf("%d ", arr[i]);
    }
}