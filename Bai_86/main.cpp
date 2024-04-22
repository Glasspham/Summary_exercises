#include <iostream>
using namespace std;
void count_way(int n){
    int i = 1;
    int way_count = 0;
    for(int ten = 0; ten <= n / 10; ++ten) {
        for (int five = 0; five <= (n - ten * 10) / 5; ++five) {
            int two = n - ten * 10 - five * 5;
            if (two % 2 == 0) {
                int one = two / 2;
                cout << i++ << ':' << ten << " to 10 " << five << " to 5 " << one << " to 2 " << endl;
                way_count++;
            }
        }
    }
    cout << "Tong so cach: " << way_count << endl;
}

int main() {
    int n;
    do{
        cout << "Nhap n: ";
        cin >> n;
        if(n < 0  || n > 50) cout << "Nhap lai n" << endl;
    } while (n < 0  || n > 50);
    count_way(n);
    return 0;
}
