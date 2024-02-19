#include<iostream>
#include <unordered_map>
#define Row 100
#define Col 100
using namespace std;

void NhapMatrix(int a[Row][Col], int n, int m)
{
    cout << "Nhap gia tri cho tung vi tri trong ma tran: " << endl;
    for(int i = 0; i < n; i++)
        for(int j = 0; j < m; j++)
        {
            cout << "a[" << i << "][" << j << "] = ";
            cin >> a[i][j];
        }
}

void XuatMatrix(int a[Row][Col], int n, int m)
{
    cout << "Ma tran ban da nhap: " << endl;
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < m; j++)
            cout << a[i][j] << ' ';
        cout << endl;
    }
        
}           

void Find_3_Max(int a[Row][Col], int n, int m)
{
    int value_max1 = a[0][0];
    for(int i = 0; i < n; i++)
        for(int j = 0; j < m; j++)
            if(a[i][j] > value_max1)
                value_max1 = a[i][j];

    int value_max2 = a[0][0];
    for(int i = 0; i < n; i++)
        for(int j = 0; j < m; j++)
            if(a[i][j] > value_max2 && a[i][j] != value_max1)
                value_max2 = a[i][j];

    int value_max3 = a[0][0];
    for(int i = 0; i < n; i++)
        for(int j = 0; j < m; j++)
            if(a[i][j] > value_max3 && a[i][j] != value_max1 && a[i][j] != value_max2)
                value_max3 = a[i][j];

    cout << "Gia tri lon nhat: " << value_max1 << endl;
    cout << "Gia tri lon hai: " << value_max2 << endl;
    cout << "Gia tri lon ba: " << value_max3 << endl;
}

void Find_3_Min(int a[Row][Col], int n, int m)
{
    int value_min1 = a[n - 1][m - 1];
    for(int i = 0; i < n; i++)
        for(int j = 0; j < m; j++)
            if(a[i][j] < value_min1)
                value_min1 = a[i][j];

    int value_min2 = a[n - 1][m - 1];
    for(int i = 0; i < n; i++)
        for(int j = 0; j < m; j++)
            if(a[i][j] < value_min2 && a[i][j] != value_min1)
                value_min2 = a[i][j];

    int value_min3 = a[n - 1][m - 1];
    for(int i = 0; i < n; i++)
        for(int j = 0; j < m; j++)
            if(a[i][j] < value_min3 && a[i][j] != value_min1 && a[i][j] != value_min2)
                value_min3 = a[i][j];

    cout << "Gia tri nho nhat: " << value_min1 << endl;
    cout << "Gia tri nho hai: " << value_min2 << endl;
    cout << "Gia tri nho ba: " << value_min3 << endl;
}

void findMostFrequent(int a[Row][Col], int n, int m)
{
    int flattenedMatrix[Row * Col];
    int index(0);
    // Biến matrix ban đầu về 1 mảng hoặc gọi là 1 chuỗi (1 hàng)
    for(int i = 0; i < n; i++)
        for(int j = 0; j < m; j++)
                flattenedMatrix[index++] = a[i][j];

    // Tạo một unordered_map để đếm tần suất xuất hiện của mỗi số
    unordered_map<int,int> frequencyMap;
    for (int i = 0; i < index; ++i) 
        frequencyMap[flattenedMatrix[i]]++;

    int mostFrequentNum = 0;
    int maxFrequency = 0;

    for(const auto& entry : frequencyMap) 
        if(entry.second > maxFrequency) 
        {
            mostFrequentNum = entry.first;
            maxFrequency = entry.second;
        }

    cout << "So xuat hien nhieu nhat la " << mostFrequentNum << " voi tan suat " << maxFrequency << endl;
}

void Sum_number_divisible_two(int a[Row][Col], int n, int m)
{
    int sum(0);
    for(int i = 0; i < n; i++)
        for(int j = 0; j < m; j++)
            if(a[i][j] % 2 == 0)
                sum += a[i][j];
    cout << "Tong cua cac so chia het cho 2: " << sum << endl;
}       

void Accumulation_number_divisible_two(int a[Row][Col], int n, int m)
{
    int accumulation(1);
    for(int i = 0; i < n; i++)
        for(int j = 0; j < m; j++)
            if(a[i][j] % 2 == 0)
                accumulation *= a[i][j];
    cout << "Tong cua cac so chia het cho 2: " << accumulation << endl;
}

bool KTSNT(int a)
{
    if(a <= 1)
        return false;
    for(int i = 2; i < a; i++)
        if(a % i == 0)
            return false;
        return true;
}

void SNT(int a[Row][Col], int n, int m)
{
    cout << "Cac so nguyen to co trong ma tran: ";
    for(int i = 0; i < n; i++)
        for(int j = 0; j < m; j++)
            if(KTSNT(a[i][j]))
                cout << a[i][j] << ' ';
    cout << endl;             
}

int main()
{
    int n,m;
    int a[Row][Col];
    
    cout << "Nhap so hang va cot (cach nhau boi dau cach): ";
    cin >> n >> m;
    
    NhapMatrix(a,n,m);
    XuatMatrix(a,n,m);
    Find_3_Max(a,n,m);
    Find_3_Min(a,n,m);
    findMostFrequent(a,n,m);
    Sum_number_divisible_two(a,n,m);
    Accumulation_number_divisible_two(a,n,m);
    SNT(a,n,m);
}