#include <stdio.h>

int main() {
    int arr[] = {10, 25, 7, 50, 3};
    int n = 5, max = arr[0];

    for(int i = 1; i < n; i++)
        if(arr[i] > max)
            max = arr[i];

    printf("Largest = %d", max);
    return 0;
}
