#include <stdio.h>


int determinant(int n, int mat[n][n]) {
    int det = 0;

    // if (n == 1) {
    //     return mat[0][0];
    if (n == 2) {
        return mat[0][0] * mat[1][1] - mat[0][1] * mat[1][0];
    } else if (n > 2) {
        int submat[n-1][n-1];
        for (int x = 0; x < n; x++) {
            int subi = 0; // submatrix row index
            // 
            for (int i = 1; i < n; i++) {
                int subj = 0; // submatrix column index
                for (int j = 0; j < n; j++) {
                    if (j == x)
                        continue;
                    submat[subi][subj] = mat[i][j];
                    subj++;
                }
                subi++;
            }
            det += (x % 2 == 0 ? 1 : -1) * mat[0][x] * determinant(n - 1, submat);
        }
    }
    return det;
}

void createModifiedMatrix(int size, int mat[size][size], int constants[size], int modified[size][size], int col) {
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            modified[i][j] = (j == col) ? constants[i] : mat[i][j];
        }
    }
}

int cramer(int size, int arr[size][size+1]) {
    int coefficients[size][size];
    int constants[size];

    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            coefficients[i][j] = arr[i][j];
        }
        constants[i] = arr[i][size];
    }
    

    int detCoeff = determinant(size, coefficients);
    if (detCoeff == 0) {
        printf("Нет единственного решения.\n");
        return 0;
    }

    for (int i = 0; i < size; i++) {
        int modified[size][size];
        createModifiedMatrix(size, coefficients, constants, modified, i);
        int detModified = determinant(size, modified);
        float x_i = (float)detModified / detCoeff;
        printf("x_%d = %.2f\n", i + 1, x_i);
    }
    // printf("determ: %d\n", determinant(size, coeff));
}

int main() {
    int arr1[][3] = {{5,2,7}, {2,1,9}};
    int arr2[][3] = {{1,-1,5},{2,1,1}};
    int arr3[][3] = {{6,4,1},{2,5,4}};
    int arr4[][4] = {{1,2,3,5},{4,5,6,8}, {7,8,0,2}};
    int arr5[][4] = {{2,-3,1,-7},{1,2,-3,14}, {-1,-1,5,-18}};
    int arr6[][4] = {{3,2,1,1}, {6,5,4,-2}, {9,8,7,3}};
    int arr7[][5] = {{2,5,4,1,20}, {1,3,2,1,11},{2,10,9,7,40},{3,8,9,2,37}};
    int arr9[][9] = {{2,6,-2,3,3,6,1,6,22},
        {1,4,4,2,4,7,-2,3,39},
        {3,6,7,-1,0,5,3,1,34},
        {7,3,6,0,7,4,2,4,23},
        {1,0,-1,2,3,6,0,-2,3},
        {-1,0,2,6,-2,0,5,-1,26},
        {4,5,-2,7,4,4,5,-2,17},
        {3,3,4,6,-2,6,-2,2,37},
    };

    // printf("%d\n", sizeof(arr2)/sizeof(arr2[0]));


    printf("\n arr1: \n");
    cramer(sizeof(arr1)/sizeof(arr1[0]),arr1);
    printf("\n arr2: \n");
    cramer(sizeof(arr2)/sizeof(arr2[0]),arr2);
    printf("\n arr3: \n");
    cramer(sizeof(arr3)/sizeof(arr3[0]),arr3);
    printf("\n arr4: \n");
    cramer(sizeof(arr4)/sizeof(arr4[0]),arr4);
    printf("\n arr5: \n");
    cramer(sizeof(arr5)/sizeof(arr5[0]),arr5);
    printf("\n arr6: \n");
    cramer(sizeof(arr6)/sizeof(arr6[0]),arr6);
    printf("\n arr7: \n");
    cramer(sizeof(arr7)/sizeof(arr7[0]),arr7);
    printf("\n arr9: \n");
    cramer(sizeof(arr9)/sizeof(arr9[0]),arr9);

}