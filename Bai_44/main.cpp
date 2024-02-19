#include<iostream>
#include<fstream>
#include<vector>
#include<tuple>
using namespace std;

int main()
{
    // Bài 1
    #if 0
    ofstream ofile("E:\\Project Visual Studio Code\\Summary_exercises\\Bai_44\\Bai1.txt");
    for(int i = 1; i <= 100; i++)
        ofile << i << ' ';
    #endif

    // Bài 2
#if 0
        #if 0 // Câu a
        ifstream ifile("E:\\Project Visual Studio Code\\Summary_exercises\\Bai_44\\1.txt");
        vector<int> arr;
        int num;
        while (ifile >> num)
            arr.push_back(num);
        int n = arr.size();
        for(int i = 0; i < n - 1; i++)
            for(int j = i + 1; j < n; j++)
                if(arr[i] > arr[j])
                {
                    int temp = arr[i];
                    arr[i] = arr[j];
                    arr[j] = temp;
                }
        ofstream ofile("E:\\Project Visual Studio Code\\Summary_exercises\\Bai_44\\2.txt");
        for(int i : arr)
            ofile << i << ' ';
        #endif

        #if 0 // Câu b
        remove("1.txt");
        rename("2.txt","sort.txt");
        #endif

        #if 0 // Câu c
        ofstream ofile("E:\\Project Visual Studio Code\\Summary_exercises\\Bai_44\\sort.txt", ios::app);
        ofile << "2015";
        #endif
#endif

    // Bài 3 
    #if 0
    ifstream input_file("E:\\Project Visual Studio Code\\Summary_exercises\\Bai_44\\Thong_tin.txt");
    
    vector<tuple<string, string, string, float>> student_data;
    string first_name;
    string second_name;
    string last_name;
    float score;
    while (input_file >> first_name >> second_name >> last_name >> score) 
        student_data.push_back(make_tuple(first_name,second_name,last_name,score));
    input_file.close(); 

    vector<tuple<string, string, string, float>> passed_students;
    for (auto student : student_data) 
        if (get<3>(student) >= 7.0f) 
            passed_students.push_back(student);
    
    ofstream output_file("E:\\Project Visual Studio Code\\Summary_exercises\\Bai_44\\SVD.txt");
    for (int i = 0; i < passed_students.size(); i++) 
        output_file << get<0>(passed_students[i]) << " " << get<1>(passed_students[i]) << " " << get<2>(passed_students[i]) << " " << get<3>(passed_students[i]) << endl;
    output_file.close();
    #endif

    // Bài 4
    #if 0
    ifstream ifile("E:\\Project Visual Studio Code\\Summary_exercises\\Bai_44\\VanBan.txt");

    string longest_string;
    string current_string;
    while (getline(ifile, current_string)) 
        if (current_string.length() > longest_string.length()) 
            longest_string = current_string;

    cout << "Xau dai nhat trong file: " << longest_string << endl;
    cout << "Do dai: " << longest_string.length() << " ky tu." << endl;
    return 0;
    #endif

    // Bài 5
    #if 0
    ifstream ifile("E:\\Project Visual Studio Code\\Summary_exercises\\Bai_44\\Mang.txt");
    int m,n;
    ifile >> m >> n;
    int arr[m][n];
    for(int i = 0; i < m; i++)
        for(int j = 0; j < n; j++)
            ifile >> arr[i][j];

    for(int i = 0; i < m; i++)
    {
        for(int j = 0; j < n; j++)
            cout << arr[i][j] << ' ';
        cout << endl;
    }
    #endif
}