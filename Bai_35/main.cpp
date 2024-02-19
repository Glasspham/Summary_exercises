#include<iostream>
#include<string>
#include<time.h>
#include<vector>
#include <algorithm>
using namespace std;

// Bài 1
#if 0
int main1()
{
    int n;
    cout << "Nhap do dai (m): ";
    cin >> n;
    while (n < 0)
    {
        cout << "Do dai khong hop le!" << endl;
        cout << "Hay nhap lai do dai moi: ";
        cin >> n;
    }

    int selection;
    cout << "1. Chuyen sang dm" << '\n' << "2. Chuyen sang cm" << '\n' << "3. Chuyen sang mm" << endl;
    cout << "Lua chon cua ban la: ";
    cin >> selection;

    while (selection < 1 || selection > 3)
    {
        cout << "Chuyen doi khong hop le!" << endl;
        cout << "Hay nhap lai lua chon khac: ";
        cin >> selection;
    }
    
    switch (selection)
    {
    case 1:
        cout << n << "m = " << n * 10 << "dm" << endl;
        break;
    case 2:
        cout << n << "m = " << n * 100 << "cm" << endl;
        break;
    case 3:
        cout << n << "m = " << n * 1000 << "mm" << endl;
        break;
    }
}
#endif


// Bài 2
#if 0
bool checkPass(string pw)
{
    bool result = true;
    string mk = "khanhvy1209";
    int size_mk = mk.length();
    int size = pw.length();

    if(size == size_mk)
    {
        for(int i = 0; i < size; i++)
            if(pw[i] != mk[i])
            {
                result = false;
                break;
            } 
    }
    else
        result = false;
        
    return  result;
}

int main()
{
    string omk = " ";
    cout << "Nhap mat khau vao day: " << endl;
    getline(cin, omk);

    if(checkPass(omk) == true)
        cout << "Ban da nhap dung mat khau!" << endl;
    else
        cout << "Ban da nhap sai mat khau" << endl;
    
    return 0;
}
#endif


// Bài 3
#if 0
int main()
{
    int a, b;
    cout << "Nhap 2 so nguyen duong a va b (cach nhau boi dau cach)" << endl;
    cin >> a >> b;
    while (a < 0 || b < 0 || a > b)
    {
        cout << "Nhap lai a va b voi (a < b; a, b > 0)" << endl;
        cin >> a >> b;
    }

    cout << "Nhung so chan giua so a va b: " << endl;
    for(int i = a + 1; i < b; i++)
        if(i % 2 == 0)
            cout << i << ' ';
}
#endif


// Bài 4
#if 0
int compare(int a, int b)
{
    if(a > b)
        return 1;
    else if(a == b)
        return 0;
    else
        return -1;
}

int main()
{
    int a,b;
    cout << "Nhap vao gia tri cho a va b(cach nhau boi dau cach): ";
    cin >> a >> b;
    if(compare(a,b) == 1)
        cout << "a > b" << endl;
    else if(compare(a,b) == 0)
        cout << "a = b" << endl;
    else
        cout << "a < b" << endl;
}
#endif


// Bài 5
#if 0
int main()
{
    int hour, minute, second;
    // Khai báo biến Time để lấy giá trị thời gian thực từ máy tính
	time_t Time = time(0);

    // Khởi tạo con trỏ Now lấy giá trị thời gian từ Time
    tm* Now = localtime(&Time);
    
    // Lấy giờ, phút, giây hiện tại từ hệ thống máy tính gán cho biến hour, minute, second
    hour = Now -> tm_hour; 
    minute = Now -> tm_min; 
    second = Now -> tm_sec; 

    cout << hour << ':' << minute << ':' << second << endl;
    if(hour >= 0 && hour <= 11)
        cout << "Good morning" << endl;
    if(hour >= 12 && hour <= 15)
        cout << "Good afternoon" << endl;
    if(hour >= 16 && hour <= 20)
        cout << "Good evening" << endl;
    if(hour >= 21 && hour <= 23)
        cout << "Good night" << endl;

    return 0;
}
#endif 


// Bài 6
#if 0
int main()
{
    // Ý 1
    int size_list;
    cout << "Nhap vao chieu dai danh sach: ";
    cin >> size_list;
    vector<int> list(size_list);
    cout << "Nhap vao mot danh sach: " << endl;
    for(int i = 0; i < size_list; i++)
        cin >> list[i];

    // Ý 2
    int sum(0);
    for(int i : list)
        sum += i;
    cout << "Tong tat ca gia tri trong danh sach: " << sum << endl;

    // Ý 3
    cout << "Danh sach dao nguoc vi tri so voi danh sach ban dau: " << endl;
    for(int i = size_list - 1; i >= 0; i--)
        cout << list[i] << ' ';
    cout << endl;

    // Ý 4
    vector<int> negative_list(size_list);
    for(int i = 0; i  < size_list; i++)
        negative_list[i] = (-1) * list[i];
    cout << "Danh sach so am nguoc so voi danh sach ban dau: " << endl;
    for(int i = 0; i < size_list; i++)
        cout << negative_list[i] << ' ';
    cout << endl;
}   
#endif


