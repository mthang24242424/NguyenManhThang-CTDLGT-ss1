#include <stdio.h>
int sum1(int n){
    int sum = 0;
    for (int i = 0; i <= n; i++) {
        sum += i;
    };
    return sum;
};
int sum2(int n) {
    int sum = n * (n+1) /2;
    return sum;
}
int main() {
    int n;
    printf("Enter number: ");
    scanf("%d", &n);
    printf("The sum is: %d\n", sum1(n));
    printf("The sum is: %d\n", sum2(n));
    return 0;
}
// độ phức tạp của hàm sum1 là O(n) vì sử dụng vòng lặp for dựa theo n từ nguười dùng nhập vào
// độ phức tạp của hàm sum2 là O(1) vì sử dụng công thức tính, nếu n thay đổi thì ko ảnh hưởng gì đến độ phức tạp của hàm