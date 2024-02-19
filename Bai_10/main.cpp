#include<bits/stdc++.h>
using namespace std;

vector<vector<int>> input_matrix(int STT)
{
    int n = 3 + STT % 3;
    vector<vector<int>> matrix;
    cout << "Nhap ma tran " << n << "x" << n << ":\n";
    for (int i = 0; i < n; i++)
    {
        vector<int> row;
        for (int j = 0; j < n; j++)
        {
            int num; cin >> num;
            row.push_back(num);
        }
        matrix.push_back(row);
    }
    return matrix;    
}

// Hàm kiểm tra ma trận có phải tam giác trên không
bool is_upper_triangular(vector<vector<int>>& matrix)
{
    int n = matrix.size();
    for(int i = 1; i < n; i++)
        for(int j = 0; j < i; j++)
            if(matrix[i][j] != 0)
                return false;
    return true;
}

// Hàm sắp xếp ma trận và chèn số x
vector<vector<int>> sort_and_insert(vector<vector<int>>& matrix, int x) 
{
    vector<int> flattened_matrix;
    for (const auto& row : matrix) 
        flattened_matrix.insert(flattened_matrix.end(), row.begin(), row.end());
    
    flattened_matrix.push_back(x);
    sort(flattened_matrix.begin(), flattened_matrix.end(), greater<int>());

    int n = sqrt(flattened_matrix.size());
    vector<vector<int>> sorted_matrix(n, vector<int>(n));
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            sorted_matrix[i][j] = flattened_matrix[i * n + j];
        }
    }
    return sorted_matrix;
}

int main()
{
    int STT;
    cout << "Nhap so thu tu: ";
    cin >> STT;

    vector<vector<int>> inputted_matrix = input_matrix(STT);
    cout << "Ma tran vua nhap la:\n";
    for (const auto& row : inputted_matrix) 
    {
        for (int num : row)
            cout << num << " ";
        cout << "\n";
    }


    bool is_upper = is_upper_triangular(inputted_matrix);
    if (is_upper) 
        cout << "Ma tran vua nhap la ma tran tam giac tren.\n";
    else 
        cout << "Ma tran vua nhap không phai la ma tran tam giac tren.\n";
    

    int x;
    cout << "Nhap so x bat ky: ";
    cin >> x;
    vector<vector<int>> result_matrix = sort_and_insert(inputted_matrix, x);
    cout << "Ma tran sau khi chen so x va sap xep giam dan:\n";
    for (const auto& row : result_matrix) {
        for (int num : row) {
            cout << num << " ";
        }
        cout << "\n";
    }

    return 0;
}