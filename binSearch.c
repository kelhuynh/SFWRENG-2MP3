#include <stdio.h>

int *recursiveBin(int arr[], int l, int r, int k){
    int *p = arr;
    if (r >= l) {
        int mid = l + (r - l)/2;
        if(arr[mid] == k) return &p[mid];
        if (arr[mid] > k) return recursiveBin(p, l, mid-1, k);
        return recursiveBin(p, mid+1, r, k);
    }
    return NULL;
}

int *iterativeBin(int arr[], int l, int r, int k) {
    int *p = arr;
    while (l <= r) {
        int mid = l + (r - 1)/2;
        if (arr[mid] == k) {
            return &p[mid];
        }
        if (arr[mid] < k) {
            l = mid + 1;
        }
        else {
            r = mid - 1;
        }
    }
    return NULL;
}

void main(){
    int arr[] = {1, 3, 4, 10, 15, 16, 16, 16, 17, 20, 23, 80};
    int length = sizeof(arr) / sizeof(arr[0]);
    int k = 16;
    int *result = recursiveBin(arr, 0, length-1, k);
    (result == NULL) ? printf("Not present") : printf("Target at address %d", result);
    result = iterativeBin(arr, 0, length-1, k);
    printf("\n");
    (result == NULL) ? printf("Not present") : printf("Target at address %d", result);
}