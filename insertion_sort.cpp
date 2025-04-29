#include <iostream>
using namespace std;

void insertionSort(int arr[], int n, int &comparisonCount) {
    for (int i = 1; i < n; i++) {
        int key = arr[i];
        int j = i - 1;

        while (j >= 0) {
            comparisonCount++;
            if (arr[j] > key) {
                arr[j + 1] = arr[j];
                j--;
            } else {
                break;
            }
        }
        arr[j + 1] = key;
    }
}

int main() {
    int arr[] = {9, 5, 1, 4, 3, 30 , 2 , 1 , 23 , 34 , 35 , 35 , 23 , 1 , 34 , 46 , 46 , 85 , 2 , 5 , 135 ,25};
    int n = sizeof(arr) / sizeof(arr[0]);
    int comparisons = 0;

    insertionSort(arr, n, comparisons);

    cout << "Sorted array: ";
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << "\nNumber of comparisons: " << comparisons << endl;

    return 0;
}

