#include <iostream>

using namespace std;

///-------CƠ BẢN---------

//- Số nhỏ hơn trong 2 số--
int checkSoNhoHon2So (int num1, int num2){   
    return (num1 < num2) ? num1 : num2;
}

// - Ước chung lớn nhất & Bội chung nhỏ nhất
int checkUcln(int a, int b) {
    if (b == 0) {
        return a;
    }
    return checkUcln(b, a % b);
}

int checkBcnn(int a, int b) {
    return (a * b) / checkUcln(a, b);
}

// - Tính n! (n>1): n!= 1*2* ...*(n-1)*n // Tính tổ hợp C(n,k) = n! / k!(n-k)!
int tichGiaiThua (int num){
    if (num <= 1){
        return 1;
    }
    int tich = 1;
    for (int i = 2; i <= num; i++){
        tich *= i;
    }
    return tich;
}
int tinhToHop(int n, int k) {
    if (k < 0 || k > n) {
        return 0; 
    }
    int giaiThuaN = tichGiaiThua(n);
    int giaiThuaK = tichGiaiThua(k);
    int giaiThuaNK = tichGiaiThua(n - k);

    int toHop = giaiThuaN / (giaiThuaK * giaiThuaNK);
    return toHop;
}


// - Tính X^n
double tinhXmuN(double X, int n) {
        double kq = 1.0;
        if (n < 0) {
            X = 1.0 / X;
            n = -n;
        }
        while (n > 0) {
            if (n % 2 == 1) {
                kq *= X;
            }
            X *= X;
            n /= 2;
        }
    return kq;
}

// - Hàm tính chu vi hình chữ nhật - Tính diện tích - Vẽ HCN
int tinhChuVi(int dai, int rong) {
    return 2 * (dai + rong);
}

int tinhDienTich(int dai, int rong) {
    return dai * rong;
}

void veHCB(int dai, int rong) {
    for (int i = 0; i < dai; i++) {
        for (int j = 0; j < rong; j++) {
            cout << "* ";
        }
        cout << endl;
    }
}

// - Kiểm tra số hoàn thiện - In số hoàn thiện nhỏ hơn N
bool KTSoHoanThien(int n) {
    int sum = 1;
    for (int i = 2; i <= n / 2; i++) {
        if (n % i == 0) {
            sum += i;
        }
    }
    return sum == n;
}

void InRaSHT(int N) {
    cout << "Các số hoàn thiện nhỏ hơn " << N << " là: ";
    for (int i = 2; i < N; i++) {
        if (KTSoHoanThien(i)) {
            cout << i << " ";
        }
    }
    cout << endl;
}


// Hàm đọc một số (chỉ nhận số có một chữ số)
                string readSingleDigitNumber(int number) {
                    switch (number) {
                        case 0: return "khong";
                        case 1: return "mot";
                        case 2: return "hai";
                        case 3: return "ba";
                        case 4: return "bon";
                        case 5: return "nam";
                        case 6: return "sau";
                        case 7: return "bay";
                        case 8: return "tam";
                        case 9: return "chin";
                        default: return "So khong hop le!";
                    }
                }

                // Hàm đọc số có 3 chữ số
                string readThreeDigitNumber(int number) {
                    int hundred = number / 100;
                    int ten = (number / 10) % 10;
                    int unit = number % 10;

                    string result;

                    if (hundred > 0) {
                        result += readSingleDigitNumber(hundred) + " tram ";
                    }

                    if (ten > 1) {
                        result += readSingleDigitNumber(ten) + " muoi ";
                    } else if (ten == 1) {
                        result += "muoi ";
                    }

                    if (ten != 1 && unit > 0) {
                        result += readSingleDigitNumber(unit);
                    }

                    return result;
                }

// Hàm đọc số nhỏ hơn 1 000 000
string readNumberLessThanOneMillion(int number) {
    if (number < 10) {
        return readSingleDigitNumber(number);
    } else if (number < 100) {
        return readSingleDigitNumber(number / 10) + " muoi " + readSingleDigitNumber(number % 10);
    } else if (number < 1000) {
        return readThreeDigitNumber(number);
    } else if (number < 1000000) {
        int thousands = number / 1000;
        int remainder = number % 1000;
        return readThreeDigitNumber(thousands) + " nghin " + readThreeDigitNumber(remainder);
    } else {
    return "So khong hop le!";
    }
}


