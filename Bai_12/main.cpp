#include <stdio.h>

void findMinMax(int *arr, int size, int *min, int *max) {
    *min = *max = arr[0];
    for (int i = 1; i < size; ++i) {
        if (arr[i] < *min) {
            *min = arr[i];
        }
        if (arr[i] > *max) {
            *max = arr[i];
        }
    }
}

int main() {
    int size;
    printf("Nhập kích thước của mảng: ");
    scanf("%d", &size);

    int arr[size];
    printf("Nhập các phần tử của mảng:\n");
    for (int i = 0; i < size; ++i) {
        scanf("%d", &arr[i]);
    }

    int min, max;
    findMinMax(arr, size, &min, &max);

    printf("Giá trị nhỏ nhất của mảng: %d\n", min);
    printf("Giá trị lớn nhất của mảng: %d\n", max);

    return 0;
}