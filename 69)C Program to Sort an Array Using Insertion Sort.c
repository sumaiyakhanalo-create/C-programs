#include <stdio.h>

int main() {
    int a[] = {5, 2, 9, 1, 7}, n = 5, key;

    for(int i = 1; i < n; i++) {
        key = a[i];
        int j = i - 1;
        while(j >= 0 && a[j] > key) {
            a[j+1] = a[j];
            j--;
        }
        a[j+1] = key;
    }

    for(int i = 0; i < n; i++)
        printf("%d ", a[i]);

    return 0;
}
