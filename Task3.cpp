#include <iostream>
#include <string>

class Student {
private:
    std::string name;
    int indexNumber;

public:
    void read_data() {
        std::cout << "Enter name: ";
        std::getline(std::cin >> std::ws, name);
        std::cout << "Enter index number: ";
        std::cin >> indexNumber;
    }

    void process_data() {}

    void show_data() {
        std::cout << "Name: " << name << std::endl;
        std::cout << "Index Number: " << indexNumber << std::endl;
    }
};

int main() {
    Student student;
    student.read_data();
    student.process_data();
    student.show_data();

    return 0;
}
