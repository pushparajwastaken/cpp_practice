#include <iostream>
using namespace std;

int main() {
    int n, pos, k;
    cout << "No of elements in array: ";
    cin >> n;

    int arr[100]; // allocate extra space

    cout << "Insert elements into array:" << endl;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << "The elements of the array are: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    cout << "Enter the position to insert the element: ";
    cin >> pos;

    if (pos < 1 || pos > n + 1) {
        cout << "Incorrect index!" << endl;
        return 0;
    }

    cout << "Enter the element to be inserted: ";
    cin >> k;

    for (int i = n - 1; i >= pos - 1; i--) {
        arr[i + 1] = arr[i];
    }

    arr[pos - 1] = k;
    n++; 

    cout << "The elements of the array after insertion are: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
