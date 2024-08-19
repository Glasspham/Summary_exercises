#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

struct Job{
    int index, a, b;
};

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int N; cin >> N;
    vector<Job> jobs(N);
    for (int i = 0; i < N; i++){
        cin >> jobs[i].a;
        jobs[i].index = i + 1;
    }
    for(int i = 0; i < N; i++)
        cin >> jobs[i].b;
    

    vector<Job> group1, group2;
    for(int i = 0; i < N; i++){
        if (jobs[i].a <= jobs[i].b)
            group1.push_back(jobs[i]);
        else group2.push_back(jobs[i]);
    }

    sort(group1.begin(), group1.end(), [](Job j1, Job j2){
        return j1.a < j2.a;
    });
    sort(group2.begin(), group2.end(), [](Job j1, Job j2){
        return j1.b > j2.b;
    });

    vector<int> schedule;
    for(auto j : group1) schedule.push_back(j.index);
    for(auto j : group2) schedule.push_back(j.index);

    int T = 0, timeA = 0, timeB = 0;
    for(int i = 0; i < N; i++){
        int jobIndex = schedule[i] - 1;
        timeA += jobs[jobIndex].a;
        timeB = max(timeA, timeB) + jobs[jobIndex].b;
        T = timeB;
    }
    cout << T << endl;
    for (int i = 0; i < N; i++)
        cout << schedule[i] << " ";
    cout << endl;
    return 0;
}