#include <iostream>
#include <vector>
#include <ctime>
using namespace std;

#if 0
pair<bool, double> linearSearch(vector<int> &arr, int key) {
    clock_t start_time = clock();
    bool found = false;
    for (size_t i = 0; i < arr.size(); ++i) {
        if (arr[i] == key) {
            found = true;
            break;
        }
    }
    clock_t end_time = clock();
    double elapsed_time = double(end_time - start_time) / CLOCKS_PER_SEC;
    return make_pair(found, elapsed_time);
}

int main() {
    vector<int> A;
    int num, K;
    cout << "Enter integers separated by space for array A: ";
    while (cin >> num) {
        A.push_back(num);
    }
    cout << "Enter the element K to search for: ";
    cin >> K;

    auto search_result = linearSearch(A, K);

    if (search_result.first) {
        cout << "Element " << K << " found in the array." << endl;
    } else {
        cout << "Element " << K << " not found in the array." << endl;
    }
    cout << "Time taken for linear search: " << search_result.second << " seconds." << endl;

    return 0;
}
#endif

#if 0
double insertionSort(vector<int> &arr) {
    clock_t start_time = clock();
    for (size_t i = 1; i < arr.size(); ++i) {
        int key = arr[i];
        int j = i - 1;
        while (j >= 0 && arr[j] < key) {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = key;
    }
    clock_t end_time = clock();
    double elapsed_time = double(end_time - start_time) / CLOCKS_PER_SEC;
    return elapsed_time;
}

double selectionSort(vector<int> &arr) {
    clock_t start_time = clock();
    for (size_t i = 0; i < arr.size(); ++i) {
        size_t max_idx = i;
        for (size_t j = i + 1; j < arr.size(); ++j) {
            if (arr[j] > arr[max_idx]) {
                max_idx = j;
            }
        }
        swap(arr[i], arr[max_idx]);
    }
    clock_t end_time = clock();
    double elapsed_time = double(end_time - start_time) / CLOCKS_PER_SEC;
    return elapsed_time;
}

double bubbleSort(vector<int> &arr) {
    clock_t start_time = clock();
    for (size_t i = 0; i < arr.size(); ++i) {
        for (size_t j = 0; j < arr.size() - i - 1; ++j) {
            if (arr[j] < arr[j + 1]) {
                swap(arr[j], arr[j + 1]);
            }
        }
    }
    clock_t end_time = clock();
    double elapsed_time = double(end_time - start_time) / CLOCKS_PER_SEC;
    return elapsed_time;
}

int main() {
    vector<int> A;
    int num;
    cout << "Enter integers separated by space for array A: ";
    while (cin >> num) {
        A.push_back(num);
    }

    vector<int> A_insertion = A;
    vector<int> A_selection = A;
    vector<int> A_bubble = A;

    double time_insertion = insertionSort(A_insertion);
    double time_selection = selectionSort(A_selection);
    double time_bubble = bubbleSort(A_bubble);

    cout << "Time taken for insertion sort: " << time_insertion << " seconds." << endl;
    cout << "Time taken for selection sort: " << time_selection << " seconds." << endl;
    cout << "Time taken for bubble sort: " << time_bubble << " seconds." << endl;

    return 0;
}
#endif

#if 1
vector<int> quickSort(vector<int> &arr) {
    if (arr.size() <= 1)
        return arr;
    else {
        int pivot = arr[0];
        vector<int> less, greater;
        for (size_t i = 1; i < arr.size(); ++i) {
            if (arr[i] <= pivot)
                less.push_back(arr[i]);
            else
                greater.push_back(arr[i]);
        }
        less = quickSort(less);
        greater = quickSort(greater);
        vector<int> sorted;
        sorted.reserve(less.size() + greater.size() + 1);
        sorted.insert(sorted.end(), less.begin(), less.end());
        sorted.push_back(pivot);
        sorted.insert(sorted.end(), greater.begin(), greater.end());
        return sorted;
    }
}

pair<bool, double> binarySearch(vector<int> &arr, int key) {
    clock_t start_time = clock();
    bool found = false;
    int low = 0;
    int high = arr.size() - 1;
    while (low <= high) {
        int mid = (low + high) / 2;
        if (arr[mid] == key) {
            found = true;
            break;
        } else if (arr[mid] < key) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }
    clock_t end_time = clock();
    double elapsed_time = double(end_time - start_time) / CLOCKS_PER_SEC;
    return make_pair(found, elapsed_time);
}

int main() {
    vector<int> A;
    int num, K;
    cout << "Enter integers separated by space for array A: ";
    while (cin >> num) {
        A.push_back(num);
    }
    cout << "Enter the element K to search for: ";
    cin >> K;

    clock_t start_sorting = clock();
    vector<int> A_sorted = quickSort(A);
    clock_t end_sorting = clock();
    double time_sorting = double(end_sorting - start_sorting) / CLOCKS_PER_SEC;

    auto search_result = binarySearch(A_sorted, K);

    if (search_result.first) {
        cout << "Element " << K << " found in the sorted array." << endl;
    } else {
        cout << "Element " << K << " not found in the sorted array." << endl;
    }
    cout << "Time taken for sorting: " << time_sorting << " seconds." << endl;
    cout << "Time taken for binary search: " << search_result.second << " seconds." << endl;

    return 0;
}
#endif
