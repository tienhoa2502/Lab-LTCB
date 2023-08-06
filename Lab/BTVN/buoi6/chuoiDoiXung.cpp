#include <iostream>
#include <string>
using namespace std;

bool kiemTraChuoiDoiXung(const string &s) {
    int left = 0;
    int right = s.length() - 1;

    while (left < right) {
        if (s[left] != s[right]) {
            return false;
        }
        left++;
        right--;
    }

    return true;
}

int main() {
    string s;
    cout << "Nhập chuỗi: ";
    getline(cin, s);

    if (kiemTraChuoiDoiXung(s)) {
        cout << "Chuỗi đối xứng" << endl;
    } else {
        cout << "Chuỗi không đối xứng" << endl;
    }

    return 0;
}