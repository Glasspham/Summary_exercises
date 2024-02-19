#include <iostream>
#include <vector>

std::vector<int> mergeSortedList(const std::vector<int>& A, const std::vector<int>& B) {
    std::vector<int> C;
    int lenA = A.size(), lenB = B.size();
    int i = 0, j = 0;

    while (i < lenA && j < lenB) {
        if (A[i] <= B[j]) {
            C.push_back(A[i]);
            i++;
        } else {
            C.push_back(B[j]);
            j++;
        }
    }

    while (i < lenA) {
        C.push_back(A[i]);
        i++;
    }

    while (j < lenB) {
        C.push_back(B[j]);
        j++;
    }

    return C;
}

int main() {
    std::vector<int> A = {1, 2, 2, 3, 7, 15};
    std::vector<int> B = {1, 3, 6, 6, 12};

    std::vector<int> C = mergeSortedList(A, B);

    std::cout << "C merged: ";
    for (int num : C) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    return 0;
}
