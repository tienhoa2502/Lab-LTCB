#include <iostream>
#include <string>
using namespace std;

int main() {
    string s;
    cout << "Nhập chuỗi ";
    getline(cin, s);

    char ch;
    cout << "Kí tự cần đếm: ";
    cin >> ch;

    int dem = 0;

    for (char c : s) {
        if (c == ch)
            dem++;
    }

    if (dem > 0) {
        cout << "Ký tự " << ch << " xuất hiện " << dem << " lần trong chuỗi '" << s << "'" << endl;
    } else {
        cout << "Ký tự " << ch << " không có trong chuỗi '" << s << "'" << endl;
    }

    return 0;
}