#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define ROWS 2
#define COLS 3
#define ROWS1 3
#define COLS1 2

int array1[ROWS][COLS];
int array2[ROWS1][COLS1];
int targetMatrix[ROWS][COLS1];

void randomValueGenerator(int matrix[ROWS][COLS]);
void printMatrix(int matrix[ROWS][COLS]);
void randomValueGenerator1(int matrix[ROWS1][COLS1]);
void printMatrix1(int matrix[ROWS1][COLS1]);
void multiMatrix(int arr1[ROWS][COLS], int arr2[ROWS1][COLS1]);
void printMatrixResult(int matrix[ROWS][COLS1]);

int main(){
    srand(time(NULL));

    randomValueGenerator(array1);
    randomValueGenerator1(array2);

    printf("***-Dizi1-***\n");
    printMatrix(array1);
    printf("***-Dizi2-***\n");
    printMatrix1(array2);
    
    printf("***-Matris-Carpimi-***\n");
    multiMatrix(array1, array2);
    printMatrixResult(targetMatrix);
    
    return 0;
    }

    void randomValueGenerator(int arr1[ROWS][COLS]){
        for (size_t i = 0; i < ROWS; i++){
            for (size_t j = 0; j < COLS; j++){
                arr1[i][j] = rand() % 100 + 1;
            }
        }
    }
    
    void printMatrix(int matrix[ROWS][COLS]) {
        for (int i = 0; i < ROWS; i++) {
            for (int j = 0; j < COLS; j++) {
                printf("%d ", matrix[i][j]);
            }
            printf("\n");
        }
    }

    void randomValueGenerator1(int arr2[ROWS1][COLS1]){
        for (size_t k = 0; k < ROWS1; k++){
            for (size_t a = 0; a < COLS1; a++){
                arr2[k][a] = rand() % 100 + 1;
            }
        }
    }

    void printMatrix1(int matrix[ROWS][COLS1]) {
        for (int i = 0; i < ROWS1; i++) {
            for (int j = 0; j < COLS1; j++) {
                printf("%d ", matrix[i][j]);
            }
            printf("\n");
        }
    }

    void multiMatrix(int arr1[ROWS][COLS], int arr2[ROWS1][COLS1]){
        for (int i = 0; i < ROWS; i++) {
            for (int j = 0; j < COLS1; j++) {
                targetMatrix[i][j] = 0;
                for (int k = 0; k < COLS; k++) {
                    targetMatrix[i][j] += arr1[i][k] * arr2[k][j];
                }
            }
        }
    }

    void printMatrixResult(int matrix[ROWS][COLS1]) {
        for (int i = 0; i < ROWS; i++) {
            for (int j = 0; j < COLS1; j++) {
                printf("%d ", matrix[i][j]);
            }
            printf("\n");
        }
    }