#include <iostream>
using namespace std;


int main() {
    int n, sum = 0;

    cout << "Nhập vào một số nguyên dương: ";
    cin >> n;

    int temp = n;
    while (temp > 0) {
        int digit = temp % 10;
        sum += digit;          
        temp /= 10;         
    }

    cout << "Tổng các chữ số của " << n << " là: " << sum << endl;

    return 0;
}
