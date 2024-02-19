#include <iostream>
#include <vector>
#include <time.h>
#include <algorithm>
using namespace std;

#if 0 // Cách 1
void NhapMang(int arr[], int N)
{
    srand(time(NULL));
    for (int i = 0; i < N; i++)
        arr[i] = rand() % 100 - rand() % 100;
}

void XuatMang(int arr[], int N)
{
    for(int i = 0; i < N; i++)
        cout << arr[i] << ' ';
}

void HoaVi(int& a, int& b)
{
    int temp = a;
    a = b;
    b = temp;
}

void Function_sort(int arr[], int N)
{
    // Sắp xếp dãy theo chiều tăng dần
    for(int i = 0; i < N - 1; i++)
        for(int j = i + 1; j < N; j++)
            if(arr[i] > arr[j])
                HoaVi(arr[i], arr[j]);
                
    // Sắp xếp các số âm theo chiều giảm dần            
    for(int i = 0; i < N - 1; i++)
        for(int j = i + 1; j < N; j++)
            if(arr[i] < arr[j] && arr[i] < 0 && arr[j] < 0)
                HoaVi(arr[i], arr[j]);
}
int main() {
    int N;
    cout << "Nhap so phan tu: ";
    cin >> N;

    int arr[N];
    NhapMang(arr, N);
    
    cout << "Day so ban dau: " << endl;    
    XuatMang(arr, N);
    cout << endl;  
    
    cout << "Day da duoc sap xep theo de: " << endl;
    Function_sort(arr, N);
    XuatMang(arr,N);
    return 0;
}
#endif


#if 0 // Cách 2
int main() {
    int N;
    cout << "Nhap so phan tu: ";
    cin >> N;

    vector<int> arr(N);
    srand(time(NULL));
    
    for (int i = 0; i < N; ++i)
        arr[i] = rand() % 100 - rand() % 100;

    vector<int> negative, positive;

    // Phân loại số âm và số dương
    for (int i = 0; i < N; ++i) {
        if (arr[i] < 0)
            negative.push_back(arr[i]);
        else
            positive.push_back(arr[i]);
    }

    // Sắp xếp số âm giảm dần
    sort(negative.rbegin(), negative.rend());

    // Sắp xếp số dương tăng dần
    sort(positive.begin(), positive.end());

    cout << "Day sau khi sap xep: ";
    for (int i = 0; i < negative.size(); ++i) 
    {
        cout << negative[i] << " ";
    }
    for (int i = 0; i < positive.size(); ++i) 
    {
        cout << positive[i] << " ";
    }
    cout << endl;

    return 0;
}
#endif


#if 0 // Cách 3
void nhapDaySo(std::vector<int>& arr) {
    int n = arr.size();
    std::cout << "Nhap cac phan tu cua day so:\n";
    for (int i = 0; i < n; ++i) {
        std::cin >> arr[i];
    }
}

void inDaySo(const std::vector<int>& arr) {
    std::cout << "Day so sau khi sap xep la: ";
    for (const int& num : arr) {
        std::cout << num << " ";
    }
    std::cout << "\n";
}

void sapXepAmDuong(std::vector<int>& arr) {
    std::sort(arr.begin(), arr.end(), [](int a, int b) {
        return (a < 0 && b < 0) ? a > b : (a >= 0 && b >= 0) ? a < b : (a < 0);
        // Nếu a, b < 0 thì a > b
        // Nếu a, b >= 0  a < b
        // Nếu a < 0 và b >= 0 thì a < b. Nên truy vấn cuối có thể dùng (a < 0 && b >= 0) để dễ hiểu 
    });
}

int main() {
    int n;
    std::cout << "Nhap so phan tu cua day so: ";
    std::cin >> n;
    std::vector<int> array(n);
    nhapDaySo(array);
    sapXepAmDuong(array);
    inDaySo(array);
    return 0;
}
#endif
