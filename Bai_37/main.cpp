#include<iostream>
#include<time.h>
#include<vector>
#include<cmath>

using namespace std;

void NhapMang(vector<int> &array, int n)
{
    srand(time(NULL));
    for(int i = 0; i < n; i++)
    {
        int value = rand() % 100;
        array.push_back(value);
    }
}

void XuatMang(vector<int> array)
{
    for(int i : array)
        cout << i << ' ';
}

int TongSoLe(vector<int> array)
{
    int sum(0);
    for(int i : array)
        if(i % 2 != 0)
            sum += i;
    return sum;
}

bool KTSCP(int a)
{
    int i = sqrt(a);
    if(i * i == a)
        return true;
    return false;
}

void HoanVi(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
}

int main()
{
    int n;
    cout << "a.Nhap chieu dai mang: ";
    cin >> n;
    vector<int> array;

    NhapMang(array,n);
    cout << "-In ra mang ban dau: " << endl;
    XuatMang(array);
    cout << endl;
    cout << "b.Tong cac so le trong day so la: " << TongSoLe(array) << endl;

    bool f = true;
    for(int i = 0; i < n; i++)
        if(KTSCP(array[i]))
        {
            cout << "c.So chinh phuong dau tien trong day so la: " << array[i] << endl;
            f = false;
            break;
        }
    if(f)
        cout << "c.Khong co so chinh phuong trong day so!" << endl;

    vector<int> array_sort = array;
    cout << "d.In ra day so da duoc sap theo chieu giam dan:" << endl;
    for(int i = 0; i < n - 1; i++)
        for(int j = i + 1; j < n; j++)
            if(array_sort[i] < array_sort[j])
                HoanVi(array_sort[i],array_sort[j]);
    XuatMang(array_sort);
    cout << endl;

    vector<int> index_value_min;
    int min = array[0];
    for(int i = 0; i < n; i++)
        if(array[i] < min)
            min = array[i];
    
    for(int i = 0; i < n; i++)
        if(array[i] == min)
            index_value_min.push_back(i);
            
    cout << "e.Gia tri nho nhat trong day so ban dau la: " << min << endl;
    cout << "-Co " << index_value_min.size() << " vi tri co gia tri nho nhat!" << endl;
    cout << "-Cac vi tri tuong ung trong day so ban dau la: ";
    XuatMang(index_value_min);
    return 0;
}
