#include <iostream>

using namespace std;

int main() {
    const double gia1km = 15000; //Km đầu tiên
    const double gia2_5km = 13500;//Km thứ 2 đến 5
    const double giaTren6km = 11000;//Km thứ 6
    const double giamGiaTren120km = 0.1;//Trên 120Km

    double soKm;
    cout << "Nhập số km: ";
    cin >> soKm;

    double tongTien = 0;
    
    if (soKm <= 0) {
        cout << "Nhập lại km" << endl;
        return 0;
    }
    else if (soKm <= 1) {
        tongTien = gia1km * soKm;
    }
    else if (soKm <= 5) {
        tongTien = gia1km + gia2_5km * (soKm - 1);
    }
    else if (soKm <= 120) {
        tongTien = gia1km + gia2_5km * 4 + giaTren6km * (soKm - 5);
    }
    else {
        double giamGia = gia1km + gia2_5km * 4 + giaTren6km * 115;
        tongTien = giamGia + (soKm - 120) * giaTren6km * (1 - giamGiaTren120km);
    }

    cout << "Tông tiền là: " << tongTien << " VND" << endl;

    return 0;
}
