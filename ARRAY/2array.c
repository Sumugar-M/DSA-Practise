#include<stdio.h>

int main()
{
    int num_elements, i, temp, j;
    scanf("%d", &num_elements);
    int arr[num_elements];

    for (i = 0; i < num_elements; i++) {
        scanf("%d", &arr[i]);
    }
    
    for(i = 0; i < num_elements; i++) {
        for(j = i + 1; j < num_elements; j++) {
            if (arr[i] > arr[j]) {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }

    printf("The Second Largest Element is: %d\n",arr[num_elements-2]);

    return 0;
}