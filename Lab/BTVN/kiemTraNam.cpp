#include <iostream>
#include <cmath>
using namespace std;

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
    int thang, nam;
    bool hopLe = false;

    do {
        cout << "Nhập tháng: ";
        cin >> thang;
        cout << "Nhập năm (>1975): ";
        cin >> nam;

        if (nam > 1975 && thang >= 1 && thang <= 12) {
            hopLe = true;
        } else {
            cout << "Nhập lại tháng, năm!" << endl;
        }
    } while (!hopLe);

    int ngayTrongThang = soNgayCuaThang(thang, nam);
    cout << "Tháng " << thang << " năm " << nam << " có " << ngayTrongThang << " ngày" << endl;

    return 0;
}
