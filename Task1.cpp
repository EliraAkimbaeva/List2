#include <iostream>

class Rectangle {
private:
    double length;
    double width;

public:
    void read_data() {
        std::cout << "Enter length: ";
        std::cin >> length;
        std::cout << "Enter width: ";
        std::cin >> width;
    }

    void process_data() {}

    void show_data() {
        double area = length * width;
        std::cout << "Area of the rectangle: " << area << std::endl;
    }
};

int main() {
    Rectangle rectangle;
    rectangle.read_data();
    rectangle.process_data();
    rectangle.show_data();

    return 0;
}
