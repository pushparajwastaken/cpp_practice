#include <iostream>
using namespace std;


bool isArmstrong(int num) {
    if (num < 0) return false;

    int sum = 0;
    int numDigits = 0;
    int temp = num;
    while (temp > 0) {
        numDigits++;
        temp /= 10;
    }
    temp = num; 
    while (temp > 0) {
        int digit = temp % 10;
        int power = 1;
        for (int i = 0; i < numDigits; i++) {
            power *= digit;
        }

        sum += power;
        temp /= 10;
    }
    return sum==num;
}

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;

    if (isArmstrong(num)) {
        cout << num << " is an Armstrong number." << endl;
    } else {
        cout << num << " is not an Armstrong number." << endl;
    }

    return 0;
}