// - Năm tổ chức sự kiện thể thao
void suKienTheThao(int startYear, int endYear) {
    for (int year = startYear; year <= endYear; year++) {
        if ((year - 1988) % 4 == 0) {
            cout << year << " - Olympic & Euro" << endl;
        }
        if ((year - 1990) % 4 == 0) {
            cout << year << " - World Cup" << endl;
        }
        if ((year - 1995) % 2 == 0) {
            cout << year << " - SEA Games" << endl;
        }
        if ((year >= 1996) && (year - 1996) % 2 == 0) {
            cout << year << " - Tiger Cup" << endl;
        }
    }
}

// - Kiểm tra năm nhuận
bool mamNhuan(int nam) {
    return (nam % 4 == 0 && nam % 100 != 0) || (nam % 400 == 0);
}

int soNgayCuaThang(int thang, int nam) {
    if (thang == 2) {
        return mamNhuan(nam) ? 29 : 28;
    } else if (thang == 4 || thang == 6 || thang == 9 || thang == 11) {
        return 30;
    } else {
        return 31;
    }
}

int main() {

    int choice;

    do {
        cout << "=== Lựa chọn yêu cầu ===." << endl;
        cout << "======= CƠ  BẢN ========." << endl;
        cout << "1. Hàm xác định số nhỏ." << endl;
        cout << "2. Xác định UCLN và BCNN." << endl;
        cout << "3. Tính n! với n>1." << endl;
        cout << "4. Tính X^n" << endl;
        cout << "5. Tính hàm tổ hợp." << endl;
        cout << "6. Vẽ hình chữ nhật * khi biết độ dài 2 cạnh." << endl;
        cout << "7. Số hoàn thiện và in ra tất cả các số hoàn thiện nhỏ N(SHT là tổng tất cả các ước số của nó, kể cả 1)." << endl;
        cout << "8. Tiền." << endl; 
        cout << "9. Đảo các vị trí số." << endl;
        cout << "======= ỨNG DỤNG ========." << endl;
        cout << "10. ." << endl;
        cout << "11. ." << endl;
        cout << "12. ." << endl;
        cout << "13. ." << endl;
        cout << "14. Đọc số." << endl;
        cout << "15. Giải thể thao." << endl;
        cout << "16. Kiểm tra ngày tháng." << endl;
        cout << "0. Thoát." << endl;
        cout << "=== Chọn yêu cầu: ";
        cin >> choice;

        switch (choice) {
            case 1:
            {
                int a, b ,c;
                cout << "Nhập a: ";
                cin >> a;
                cout << "Nhập b: ";
                cin >> b;

                int min = checkSoNhoHon2So(a, b);
                cout << "Số nhỏ trong "<< a <<" và "<< b <<" là: "<< min << endl;

                cout << "Nhập c: ";
                cin >> c;

                int min3 = checkSoNhoHon2So(min, c);
                cout << "Số nhỏ hơn trong ba số " << a << ", " << b << " và " << c << " là: " << min3 << endl;
                break;
            }
            case 2:
            {
                int a, b;

                do {
                    cout << "Nhập số nguyên a: ";
                    cin >> a;
                    cout << "Nhập số nguyên b: ";
                    cin >> b;

                    if (a <= 0 || b <= 0) {
                        cout << "Nhập lại 2 số"<< endl;
                    }
                } while (a <= 0 || b <= 0);

                int UCLN = checkUcln(a, b);
                int BCNN = checkBcnn(a, b);

                cout << "Ước chung lớn nhất " << a << " và " << b << " là: " << UCLN << endl;
                cout << "Bội chung nhỏ nhất " << a << " và " << b << " là: " << BCNN << endl;
                break;
            }
            case 3:
            {
                int n;
                int tich = tichGiaiThua(n);

                do {
                    cout << "Nhập số nguyên N (>1): ";
                    cin >> n;
                } while (n <= 1);
                cout << "Tích giai thừa của " << n << "! = "<< tich << endl;
                break;
            }
            case 4:
            {
                double X;
                int n;

                cout << "Nhập giá trị X: ";
                cin >> X;
                cout << "Nhập số nguyên n: ";
                cin >> n;

                double kq = tinhXmuN(X, n);
                cout << X << "^" << n << " = " << kq << endl;
                break;
            }
            case 5:
            {
                int n, k;
                cout << "Nhập giá trị n: ";
                cin >> n;
                cout << "Nhập giá trị k: ";
                cin >> k;

                int ketQua = tinhToHop(n, k);
                cout << "C(" << n << ", " << k << ") = " << ketQua << endl;
                break;
            }
            case 6:
            {
                int dai, rong;
                cout << "Nhập chiều dài của hình chữ nhật: ";
                cin >> dai;
                cout << "Nhập chiều rộng của hình chữ nhật: ";
                cin >> rong;

                int chuvi = tinhChuVi(dai, rong);
                cout << "Chu vi hình chữ nhật: " << chuvi << endl;
                int dientich = tinhDienTich(dai, rong);                
                cout << "Diện tích hình chữ nhật: " << dientich << endl;
                
                cout << "Hình chữ nhật: " << endl;
                veHCB(dai, rong);
                break;
            }
            case 7:
            {
                int N;
                cout << "Nhập số N: ";
                cin >> N;
                InRaSHT(N);
                break;
            }
            case 8:
            {
                

                break;
            }
            case 9:
            {
                int num;
                cout << "Nhập số nguyên: "<< endl;
                cin >> num;
                int arr[10], i = 0;

                while (num != 0) {
                    arr[i] = num % 10;
                    num /= 10;
                    i++;
                }
                cout << "Số đảo ngược là: "<< endl;
                for (int j = 0; j<i; j++) {
                    cout << arr[j];
                }
                break;
            }
            case 10:
            {
                break;
            }
            case 11:
            {
                
                break;
            }
            case 12:
            {
                break;
            }
            case 13:
            {
                break;
            }
            case 14:
            {
                int number;
                cout << "Nhap vao mot so co 1 chu so: ";
                cin >> number;
                cout << "Chuoi tuong ung: " << readSingleDigitNumber(number) << endl;

                cout << "Nhap vao mot so co 3 chu so: ";
                cin >> number;
                cout << "Chuoi tuong ung: " << readThreeDigitNumber(number) << endl;

                cout << "Nhap vao mot so nho hon 1,000,000: ";
                cin >> number;
                cout << "Chuoi tuong ung: " << readNumberLessThanOneMillion(number) << endl;
                break;
            }
            case 15:
            {
                int startYear = 1975;
                int endYear;
                cout << "Nhập năm(>= 1975): ";
                cin >> endYear;

                if (endYear < startYear) {
                    cout << "Đầu vào không hợp lệ! Năm cuối phải lớn hơn hoặc bằng năm 1975." << endl;
                    return 1;
                }

                cout << "Các sự kiện thể thao lớn từ " << startYear << " đến " << endYear << " là:" << endl;
                suKienTheThao(startYear, endYear);
                break;
            }
            case 16:
            {
                int ngay, thang, nam;
                bool hopLe = false;

                do {
                    cout << "Nhập ngày: ";
                    cin >> ngay;
                    cout << "Nhập tháng: ";
                    cin >> thang;
                    cout << "Nhập năm: ";
                    cin >> nam;

                    if (ngay >= 1 && ngay <= 31 && thang >= 1 && thang <= 12) {
                        hopLe = true;
                    } else {
                        cout << "Nhập lại ngày, tháng, năm!" << endl;
                    }                  
                } while (!hopLe);
                
                if (ngay < 1){
                    --thang;
                    cout << "Ngày hôm qua là ngày: " << ngay <<endl;
                        if (thang < 12){
                        --nam;
                        }
                }
                int ngayTrongThang = soNgayCuaThang(thang, nam);
                cout << "Hôm nay là ngày : "<< ngay << endl;
                cout << "Tháng " << thang << " năm " << nam << " có " << ngayTrongThang << " ngày" << endl;
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
