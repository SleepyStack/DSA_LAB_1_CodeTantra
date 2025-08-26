/*
Given a list of N numbers a1 + a2 + ...... + aN, find the position of 'x' in given list using binary search.

Input Format:

The first line takes the input value of 
N
.
The second line takes input 
N
 space-separated integer values.
The third line takes the input value of 
x
 which needs to be searched.


Output Format:

Output is an integer that represents the position of 
x
 in the given list. Otherwise print -1.


Constraints:

0
<
N
<
1000
0
<
 element of array 
<
100
0
<
x
<
100


Note:

The default position of first element is 0, and find the element's position in the sorted order of occurrence. Print -1 if not found.
For repeated elements find the position of the last occurrence.
*/
#include <stdio.h>
#include <stdlib.h>

int binarySearchLast(int arr[], int n, int x) {
    int left = 0, right = n - 1;
    int result = -1;

    while (left <= right) {
        int mid = left + (right - left) / 2;

        if (arr[mid] == x) {
            result = mid;
            left = mid + 1;
        } else if (arr[mid] < x) {
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }

    return result;
}

int main() {
    int N, x;
    scanf("%d", &N);

    int *arr = (int *)malloc(N * sizeof(int));
    for (int i = 0; i < N; i++) {
        scanf("%d", &arr[i]);
    }

    scanf("%d", &x);

    for (int i = 0; i < N - 1; i++) {
        for (int j = 0; j < N - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    int position = binarySearchLast(arr, N, x);
    printf("%d\n", position);

    free(arr);
    return 0;
}

