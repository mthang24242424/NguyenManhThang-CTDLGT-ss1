#include <stdio.h>
void showMatrix ( int matrix[][3], int rows, int cols ) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
}
void showDiagonal ( int matrix[][3], int size ) {
    printf("cac phan tu duong cheo chinh la: \n");
    for (int i = 0; i < size; i++) {
        printf("%d ", matrix[i][i]);
    }
}
int main() {
    int matrix[3][3] = {
        {1,2,3},
        {4,5,6},
        {7,8,9}
    };
    showMatrix(matrix, 3, 3);
    showDiagonal(matrix, 3);
    return 0;
}
//  in tung phan tu cua ma tran bang 2 vong for long

// do phuc tap tgian la O(rows * cols)
// do phuc tap ko gian la O(1)

// in duong cheo chinh: duyet vong lap lay ra nhung vi tri i = j

// do phuc tap tgian la O(n)
// do phuc tap ko gian la O(1)
