#include <stdio.h>
#include <stdlib.h>

    int* mallocArray(int n){
        int *arr = (int*)malloc(n * sizeof(int));
        for (int i = 0; i < n; i++) {
            arr[i] = i;
        }
        return arr;
    }

// chương trình chạy dựa theo n nhập vào từ người dùng, độ phức tạp là  O(n)