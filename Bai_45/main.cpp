#include<iostream>
#include<fstream>
#include<string>
#include<string.h>
#include<filesystem>

using namespace std;

struct sv {
	string ten;
	string ngay_sinh;
	string gioi_tinh;
	float diem_cac_mon;

};

sv inputsv() {
	sv a;
	cout << "Nhap ho va ten: ";
	getline(cin, a.ten);
	cout << "Nhap ngay sinh: ";
	getline(cin, a.ngay_sinh);
	cout << "Nhap gioi tinh: ";
	getline(cin, a.gioi_tinh);
	cout << "Nhap diem cac mon: ";
	cin >> a.diem_cac_mon;
	cin.ignore();

	return a;
}
void ghi_sv(sv&a) {
	ofstream input("Quan_Ly_Sinh_Vien.txt",ios::app);
	input << a.ten + "," + a.ngay_sinh + "," +a.gioi_tinh +","+ to_string(a.diem_cac_mon) + "\n";
	cout << "Thong tin sinh vien da duoc ghi vao File !" << endl;
	input.close();
}
void xoaSinhVien(string tensv) {
	std::ifstream file("Quan_Ly_Sinh_Vien.txt");
	if (!file.is_open()) {
		std::cerr << "Khong the mo file de xoa.\n";
		return;
	}

	std::ofstream tempFile("temp.txt");
	if (!tempFile.is_open()) {
		std::cerr << "Khong the mo file tam de ghi.\n";
		file.close();
		return;
	}

	std::string line;
	bool found = false;

	while (std::getline(file, line)) {
		std::size_t pos = line.find(',');
		std::string tenSV = line.substr(0, pos);

		if (tenSV != tensv) {
			tempFile << line << "\n";
		} 
		else {
			found = true;  // Đánh dấu là đã tìm thấy và xóa
		}
	}

	file.close();
	tempFile.close();

	if (found) {
		remove("Quan_Ly_Sinh_Vien.txt");
		rename("temp.txt", "Quan_Ly_Sinh_Vien.txt");
		cout << "Thong tin sinh vien da duoc xoa !" << endl;
	}
	else {
		std::remove("Quan_Ly_Sinh_Vien.txt");
		std::cout << "Khong tim thay sinh vien co ten " << tensv << ".\n";
	}
	
}
void xemdanhsach() {
	ifstream xem("Quan_Ly_Sinh_Vien.txt");
	string l;
	while (getline(xem, l)) {
		cout << l << endl;
	}
	xem.close();


}
void suaThongTinSinhVien(string tenSinhVien) {
	ifstream fileIn("Quan_Ly_Sinh_Vien.txt");
	ofstream fileOut("temp.txt");

	if (!fileIn.is_open() || !fileOut.is_open()) {
		cerr << "Khong the mo file de sua thong tin.\n";
		return;
	}

	sv sinhvien;
	bool found = false;

	while (getline(fileIn, sinhvien.ten, ',')) {
		// Đọc các trường thông tin khác của SinhVien từ file
		getline(fileIn, sinhvien.ngay_sinh, ',');
		getline(fileIn, sinhvien.gioi_tinh, ',');
		fileIn >> sinhvien.diem_cac_mon;
		fileIn.ignore();

		if (sinhvien.ten == tenSinhVien) {
			found = true;
			sv newSv = inputsv();
			fileOut << newSv.ten + "," + newSv.ngay_sinh + "," + newSv.gioi_tinh + "," + to_string(newSv.diem_cac_mon) + "\n";
		}
		else {
			fileOut << sinhvien.ten + "," + sinhvien.ngay_sinh + "," + sinhvien.gioi_tinh + "," + to_string(sinhvien.diem_cac_mon) + "\n";
		}
	}

	fileIn.close();
	fileOut.close();

	if (found) {
		remove("Quan_Ly_Sinh_Vien.txt");
		rename("temp.txt", "Quan_Ly_Sinh_Vien.txt");
		cout << "Da sua thong tin sinh vien.\n";
	}
	else {
		cout << "Khong tim thay sinh vien co ten " << tenSinhVien << ".\n";
		remove("temp.txt");
	}
}


int main() {
	cout << "=====================================Quan Ly Sinh Vien=====================================" << endl << endl;
	cout << "1.Nhap " << endl << "2.Xem" << endl << "3.Xoa" << endl << "4.Sua" << endl << "0.Ket thuc !" << endl;
	cout << "Nhap lua chon: ";
	int n;
	cin >> n;
	sv sinhvien;
	switch (n) {
	a1:
	case 1: {
		cin.ignore();
		cout << endl;
		cout << "Nhap Thong Tin Sinh Vien" <<endl<< "-----------------------" << endl;
		sv sinhvien = inputsv();
		ghi_sv(sinhvien);
		cout << endl;
		cout << "===================" << endl;
		r1:
		cout << "Nhap hanh dong tiep theo: ";
		int l;
		cin >> l;
		if (l == 1) {
			goto a1;
		}
		else if (l == 0) {
			goto a0;
		}
		else if (l == 2) {
			goto a2;
		}
		else if (l == 3) {
			goto a3;
		}
		else if (l == 4) {
			goto a4;
		}
		else {
			cout << "Nhap lai lua chon !" << endl;
			goto r1;
		}
		break;
	}
	a2:
	case 2:
		cout << "Danh sach sinh vien: " << endl;
		xemdanhsach();
		cout << endl;
		cout << "=======================" << endl;
	r2:
		cout << "===================" << endl;
		cout << "Nhap hanh dong tiep theo: ";
		int l;
		cin >> l;
		if (l == 1) {
			goto a1;
		}
		else if (l == 0) {
			goto a0;
		}
		else if (l == 2) {
			goto a2;
		}
		else if (l == 3) {
			goto a3;
		}
		else if (l == 4) {
			goto a4;
		}
		else {
			cout << "Nhap lai lua chon !" << endl;
			goto r2;
		}
		break;
	a3:
	case 3:
	{
		string a;
		cout << "Nhap ten sinh vien can xoa: ";
		cin.ignore();
		getline(cin, a);
		xoaSinhVien(a);
	r3:
		cout << "===================" << endl;
		cout << "Nhap hanh dong tiep theo: ";
		int l;
		cin >> l;
		if (l == 1) {
			goto a1;
		}
		else if (l == 0) {
			goto a0;
		}
		else if (l == 2) {
			goto a2;
		}
		else if (l == 3) {
			goto a3;
		}
		else if (l== 4) {
			goto a4;
		}
		else {
			cout << "Nhap lai lua chon !" << endl;
			goto r3;
		}
		break;
	}
		a4:
	case 4:
	{
		string a;
		cout << "Nhap ten sinh vien can sua: ";
		cin.ignore();
		getline(cin, a);
		suaThongTinSinhVien(a);
	r4:
		cout << "===================" << endl;
		cout << "Nhap hanh dong tiep theo: ";
		int l;
		cin >> l;
		if (l == 1) {
			goto a1;
		}
		else if (l == 0) {
			goto a0;
		}
		else if (l == 2) {
			goto a2;
		}
		else if (l == 3) {
			goto a3;
		}
		else if (l == 4) {
			goto a4;
		}
		else {
			cout << "Nhap lai lua chon !" << endl;
			goto r4;
		}
		break;
	}
	a0:
	case 0:
		cout << "Ket Thuc !" << endl;
		break;
	default:
		cout << "Xin moi nhap lai !" << endl;
	}
	cout << "===========================" << endl;
	cout << "DU LIEU DUOC GHI VAO FILE Quan_Ly_Sinh_Vien.txt !!!" << endl;

	return 0;
}