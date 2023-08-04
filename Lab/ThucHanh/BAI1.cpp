#include <iostream>

using namespace std;

int main() {

    // -- CƠ BẢN -- //
    int choice;

    do {
        cout << "Lựa chọn yêu cầu" << endl;
        cout << "1. Thực hiện yêu cầu 1. In ra màn hình" << endl;
        cout << "2. Thực hiện yêu cầu 2. Tính tuổi" << endl;
        cout << "3. Thực hiện yêu cầu 3. Mã ASCII" << endl;
        cout << "4. Thực hiện yêu cầu 4. Đường tròn" << endl;
        cout << "5. Thực hiện yêu cầu 5. Xác định min, max 2 số nguyên" << endl;
        cout << "0. Thoát." << endl;
        cout << "Chọn yêu cầu: ";
        cin >> choice;

        switch (choice) {
            case 1:
            {
                cout << "Chọn yêu cầu 1." << endl;
                cout << "********************" << endl;
                cout << "* THAO CHUONG BANG *" << endl;
                cout << "    NGON NGU C     *" << endl;
                cout << "********************" << endl;
                break;
            }
            case 2:
            {
                cout << "Chọn yêu cầu 2." << endl;
                int ng, ns, tuoi;
                cout << "Nhập năm sinh của bạn: ";
                cin >> ns;
                ng = 2023;
                tuoi = ng - ns;
                cout << "Tuổi của bạn là: " << tuoi;
                break;
            }
            case 3:
            {
                cout << "Chọn yêu cầu 3." << endl;
                char ch;
                int number;
                cout << "Nhập kí tự: ";
                cin >> ch;
                cout << "Nhập số nguyên (1-255): ";
                cin >> number;

                int maASCII = static_cast<int>(ch);
                cout << "Mã ASCII của kí tự '" << ch << "' là: " << maASCII << endl;

                if (number >= 1 && number <= 255) {
                char character = static_cast<char>(number);
                cout << "Kí tự ASCII tương ứng với số " << number << " là: " << character << endl;
                } else {
                    cout << "Nhập lại số nguyên (1-255)" << endl;
                }
                break;
            }
            case 4:
            {
                cout << "Chọn yêu cầu 4." << endl;
                double r,C,S;
                #define PI 3.14
                cout << "Nhập bán kính";
                cin >> r;
                C = r*2*PI;
                S = r*r*PI;
                cout << "Chu vi hình tròn là: " << C;
                cout << "Diện tích hình tròn là: " << S;
                break;
            }
            case 5:
            {
                cout << "Chọn yêu cầu 5." << endl;
                int a, b;
                cout << "Nhập a: ";
                cin >> a;
                cout << "Nhập b: ";
                cin >> b;

                int maxNumber = a;
                    if ( b > maxNumber) {
                        maxNumber = b;
                        int minNumber = a;
                        cout << "b là số max: " << maxNumber << endl;
                        cout << "a là số min: " << minNumber << endl;
                    }    
                    else{
                        cout << "a là số max" << maxNumber << endl;   
                        cout << "b là số min: " << maxNumber << endl; 
                    }
                break;
            }
            case 0:
                cout << "Thoát" << endl;
                break;
            default:
                cout << "Vui lòng chọn lại" << endl;
        }
    } while (choice != 0);

    return 0;
}
