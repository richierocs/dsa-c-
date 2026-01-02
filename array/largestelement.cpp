#include <iostream>
using namespace std;

int main() {

    int arr[6] = {4, 2, 5, 6, 1, 3};

    // Bubble sort
    for (int i = 0; i < 6; i++) {
        for (int j = 0; j < 6 - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    cout << "Sorted array: ";
    for (int i = 0; i < 6; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    // Largest element
    cout << arr[5] << " is the largest element";

    return 0;
}
