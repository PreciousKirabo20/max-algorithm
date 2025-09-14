#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;

    int arr[n]; // Array of size n

    cout << "Enter " << n << " elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int max = arr[0]; // Assume first element is max

    for (int i = 1; i < n; i++) {
        if (arr[i] > max) {
            max = arr[i]; // Update max if a bigger value is found
        }
    }

    cout << "The maximum element is: " << max << endl;
    return 0;
}
