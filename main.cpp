#include <iostream>
class Person{
public:
    std::string name;
    int age;
    Person(std::string n, int a)//конструктор класса;
    {
        name = n; age = a;
        std::cout << "First constructor" << std::endl;
    }
    Person(std::string n): Person(n, 19)
    {
        std::cout << "Second constructor"<< std::endl;
    }
    Person(): Person("Alexa")
    {
        std::cout << "Third Constructor" << std::endl;
    }
    //вызываем из одного конструктора другой
    void move(){
        std::cout << name << " is moving"<< std::endl;
    }
};
int main() {
    Person Alexa = Person();
    std::cout << "Name: "<< Alexa.name << "\tAge: " << Alexa.age << std::endl;
    return 0;
}
