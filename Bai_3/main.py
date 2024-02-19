def tinh_phi_internet(A, B, C, D):
    phi_thue_bao = A
    gioi_han_luu_luong = B
    phi_qua_luu_luong = C
    luong_da_su_dung = D

    if luong_da_su_dung <= gioi_han_luu_luong:
        return phi_thue_bao
    else:
        phi_truy_cap = phi_thue_bao + (luong_da_su_dung - gioi_han_luu_luong) * phi_qua_luu_luong
        return phi_truy_cap

# Đọc dữ liệu từ file input
with open('E:\Language\Baitaptonghop\Bai_3\goicuoc.inp', 'r') as file_in:
    A, B, C, D = map(int, file_in.readline().split())

# Tính toán chi phí
phi = tinh_phi_internet(A, B, C, D)

# Ghi kết quả vào file output
with open('E:\Language\Baitaptonghop\Bai_3\goicuoc.out', 'w') as file_out:
    file_out.write(str(phi))
