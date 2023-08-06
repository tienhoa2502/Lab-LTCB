#include <iostream>
using namespace std;

// Đảo kí tự chuỗi
void reverseString(string& str) {
    int left = 0;
    int right = str.length() - 1;
    
    while (left < right) {
        char temp = str[left];
        str[left] = str[right];
        str[right] = temp;
        left++;
        right--;
    }
}

int main(){
    string inputStr;
    cout << "Nhập chuỗi: ";
    getline(cin, inputStr);

    reverseString(inputStr);

    cout << "Chuỗi sau khi đảo ngược: " << inputStr << endl;
}