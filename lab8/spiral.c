#include <stdio.h>
#include <math.h>

void fill_matrix(int size, int arr[size], int matrix[][size]) {
    int top = 0;
    int left = 0;
    int bottom = size - 1;
    int right = size - 1;
    int index = 0;

    while (top <= bottom && left <= right) {
        // Заполняем верхний ряд слева направо
        for (int i = left; i <= right; i++) {
            matrix[top][i] = arr[index++];
        }
        top++;

        // Заполняем правый столбец сверху вниз
        for (int i = top; i <= bottom; i++) {
            matrix[i][right] = arr[index++];
        }
        right--;

        // Заполняем нижний ряд справа налево
        if (top <= bottom) {
            for (int i = right; i >= left; i--) {
                matrix[bottom][i] = arr[index++];
            }
            bottom--;
        }

        // Заполняем левый столбец снизу вверх
        if (left <= right) {
            for (int i = bottom; i >= top; i--) {
                matrix[i][left] = arr[index++];
            }
            left++;
        }
    }
}

void print_matrix(int size, int matrix[][size]) {
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            printf("%3d ", matrix[i][j]);
        }
        printf("\n");
    }
    printf("\n");
}

int main() {

    // 2x2 матрица
    int arr[] = {1, 2, 3, 4};
    int size = (int)sqrt(sizeof(arr) / sizeof(arr[0]));
    int matrix[size][size];
    fill_matrix(size, arr, matrix);
    printf("2x2 Matrix:\n");
    print_matrix(size, matrix);

    // 3x3 матрица
    int arr2[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int size2 = (int)sqrt(sizeof(arr2) / sizeof(arr2[0]));
    int matrix2[size2][size2];
    fill_matrix(size2, arr2, matrix2);
    printf("3x3 Matrix:\n");
    print_matrix(size2, matrix2);

    // 4x4 матрица
    int arr3[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16};
    int size3 = (int)sqrt(sizeof(arr3) / sizeof(arr3[0]));
    int matrix3[size3][size3];
    fill_matrix(size3, arr3, matrix3);
    printf("4x4 Matrix:\n");
    print_matrix(size3, matrix3);

    // 5x5 матрица
    int arr4[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25};
    int size4 = (int)sqrt(sizeof(arr4) / sizeof(arr4[0]));
    int matrix4[size4][size4];
    fill_matrix(size4, arr4, matrix4);
    printf("5x5 Matrix:\n");
    print_matrix(size4, matrix4);

}
