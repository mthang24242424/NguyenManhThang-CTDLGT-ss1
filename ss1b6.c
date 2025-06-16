#include <stdio.h>

int main(void) {
    int arr[] = {1, 2, 5, 3, 2, 4, 2, 5, 1, 2};
    int n = sizeof(arr) / sizeof(arr[0]);

    int num;
    printf("nhap gia tri can dem: ");
    scanf("%d", &num);

    int count = 0;

    for (int i = 0; i < n; i++) {
        if (arr[i] == num) {
            count++;
        }
    }
    printf("gia tri %d xuat hien %d lan.\n", num, count);
    return 0;
}
// do phuc tap thoi gian la O(n) vì ct duyet qua tat ca phan tu trong mang
// do phuc tap ko gian la O(1) vì chi dung them 1 bien dem