#include <stdio.h>
void printfDouble(int n) {
    int i =i ;
    while (i < n) {
        printf("%d\n", i);
        i *= 2;
    }
}
int main(void) {
    printf("Hello, World!\n");
    return 0;
}
// độ phức tạp là O(log n) vì i gấp đôi sau mỗi lần lặp, số lần lặp là log2(n)