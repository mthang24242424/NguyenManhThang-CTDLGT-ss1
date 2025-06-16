#include <stdio.h>

int main(void) {
    int n;
    printf("nhap so luong phan tu: ");
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++) {
        printf("nhap phan tu thu %d: ", i + 1);
        scanf("%d", &arr[i]);
    }
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - 1 - i; j++) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
    return 0;
}
// chương trình dùng 2 vòng lặp lồng nhau nên độ phức tạp thời gian của thuật toán là O(n^2)
// chỉ sdung 1 biến temp hoán đổi nên độ phức tạp ko gian là O(1)
