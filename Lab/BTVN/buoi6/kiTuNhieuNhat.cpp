#include <iostream>
#include <string>
using namespace std;

char kiTuNhieuNhat(const string &s) {
    int freq[256] = {0};

    for (char c : s) {
        freq[c]++;
    }

    char freqNhieuNhat = '\0';
    int maxFreq = 0; 

    for (int i = 0; i < 256; i++) {
        if (freq[i] > maxFreq) {
            maxFreq = freq[i];
            freqNhieuNhat = char(i);
        }
    }

    return freqNhieuNhat;
}

int main() {
    string s;
    cout << "Nhap chuoi bat ky: ";
    getline(cin, s);

    char freqNhieuNhat = kiTuNhieuNhat(s);

    if (freqNhieuNhat != '\0') {
        cout << "Ký tự xuất hiện nhiều nhất là: " << freqNhieuNhat << endl;
    } else {
        cout << "Không có kí tự xuất hiện nhiều nhất!" << endl;
    }

    return 0;
}