// Bài 7
#if 0
int UCLN(int m, int n)
{
    while (m != n)
    {
        if(m > n)
            m -= n;
        else
            n -= m;
    }
    /*
    Ta lấy 2 biến trừ nhau và gán lại vào biến đang dữ số lớn hơn và tiếp tục như thế đến ghi biến có giá trị = nhau
    */
   return m;
}

int main()
{
    int n,m;
    cout << "Nhap 2 so tu nhien bat ki(cach nhau boi dau cach): ";
    cin >> m >> n;
    cout << "UCLN(" << m << ',' << n << ") = " <<  UCLN(m,n);

    return 0;
}
#endif


// Bài 8
#if 0
int UCLN(int m, int n)
{
    while (m != n)
    {
        if(m > n)
            m -= n;
        else
            n -= m;
    }
    return m;
}

int BCNN(int m, int n)
{   
    /*
    Ta có UCLN(m,n) * BCNN(m,n) = m * n
    */
    return (m * n) / UCLN(m,n);
}

int main()
{
     int n,m;
    cout << "Nhap 2 so tu nhien bat ki(cach nhau boi dau cach): ";
    cin >> m >> n;
    cout << "BCNN(" << m << ',' << n << ") = " <<  BCNN(m,n);

    return 0;
}
#endif


// Bài 9
#if 0
void identical_elements_in_the_two_lists(vector<int>list1, vector<int>list2)
{
    vector<int> list3;

    for(int i = 0; i < list1.size(); i++)
        for(int j = 0; j < list2.size(); j++)
            if(list1[i] == list2[j])
            {
                list3.push_back(list1[i]);
                break;
            }  

    for(int i : list3)
        cout << i << ' ';
}

int main()
{
    vector<int>list1 = {1, 2, 4, 5, 8, 9, 10};
    vector<int>list2 = {5, 1, 2, 6, 5, 9, 11};
    identical_elements_in_the_two_lists(list1, list2);
    return 0;
}
#endif


// Bài 10
#if 0
void different_elements_in_the_two_lists(vector<int> list1, vector<int> list2) 
{
    vector<int> list3;

    for(int i : list1) 
        if(find(list2.begin(), list2.end(), i) == list2.end()) 
            list3.push_back(i);
    
    for(int i : list2) 
        if(find(list1.begin(), list1.end(), i) == list1.end()) 
            list3.push_back(i);

    sort(list3.begin(), list3.end());
    list3.erase(unique(list3.begin(), list3.end()), list3.end());

    for (int i : list3)
        cout << i << ' ';
}

bool Check_if_that_number_is_in_the_list(const vector<int> list, int num)
{
    for(int i = 0; i < list.size(); i++)
        if(list[i] == num)
            return false;
        return true;
}

int main() 
{
    vector<int> list1 = {1, 2, 4, 5, 8, 5, 9, 10};
    vector<int> list2 = {5, 1, 2, 6, 9, 11};
    vector<int> list3;
    #if 0 // Cách giải dùng các chức năng của thư viện
    different_elements_in_the_two_lists(list1, list2);
    #endif

    #if 0 // Sử dụng for
    for(int i = 0; i < list1.size(); i++)
    {
        bool f = true;
        for(int j = 0; j < list2.size(); j++)
            if(list1[i] == list2[j])
            {
                f = false;
                break;
            }
        if(f)
            list3.push_back(list1[i]);
    }

    for(int i = 0; i < list2.size(); i++)
    {
        bool f = true;
        for(int j = 0; j < list1.size(); j++)
            if(list2[i] == list1[j])
            {
                f = false;
                break;
            }
        if(f)
            list3.push_back(list2[i]);
    }

    for(int i : list3)
        cout << i << ' ';

    return 0;
    #endif

    #if 0  // Sử dụng for + hàm
    // Lấy các phần tử khác nhau trong danh sách 1 trước, rồi tới danh sách 2
    for(int i = 0; i < list1.size(); i++)
        if(Check_if_that_number_is_in_the_list(list2,list1[i]))
            list3.push_back(list1[i]);
    for(int i = 0; i < list2.size(); i++)
        if(Check_if_that_number_is_in_the_list(list1,list2[i]))
            list3.push_back(list2[i]);
    
    for(int i : list3)
        cout << i << ' ';

    return 0;
    #endif
}
#endif
