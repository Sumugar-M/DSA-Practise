
/*

1️⃣ Find the Largest Element in an Array

    Given an array of integers, find the maximum element.
    Input: [2, 5, 1, 8, 3]
    Output: 8

*/


#include<stdio.h>

int main()
{
    int num_elements, i, max_value;

    scanf("%d", &num_elements);
    int arr[num_elements];

    for (i = 0; i < num_elements; i++) {
        scanf("%d", &arr[i]);
    }

    max_value = arr[0];
    for (i = 1; i < num_elements; i++) {
        if (arr[i] > max_value) {
            max_value = arr[i];
        }
    }

    printf("The Larger Element is: %d\n", max_value);
    return 0;

}