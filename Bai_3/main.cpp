#include <iostream>
#include <fstream>

using namespace std;

int tinh_phi_internet(int A, int B, int C, int D)
{
    int phi_thue_bao = A;
    int gioi_han_luu_luong = B;
    int phi_qua_luu_luong = C;
    int luong_da_su_dung = D;

    if (luong_da_su_dung <= gioi_han_luu_luong)
    {
        return phi_thue_bao;
    }
    else
    {
        int phi_truy_cap = phi_thue_bao + (luong_da_su_dung - gioi_han_luu_luong) * phi_qua_luu_luong;
        return phi_truy_cap;
    }
}

int main()
{
    ifstream file_in("goicuoc.inp");
    ofstream file_out("goicuoc.out");

    int A, B, C, D;
    file_in >> A >> B >> C >> D;

    // Tính toán chi phí
    int phi = tinh_phi_internet(A, B, C, D);

    // Ghi kết quả vào file output
    file_out << phi;

    file_in.close();
    file_out.close();

    return 0;
}
