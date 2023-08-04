#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Nhập giá trị n: ";
    cin >> n;

    int sum = 0;
    for (int i = 1; i <= n; i++) {
        sum += i;
    }

    cout << "Tổng S = " << sum << endl;
    return 0;
}
