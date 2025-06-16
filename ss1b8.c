#include <stdio.h>
#include <stdbool.h>
int main(void) {
    int arr[] = {1,2,3,4,5,1,2,3,4,2,5,7,9,0,5,5};
    int n = sizeof(arr) / sizeof(arr[0]);
    int array[100];
    int index = 0;
    for (int i = 0; i < n; i++) {
        bool check = false;
        for (int j = 0; j < index; j++) {
            if (arr[i] == array[j]) {
                check = true;
                break;
            }
        }
        if (!check) {
            array[index] = arr[i];
            index++;
        }
    }
    int maxCount = 0;
    int number = array[0];
    for (int i = 0; i < index; i++) {
        int count = 0;
        for (int j = 0; j < n; j++) {
            if (arr[j] == array[i]) {
                count++;
            }
        }
        if (count > maxCount) {
            maxCount = count;
            number = array[i];
        }
    }
    printf("phan tu xuat hien nhieu nhat la %d gom %d lan", number, maxCount);
    return 0;
}
// ct su dung for long de loc ra cac phan tu ko trung nhau roi dua ra 1 mang ms nen do phuc tap thoi gian la O(n^2)
// sư dung them 1 mang array[] nen do phuc tap ko gian la O(n)