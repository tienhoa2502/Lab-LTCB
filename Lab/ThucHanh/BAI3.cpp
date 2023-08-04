#include <iostream>
#include <cmath>
#include <math.h>

using namespace std;


// ------- Tính tiền phòng --------------------
long tinhTienPhong(int &ngay, char loaiPhong)
{
    long tongTienPhong, giamGia;
    const double giaA = 250000;
    const double giaB = 200000;
    const double giaC = 150000;

    if (loaiPhong == 'A')
    {
        if (ngay > 12)
        {
            tongTienPhong = giaA * ngay;
            giamGia = tongTienPhong * 0.1;
            tongTienPhong = tongTienPhong - giamGia;
        }
        else
        {
            tongTienPhong = giaA * ngay;
        }
    }
    if (loaiPhong == 'B')
    {
        if (ngay > 12)
        {
            tongTienPhong = giaB * ngay;
            giamGia = tongTienPhong * 0.08;
            tongTienPhong = tongTienPhong - giamGia;
        }
        else
        {
            tongTienPhong = giaB * ngay;
        }
    }
    if (loaiPhong == 'C')
    {
        if (ngay > 12)
        {
            tongTienPhong = giaC * ngay;
            giamGia = tongTienPhong * 0.08;
            tongTienPhong = tongTienPhong - giamGia;
        }
        else
        {
            tongTienPhong = giaC * ngay;
        }
    }
    return tongTienPhong;
}
// =======================================



// ------- Kiểm tra năm nhuận--------------
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
} //=======================================




