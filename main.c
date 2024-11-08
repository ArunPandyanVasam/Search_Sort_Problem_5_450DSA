#include <stdio.h>
#include <stdbool.h>

void printTwoElements(int arr[], int n) {
    printf("\nn = %d", n);
    bool visited[n+1];
    printf("\nn = %d", n+1);

    int repeating = -1, missing = -1;

    for (int i = 0; i < n; ++i) {
        visited[i] = false;
    }

    for (int i = 0; i < n; ++i) {
        if (visited[arr[i]]) {
            repeating = arr[i];
        } else {
            visited[arr[i]] = true;
        }
    }


    for (int i = 1; i < n; ++i) {
        if (!visited[i]) {
            missing = i;
            break;
        }
    }

    printf("\nRepeating : %d\n", repeating);
    printf("Missing : %d\n", missing);

}


int main(void) {
    //  Find the repeating and the missing
    int arr[] = {3, 1, 3};
    int n = sizeof(arr)/sizeof(arr[0]);
    printTwoElements(arr, n);
    return 0;
}
