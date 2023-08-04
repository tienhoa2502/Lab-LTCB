#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main() {
    
    // -- CƠ BẢN -- //
    int choice;

    do {
        cout << "Lựa chọn yêu cầu" << endl;
        cout << "1. Thực hiện yêu cầu 1. Hình cầu" << endl;
        cout << "2. Thực hiện yêu cầu 2. Tọa độ điểm" << endl;
        cout << "3. Thực hiện yêu cầu 3. Mã ASCII" << endl;
        cout << "4. Thực hiện yêu cầu 4. Điện trở" << endl;
        cout << "5. Thực hiện yêu cầu 5. Cho n rồi tính S tương ứng" << endl;
        cout << "6. Thực hiện yêu cầu 6. Tam giác cân" << endl;
        cout << "7. Thực hiện yêu cầu 7. Quy đổi giờ sang giây" << endl;
        cout << "8. Thực hiện yêu cầu 8. Quy đổi giây sang giờ" << endl;
        cout << "9. Thực hiện yêu cầu 9. Quy đổi giây sang giờ dạng hh/mm/ss" << endl;
        cout << "10. Thực hiện yêu cầu 10. Đảo ngược số 3 chữ số" << endl;
        cout << "0. Thoát." << endl;
        cout << "Chọn yêu cầu: ";
        cin >> choice;

        switch (choice) {
            case 1:
            {
                double r;
                #define PI 3.14
                cout << "Nhập bán kính";
                cin >> r;
                double S = 4*pow(r,2)*PI;
                double V = (4/3)*pow(r,3)*PI;
                cout << "Diện tích hình cầu là: " << S;
                cout << "Thể tích hình cầu là: " << V;
                break;
            }
            case 2:
            {
                cout << "Chọn yêu cầu 2." << endl;
                int x1, x2, y1, y2, HSG, D;
                cout << "Nhập tọa độ x1: ";
                cin >> x1;
                cout << "Nhập tọa độ y1: ";
                cin >> y1;
                cout << "Nhập tọa độ x2: ";
                cin >> x2;
                cout << "Nhập tọa độ y2: ";
                cin >> y2;
                HSG = (y2-y1)*(x2-x1);
                D = sqrt( (pow(y2-y1,2) + pow(x2-x1,2) ) );
                cout << "Hệ số gốc là: " << HSG;
                cout << "Khoảng cách D là: " << D;
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
                double R1, R2, R3, R;
                cout << "Nhập giá trị điển trở R1: ";
                cin >> R1;
                cout << "Nhập giá trị điển trở R2: ";
                cin >> R2;
                cout << "Nhập giá trị điển trở R3: ";
                cin >> R3;
                R = (R1*R2*R3)/(R1+R2+R3);
                cout << "Điện trở tương đương: " << R;
                break;
            }
            case 5:
            {
                cout << "Chọn yêu cầu 5." << endl;
                int n;
                cout << "Nhập số tự nhiên n";
                cin >> n;

                // Tính S1 = 1 + 1/2 + 1/3 +...+ 1/n
                double S1 = 0;
                for (int i = 1; i <= n; i++) {
                    S1 += 1.0 / i;
                }

                // Tính S2 = 1+2+3+...+n
                int S2 = 0;
                for (int i = 1; i <= n; i++) {
                    S2 += i;
                }

                // Tính S3 =  tổng các số lẻ không lớn hơn n
                int S3 = 0;
                for (int i = 1; i <= n; i += 2) {
                    S3 += i;
                }

                // Tính S4 = tổng các số chẵn không lớn hơn n
                int S4 = 0;
                for (int i = 2; i <= n; i += 2) {
                    S4 += i;
                }

                // Tính S5 = tổng các số chia hết cho 7 và không lớn hơn n
                int S5 = 0;
                for (int i = 7; i <= n; i += 7) {
                    S5 += i;
                }

                // Tính S6 = tổng các số không chia hết cho 7 và không lớn hơn n
                int S6 = 0;
                for (int i = 1; i <= n; i++) {
                    if (i % 7 != 0) {
                        S6 += i;
                    }
                }

                cout << "S1 = " << S1 << endl;
                cout << "S2 = " << S2 << endl;
                cout << "S3 = " << S3 << endl;
                cout << "S4 = " << S4 << endl;
                cout << "S5 = " << S5 << endl;
                cout << "S6 = " << S6 << endl;
                break;
            }
            case 6:
            {
                cout << "Chọn yêu cầu 6." << endl;
                int a, P, S;
                cout << "Nhập số thực a";
                cin >> a;
                P = a * 3;
                S = pow(a,2)*(sqrt(3)/4);
                cout << "Chu vi tam giác đều là: " << P;
                cout << "Diện tích tam giác đều là: " << S;
                break;
            }
            case 7:
            {
                cout << "Chọn yêu cầu 7." << endl;
                int gio, phut, giay;
    
                cout << "Nhập giờ: ";
                cin >> gio;
                cout << "Nhập phút: ";
                cin >> phut;
                cout << "Nhập giây: ";
                cin >> giay;

                int tongGiay = gio * 3600 + phut * 60 + giay;

                cout << "Tổng giây: " << tongGiay << " giây " << endl;
                break;
            }
            case 8:
            {
                cout << "Chọn yêu cầu 8." << endl;

                int giayquydoi, gio, phut, giay;
                cout << "Nhap so giay: ";
                cin >> giayquydoi;

                gio = giayquydoi / 3600;
                phut = (giayquydoi % 3600) / 60;
                giay = giayquydoi % 60;

                cout << "Quy đổi: " << gio << " Giờ, " << phut << " phút, " << giay << " giây" << endl;
                break;
            }
            case 9:
            {
                cout << "Chọn yêu cầu 9." << endl;

                int giayquydoi, gio, phut, giay;
                cout << "Nhập giây: ";
                cin >> giayquydoi;

                gio = giayquydoi / 3600;
                giayquydoi %= 3600; // Lấy phần dư tính giờ tiếp
                phut = giayquydoi / 60;
                giay = giayquydoi % 60;

                cout << setfill('0'); // Đặt fill character là '0'
                cout << setw(2) << gio << ":" << setw(2) << phut << ":" << setw(2) << giay << endl;
                break;
            }
            case 10:
            {
                cout << "Chọn yêu cầu 10." << endl;

                int x;
                cout << "Nhập một số nguyên có 3 chữ số: ";
                cin >> x;

                int reversedNumber = (x % 10) * 100 + ((x / 10) % 10) * 10 + x / 100;

                cout << "Số sau khi đảo ngược: " << reversedNumber << endl;
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
