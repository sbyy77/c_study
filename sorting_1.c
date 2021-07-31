#include <stdio.h>
/*  static memory
    selection sort
    time complexity: O(n^2)
    space complexity: O(n)
*/
int main() {//selection sort
    int n, temp;
    int a, b;
    int arr[1000];
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &temp);
        arr[i] = temp;
    }
    for (int i = 0; i < n - 1; i++) {
        a = i;
        for (int j = i + 1; j < n; j++) {
            if (arr[a] >= arr[j]) a = j;
        }
        b = arr[a];
        arr[a] = arr[i];
        arr[i] = b;
    }
    for (int i = 0; i < n; i++) {
        printf("%d\n", arr[i]);
    }
    return 0;
}