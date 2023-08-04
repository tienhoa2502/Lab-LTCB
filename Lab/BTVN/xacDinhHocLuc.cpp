#include <iostream>
using namespace std;

int main() {
    double diemTB;
    cout << "Nhâp điểm TB: ";
    cin >> diemTB;

    int hocLuc;
    
    if (diemTB >= 9.0) {
        hocLuc = 1; 
    } else if (diemTB >= 8.0) {
        hocLuc = 2; 
    } else if (diemTB >= 6.5) {
        hocLuc = 3; 
    } else if (diemTB >= 5.0) {
        hocLuc = 4; 
    } else {
        hocLuc = 5; 
    }

    switch (hocLuc) {
        case 1:
            cout << "Học lực giỏi" << endl;
            break;
        case 2:
            cout << "Hoc lực khá" << endl;
            break;
        case 3:
            cout << "Học lực trung binh" << endl;
            break;
        case 4:
            cout << "Học lực yếu" << endl;
            break;
        case 5:
            cout << "Học lực kém" << endl;
            break;
        default:
            cout << "Học lực không xác định" << endl;
            break;
    }

    return 0;
}
