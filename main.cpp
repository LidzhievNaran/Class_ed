#include <iostream>
class Person{
public:
    std::string name;
    int age;
    Person(std::string n, int a)//конструктор класса;
    {
        name = n; age = a;
    }
    Person(std::string n)
    {
        name = n;
        age = 18;
    }
    Person(){
        name = "Bob";
        age = 18;
    }
    void move(){
        std::cout << name << " is moving"<< std::endl;
    }
};
int main() {
    Person person("Tom", 22);
    std::cout << "Name: "<< person.name << "\tAge: " << person.age << std::endl;
    Person sam("Sam");
    std::cout << "Name: "<< sam.name << "\tAge: " << sam.age << std::endl;
    Person Bob = Person();
    std::cout << "Name: "<< Bob.name << "\tAge: " << Bob.age << std::endl;
    return 0;
}
