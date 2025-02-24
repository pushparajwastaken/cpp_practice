#include<iostream>
using namespace std;

int main(){
    int num;
    cin >> num;

    if(num == 0) {
        cout << "Invalid" << endl; // Handle the case where the input is zero
        return 0;
    }

    int counter = 0;
    while (num != 0) {
        int digit = num % 10;  // Get the last digit
        if (digit != 0) {       // Check if the digit is non-zero
            counter += 1;
        }
        num /= 10;  // Remove the last digit from the number
    }

    cout << "Number of non-zero digits: " << counter << endl;

    return 0;
}
