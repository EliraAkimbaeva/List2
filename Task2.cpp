#include <iostream>
#include <cstdlib>
#include <ctime>

class DiagonalArray {
private:
    static const int SIZE = 10;
    int array[SIZE][SIZE];

public:
    void read_data() {
        std::srand(std::time(nullptr));
        for (int i = 0; i < SIZE; i++) {
            for (int j = 0; j < SIZE; j++) {
                if (i == j)
                    array[i][j] = std::rand() % 10;
                else
                    array[i][j] = 0;
            }
        }
    }

    void process_data() {}

    void show_data() {
        int sum = 0;
        std::cout << "Array:" << std::endl;
        for (int i = 0; i < SIZE; i++) {
            for (int j = 0; j < SIZE; j++) {
                std::cout << array[i][j] << " ";
                if (i == j)
                    sum += array[i][j];
            }
            std::cout << std::endl;
        }
        std::cout << "Sum of the digits on the diagonal: " << sum << std::endl;
    }
};

int main() {
    DiagonalArray diagonalArray;
    diagonalArray.read_data();
    diagonalArray.process_data();
    diagonalArray.show_data();

    return 0;
}
