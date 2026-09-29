#include <iostream>
#include <string>
int main() {
    std::string name;
    int age;
    float height;
    char group;
    bool fullTime;
    std::cin >> name >> age >> height >> group >> fullTime;
    std::cout << "Student card" << std::endl;
    std::cout << "Name:" << name << std::endl;
    std::cout << "Age:" << age << std::endl;
    std::cout << "Height:" << height << " m" << std::endl;
    std::cout << "Group:" << group << std::endl;
    std::cout << "Full-time:" << fullTime << std::endl;
    std::cout << "Age in months:" << age * 12    << std::endl;
    std::cout << "Bytes: int" << sizeof(age)
              << ", float" << sizeof(height)
              << ", char" << sizeof(group)
              << ", bool" << sizeof(fullTime) << std::endl;

    return 0;
}