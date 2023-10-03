#include <iostream>
using namespace std;
// Raul Lopez 9/22 DS Quiz # 4
// Function to calculate power
int power(int base, int exponent) {
    if (exponent == 0)
        return 1;
    else
        return base * Power(base,exponent - 1);
}

// Recursive function to calculate the crazy sum
int crazySum(int n) {
    if (n == 1)
        return 1;
    else
        return power(n, n) + crazySum(n - 1);
}


int main() {
    int n;
    cout << "Enter a positive integer (1-9): ";
    cin >> n;

    if (n >= 1 && n <= 9) {
        int result = crazySum(n);
        cout << "The crazy sum of 1^1 + 2^2 + ... + " << n << "^" << n << " is: " << result << endl;
    } else {
        cout << "Invalid input. Please enter an integer between 1 and 9." << endl;
    }

    return 0;
}