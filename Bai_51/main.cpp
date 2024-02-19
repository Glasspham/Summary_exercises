#include<bits/stdc++.h>
using namespace std;
int main()
{
    ifstream ifile("CUM.INP");
    string s;
    getline(ifile,s);
    ifile.close();

    int cnt = 0;
    ofstream otempfile("CUM.TXT");
    for(int i = 0; i < s.length() - 1; i++)
    {
        int cnt_start = 0;
        int cnt_end = 0;
        int index_start = 0;
        int index_end = 0;
        if(s[i] == '(')
        {   
            cnt ++;
            cnt_start++;
            index_start = i;
            for(int j = i + 1; i < s.length(); j++)
            {
                if(s[j] == '(')
                    cnt_start++;
                if(s[j] == ')')
                {
                    cnt_end++;
                    if(cnt_start == cnt_end)
                    {
                        index_end = j;
                        break;
                    } 
                }
            }
            for(int m = index_start; m <= index_end; m++)
                otempfile << s[m];
            otempfile << endl;
        } 
    }
    otempfile.close();

    #if 0 // Dùng map và vector
    ifstream itempfile("CUM.TXT");
    string word;
    map<string,int> word_length;
    while (itempfile >> word)
        word_length[word] = word.length();
    itempfile.close();
    remove("CUM.TXT");

    vector<pair<string, int>> sorted_word_length(word_length.begin(), word_length.end());
    sort(sorted_word_length.begin(), sorted_word_length.end(), [](const pair<string, int>& a, const pair<string, int>& b){
        return a.second < b.second; 
    });

    ofstream ofile("CUM.OUT");
    ofile << cnt << endl;
    for (auto it : sorted_word_length)
        ofile << it.first << endl;
    ofile.close();
    #endif

    #if 0 // Dùng map
    ifstream itempfile("CUM.TXT");
    string word;
    map<pair<int,string>,bool> word_length;
    while (itempfile >> word)
        word_length[make_pair(word.length(),word)] = true;
    itempfile.close();
    remove("CUM.TXT");

    ofstream ofile("CUM.OUT");
    ofile << cnt << endl;
    for (auto it : word_length)
        ofile << it.first.second << endl;
    ofile.close();
    #endif

    #if 0 // Dùng set
    ifstream itempfile("CUM.TXT");
    string word;
    set<pair<int,string>> word_length;
    while (itempfile >> word)
        word_length.insert(make_pair(word.length(),word));
    itempfile.close();
    remove("CUM.TXT");

    ofstream ofile("CUM.OUT");
    ofile << cnt << endl;
    for (auto it : word_length)
        ofile << it.second << endl;
    ofile.close();
    #endif
    
    return 0;
}
