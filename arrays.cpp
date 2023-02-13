#include <iostream>
#include <ctime>

constexpr int MATRIX_SIZE = 4;

int main(int argc, char** argv) {
    std::srand(std::time(nullptr));
    // create a MATRIX_SIZE x MATRIX_SIZE matrix
    int** matrix = new int* [MATRIX_SIZE];
    for (int i = 0; i < MATRIX_SIZE; i++) {
        matrix[i] = new int[MATRIX_SIZE];
    }  
    // add data
    for (int i = 0; i < MATRIX_SIZE; i++) {
        for (int j = 0; j < MATRIX_SIZE; j++) {
            matrix[i][j] = std::rand() % 10;
        }
    }
    // print matrix
     for (int i = 0; i < MATRIX_SIZE; i++) {
        for (int j = 0; j < MATRIX_SIZE; j++) {
            std::cout << matrix[i][j] << ' ';
        }
        std::cout << '\n';
    }
    // delete matrix
    for (int j = 0; j < MATRIX_SIZE; j++) {
        delete[] matrix[i];
    }
    delete[] matrix;

    return 0;
}