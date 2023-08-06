
#include <iostream>
using namespace std;

// Hàm xuất kí tự hoa
void xuatKiTuHoa(const string& str) {
    cout << "Nhập chuỗi kí tự: ";
    for (char ch : str) {
        if (isupper(ch)) {
            cout << ch << " ";
        }
    }
    cout << endl;
}
int main(){
    string nhap;
    cout << "Nhap chuoi: ";
    getline(cin, nhap);
    xuatKiTuHoa(nhap);
    
    return 0;
}
