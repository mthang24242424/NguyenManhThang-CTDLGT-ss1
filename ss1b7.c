#include <stdio.h>
#include <stdbool.h>
/*
    C1:
    bool checkNum ( int arr[], int n ) {
        for ( int i = 0; i < n - 1; i++){
            for (int j = i+1; j < n; j++){
                if ( arr[i] == arr[j] ){
                return true;
                }
            }
        }
        return false;
    }
    cach nay su dung 2 vong for long de kiem tra neu trung thi tra ve kq
    do phuc tap thoi gian la O(n^2)
    do phuc tap ko gian la O(1)

    C2:
    bool checkNum ( int arr[], int n ) {
    int array[1001] = {0};

    for ( int i = 0; i < n; i++ ) {
        array[arr[i]]++;
        if ( array[arr[i]] > 1 ) {
            return true;
        }
    }
    return false;
}
    cach 2 su dung mang de dem so lan xuat hien khi trung thi tang len 1 va tra ve kq
    do phuc tap ve thoi gian la O(n)
    do phuc tap ve ko gian la O(1) vì sd mang co kich thuoc co dinh

 */
int main(void) {
    // int arr[] = {1, 2, 3, 4, .....};
    // int n = sizeof(arr) / sizeof(arr[0]);
    return 0;
}