#include <iostream>
using namespace std;

int main() {

    int arr[6] = {1, 2, 3, 2, 3, 1};
    int n = 6;

    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (arr[i] == arr[j]) {
                // shift elements to left
                for (int k = j; k < n - 1; k++) {
                    arr[k] = arr[k + 1];
                }
                n--;   // reduce size
                j--;   // check same index again
            }
        }
    }

    // print array after removing duplicates
    cout << "Array after removing duplicates: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}
