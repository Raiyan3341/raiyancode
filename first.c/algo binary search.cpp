#include <iostream>
using namespace std;

int A[] = {3, 12, 19, 40, 21, 45, 30};
    int size = sizeof(A) / sizeof(A[0]);
    int keys[] = {3, 21, 100};

int linearSearch(int arr[], int size, int key) {
    for (int i = 0; i < size; i++) {
        if (arr[i] == key)
            return i;
    }
    return -1;
}

int main()
{
    for (int key : keys)
        {
            int result = linearSearch(A, size, key);
            if (result != -1)

            cout << "Element " << key << " found at index " << result << "\n";
        else
            cout << "Element " << key << " not found in array\n";
    }

    return 0;
}

