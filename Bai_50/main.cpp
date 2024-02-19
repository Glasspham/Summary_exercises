#include <bits/stdc++.h>
using namespace std;
vector<int> ReadingFile(const string &ten_tap_tin) 
{
    ifstream file(ten_tap_tin);
    vector<int> result;
    int num;
    while (file >> num)
        result.push_back(num);
    return result;
}

vector<int> Sort_up_ascending(const vector<int> &dayso) 
{
    vector<int> sorted_dayso = dayso;
    sort(sorted_dayso.begin(), sorted_dayso.end());
    return sorted_dayso;
}

vector<int> Sort_descending(const vector<int> &dayso) 
{
    vector<int> sorted_dayso = dayso;
    sort(sorted_dayso.rbegin(), sorted_dayso.rend());
    return sorted_dayso;
}

vector<int> The_longest_row_of_poplars(const vector<int> &dayconduong) 
{
    int max_len = 0;
    int current_len = 0;
    int start_index = 0;
    int max_start_index = 0;
    for (int i = 0; i < dayconduong.size(); ++i) 
    {
        if (dayconduong[i] > 0) 
        {
            current_len++;
            if (current_len > max_len) 
            {
                max_len = current_len;
                max_start_index = start_index;
            }
        } 
        else 
        {
            current_len = 0;
            start_index = i + 1;
        }
    }
    return vector<int>(dayconduong.begin() + max_start_index, dayconduong.begin() + max_start_index + max_len);
}

int main() 
{
    vector<int> list = ReadingFile("E:\\Project Visual Studio Code\\Summary_exercises\\Bai_50\\dayso.txt");

    while (true) 
    {
        int lua_chon;
        cin >> lua_chon;
        if (lua_chon == 1) 
        {
            cout << "dayso\n";
            vector<int> dayso = Sort_up_ascending(list);
            for (const auto &num : dayso) 
                cout << num << '\n';           
        } 
        else if (lua_chon == 2) 
        {
            cout << "dayso\n";
            vector<int> dayso = Sort_descending(list);
            for (const auto &num : dayso) 
                cout << num << '\n';
        } 
        else if (lua_chon == 3) 
        {
            cout << "dayconduong\n";
            vector<int> dayconduong = The_longest_row_of_poplars(list);
            for (const auto &num : dayconduong) 
                cout << num << '\n';
        } 
        else if (lua_chon <= 0 || lua_chon >= 4) 
            break;
    }
    return 0;
}
