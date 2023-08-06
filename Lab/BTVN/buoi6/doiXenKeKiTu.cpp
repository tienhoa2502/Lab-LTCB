#include <iostream>
#include <cstring>

using namespace std;


void chuxenke(char *a) {
    int n = strlen(a);
    for (int i = 0; i < n; i++) {
        if (i % 2 == 0) {
            if (a[i] >= 'a' && a[i] <= 'z') {
                a[i] = char(a[i] - 32); // Chuyển thành chữ hoa
            }
        } else {
            if (a[i] >= 'A' && a[i] <= 'Z') {
                a[i] = char(a[i] + 32); // Chuyển thành chữ thường
            }
        }
    }
    cout << a << endl;
}

int main() {
    char a[100];
    cout << "Nhập chuỗi: ";
    cin.getline(a, 100);
    chuxenke(a);
    return 0;
}