int main() {

    // -- CƠ BẢN -- //
    int choice, n;
    double sum = 0.0;



    
    do {
        cout << "Lựa chọn yêu cầu" << endl;
        cout << "1. Kiểm tra số nguyên thỏa mãn 'Tích 2 số bằng 2 lần tổng 2 số ( 10 ~ 99 )'" << endl;
        cout << "2. Các số nguyên tố nhỏ hơn N" << endl;
        cout << "3. Xuất ra bảng mã ASCII" << endl;
        cout << "4. Số đảo ngược" << endl;
        cout << "5. Tổng các chữ số của số nguyên N" << endl;
        cout << "6. Tính cước truy cập" << endl;
        cout << "7. Tính tiền thuê phòng" << endl;
        cout << "8. Kiểm tra ngày/tháng/năm" << endl;
        cout << "9. Tính tiền Taxi" << endl;
        cout << "10. Xếp loại học sinh" << endl;
        cout << "0. Thoát." << endl;
        cout << "Chọn yêu cầu: ";
        cin >> choice;

        switch (choice) {
            case 1:
            {
                int number;
                cout << "Nhập N từ 10 ~ 99: ";
                cin >> number;

                if (number >= 10 && number <= 99)
                {
                    int soDau = number / 10; 
                    int soCuoi = number % 10;

                    if (soDau * soCuoi == 2 * (soDau + soCuoi))
                    {
                        cout << "Số thỏa mãn điều kiện!" << endl;
                    }
                    else
                    {
                        cout << "Số không thỏa mãn điều kiện!" << endl;
                    }
                }
                else
                {
                    cout << "Nhập sai!" << endl;
                }                            
                break;
            }
            case 2:
            {
                cout << "Nhập vào số nguyên N: ";
                cin >> n;
                if (n < 2) {
                cout << "Không có số nguyên tố nào nhỏ hơn " << n << endl;
                } else {
                    cout << "Các số nguyên tố nhỏ hơn " << n << " là: ";
                    for (int i = 2; i < n; i++) {
                        bool soNguyenTo = true;
                        for (int j = 2; j * j <= i; j++) {
                            if (i % j == 0) {
                                soNguyenTo = false;
                                break;
                            }
                        }
                        if (soNguyenTo) {
                        cout << i << " ";
                        }
                    }       
                    cout << endl;
                }
                break;
            }
            case 3:
            {
                // int pageSize = 10; // Số lượng ký tự trên mỗi trang
                // int currentPage = 1;
                // int totalPages = 8; // Tổng số trang

                // while (currentPage <= totalPages)
                // {
                //     system("cls"); // Xóa màn hình (cho Windows)

                //     cout << "Bang ma ASCII - Trang" << currentPage << endl;
                //     cout << "-------------------------" << endl;
                //     cout << "Ky tu   Ma" << endl;
                //     int start = (currentPage - 1) * pageSize;
                //     int end = currentPage * pageSize - 1;
                //     printASCII(start, end);

                //     cout << endl;
                //     cout << "Nhan Enter de xem trang tiep theo...";
                //     cin.ignore(); // Đợi người dùng nhấn Enter để chuyển trang
                //     currentPage++;
                // }
                break;
            }
            case 4:
            {
                int n;
                int soDaoNguoc = 0;
              
                cout << "Nhập số nguyên N: ";
                cin >> n;

                while (n > 0)
                {
                    int digit = n % 10;
                    soDaoNguoc = soDaoNguoc * 10 + digit;
                    n /= 10;
                }

                cout << "So dao nguoc  " << n << " la: " << soDaoNguoc << endl;
                break;
            }
            case 5:
            {
                cout << "Nhập vào số nguyên N: ";
                cin >> n;
                while (n != 0) {
                int digit = n % 10;
                sum += digit;
                n /= 10;
                }
                cout << "Tổng các chữ số của n là: " << sum << endl;
                break;
            }
            case 6:
            {
                int giatu0_7, giatu7_17, giatu17_24, thoigian;
                float tongTien;
                float giam;
                giatu0_7 = 18000;
                giatu7_17 = 24000;
                giatu17_24 = 21000;
                tongTien = 0;
                int gioBd, gioKt;
                cout << "Nhap vao gio bat dau: ";
                cin >> gioBd;
                cout << "Nhap vao gio ke thuc: ";
                cin >> gioKt;
                thoigian = gioKt - gioBd;
                cout << " Thoi gian ban truy cap la : " << thoigian << endl;
                if (gioBd >= 7 && gioKt <= 17 && gioBd < gioKt)
                {
                    if (thoigian > 6)
                    {
                        tongTien = giatu7_17 * thoigian;
                        giam = tongTien * 0.1;
                        tongTien = tongTien - giam;
                    }
                    else
                    {
                        tongTien = giatu7_17 * thoigian;
                    }
                }
                if (gioBd >= 17 && gioKt <= 24)
                {
                    if (thoigian > 4)
                    {
                        tongTien = giatu17_24 * thoigian;
                        giam = tongTien * 0.12;
                        tongTien = tongTien - giam;
                    }
                    else
                    {
                        tongTien = giatu17_24 * thoigian;
                    }
                }
                if (gioBd >= 0 && gioKt <= 7)
                {
                    if (thoigian > 7)
                    {
                        tongTien = giatu0_7 * thoigian;
                        giam = tongTien * 0.15;
                        tongTien = tongTien - giam;
                    }
                    else
                    {
                        tongTien = giatu0_7 * thoigian;
                    }
                }
                cout << "Tong tien truy cap Internet : " << tongTien;
                break;
            }
            case 7:
            {                  
                int ngaythue;
                char loaiphong;
                long tongtienphong;
                cout << "Nhap ngay thue" << endl;
                cin >> ngaythue;
                cout << "chon loai phong A B C" << endl;
                cin >> loaiphong;
                tongtienphong = tinhTienPhong(ngaythue, loaiphong);
                cout << "Tong tien phong:" << tongtienphong << endl;
                break;
            }
            case 8:
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
            case 9:
            {
                const double gia1km = 15000; //Km đầu tiên
                const double gia2_5km = 13500; //Km thứ 2 đến 5
                const double giaTren6km = 11000; //Km thứ 6
                const double giamGiaTren120km = 0.1; //Trên 120Km

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
                break;
            }
            case 10:
            {
                double diemTB, diemT, diemL, diemH;
                cout << "Nhâp điểm Toán: ";
                cin >> diemT;
                cout << "Nhâp điểm Lý: ";
                cin >> diemL;
                cout << "Nhâp điểm Hóa: ";
                cin >> diemH;
                diemTB = (diemT+diemL+diemH)/3;
                cout << "Điểm TB của bạn là: " << diemTB << endl;

                int hocLuc;
                
                if (diemTB >= 9.0) {
                    hocLuc = 1; 
                } else if (diemTB >= 8.0) {
                    hocLuc = 2; 
                } else if (diemTB >= 6.5) {
                    hocLuc = 3; 
                } else if (diemTB > 5.0) {
                    hocLuc = 4; 
                } else if(diemTB <= 3.0){
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
                        cout << "Học lực trung bình" << endl;
                        break;
                    case 4:
                        cout << "Học lực yếu" << endl;
                        break;
                    case 5:
                        cout << "Học lực kém" << endl;
                        break;
                    default:
                        cout << "Học lực yếu" << endl;
                        break;
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
