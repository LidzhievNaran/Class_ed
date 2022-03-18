#include <iostream>

class Person {
public:
    Person(std::string n, int a);
    void move();
    void setAge(int a);
    std::string getName();
    int getAge();
private:
    std::string name;
    int age;
};

Person::Person(std::string n, int a) {
    name = n;
    age = a;
}
void Person::setAge(int a) {
    if (a> 0 && a < 100) age = a;
}
void Person::move() {
    std::cout << name << " is moving" << std::endl;
}
std::string Person::getName() {
    return name;
}
int Person::getAge(){
    return age;
}
int main() {
    Person tom("Tom", 22);
    std::cout << "Name: " << tom.getName() << "\tAge: " << tom.getAge() << std::endl;
    tom.setAge(31);
    std::cout << "Name: " << tom.getName() << "\tAge: " << tom.getAge() << std::endl;
    tom.setAge(291);
    std::cout << "Name: " << tom.getName() << "\tAge: " << tom.getAge() << std::endl;
    return 0;
}
