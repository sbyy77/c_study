#include <stdio.h>
/*  static memory
    insertion sort
    time complexity: O(n^2)
    space complexity: O(n)
*/
int main() {//selection sort
    int n, temp;
    int arr[1000];
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &temp);
        arr[i] = temp;
    }
    for (int i = 0; i <= n - 1; i++) {
        int key = arr[i], j = i - 1;
        while (j >= 0 && key < arr[j]) {
            temp = arr[j + 1];
            arr[j + 1] = arr[j];
            //arr[j] = temp;
            j--;
        }
        arr[j + 1] = key;
    }
    for (int i = 0; i < n; i++) {
        printf("%d\n", arr[i]);
    }
    return 0;
}