#include <iostream>
#include <algorithm>
using namespace std;

int binarySearch(int arr[], int size, int key) {
    int left = 0, right = size - 1;
    while (left <= right) {
        int mid = left + (right - left) / 2;

        if (arr[mid] == key)
            return mid;
        else if (arr[mid] < key)
            left = mid + 1;
        else
            right = mid - 1;
    }
    return -1;
}
int main() {
    int A[] = {8, 15, 27, 50, 31, 47, 33};
    int size = sizeof(A) / sizeof(A[0]);

    sort(A, A + size);

    int keys[] = {15, 31, 99};
    for (int key : keys) {
        int result = binarySearch(A, size, key);
        if (result != -1)
            cout << "Element " << key << " found at index " << result <<"\n";
        else
            cout << "Element " << key << " not found in array\n";
    }
    return 0;
}

