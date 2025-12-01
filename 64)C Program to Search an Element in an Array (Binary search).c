#include <stdio.h>

int main() {
    int arr[] = {2, 5, 8, 12, 16, 23};
    int n = 6, key = 12, low = 0, high = n - 1, mid;

    while(low <= high) {
        mid = (low + high) / 2;
        if(arr[mid] == key) {
            printf("Found at index %d", mid);
            return 0;
        }
        else if(arr[mid] < key)
            low = mid + 1;
        else
            high = mid - 1;
    }

    printf("Not found");
    return 0;
}
