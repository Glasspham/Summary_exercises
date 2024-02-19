#include<bits/stdc++.h>
using namespace std;

void input(vector<int>& list)
{
    int n; 
    cout << "Nhap so phan tu cua day trong (0 < n < 100): ";
    cin >> n;
    while (0 >= n && n >= 100)
    {
        cout << "Nhap lai so phan tu cua day trong (0 < n < 100): ";
        cin >> n;
    }
    cout << "Nhap cac phan tu trong day\n";
    for(int i = 0; i < n; i++)
    {
        int num; cin >> num;
        list.push_back(num);
    }
}   

void ouput(vector<int> list)
{   
    for(int x : list)
        cout << x << ' ';
    cout << endl;
}

bool cmp(int a, int b)
{
    #if 0 // Method 1
    if (a % 3 == 0 && b % 3 == 0) return a < b; 
    if (a % 3 != 0 && b % 3 != 0) return a < b;
    if (a % 3 == 0 && b % 3 != 0) return a > b;
    if (a % 3 != 0 && b % 3 == 0) return a < b;
    #endif

    #if 1 // Method 2
    return a % 3 == 0 && b % 3 != 0;
    #endif
}

void sort_list(vector<int>& list)
{
    #if 1 // Using available sort
    sort(list.begin(),list.end(),[](int a, int b){return a % 3 == 0 && b % 3 != 0;});
    ouput(list);
    #endif
    
    #if 0 // Using available sort and function cmp
    sort(list.begin(),list.end(),cmp);
    ouput(list);
    #endif

    #if 0 // Not using using available sort and function cmp
    vector<int> list_divisible_by_3;
    vector<int> list_not_divisible_by_3;

    for(int x : list)
        if(x % 3 == 0)
            list_divisible_by_3.push_back(x);
    sort(list_divisible_by_3.begin(),list_divisible_by_3.end());

    for(int x : list)
        if(x % 3 != 0)
            list_not_divisible_by_3.push_back(x);
    sort(list_not_divisible_by_3.begin(),list_not_divisible_by_3.end());
    
    for(int x : list_divisible_by_3)
        list.push_back(x);

    for(int x : list_not_divisible_by_3)
        list.push_back(x);

    ouput(list);
    #endif
}

void add_value(vector<int>& list)
{
    int n = list.size();
    int k, c;
    cout << "Nhap vi tri k de chen so c (0<k<" << n << "): ";
    cin >> k;
    while (k <= 0 || k >= n) 
    {
        cout << "Nhap lai vi tri k de chen so c (0<k<" << n << "): ";
        cin >> k;
    }
    
    cout << "Nhap so c de chen vao day: ";
    cin >> c;

    list.insert(list.begin() + k, c);
    ouput(list);
}

void find_value(vector<int>& list)
{
    int c;
    cout << "Nhap mot so muon tim trong mang: "; cin >> c;
    auto it = find(list.begin(), list.end(),c);
    if(it == list.end())
        cout << c << " khong co trong day! \n";
    else 
    {
        cout << c << " co trong day! \n";
        list.erase(it);
        ouput(list);
    }
}

int main()
{
    vector<int> list;
    input(list);
    ouput(list);
    sort_list(list);
    add_value(list);
    find_value(list);
    return 0;
}
