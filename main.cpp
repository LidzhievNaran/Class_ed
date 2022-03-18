#include <iostream>
class Person{
public:
    const std::string name;
    int &ageRef;
    int age;
    Person(std::string n, int a) : name(n), age(a), ageRef(age)//когда код инструкции из тела конструктора начнут выполняться, константы и ссылки уже должны быть инициализированы
    {
    }
    Person(std::string n) : name(n), age(18), ageRef(age)
    {
    }
    Person():name("Alexa"), age(19), ageRef(age)
    {
    }
    void move(){
        std::cout << name << "is moving"<< std::endl;
    }
};
int main() {
    Person tom("Tom", 22);
    std::cout << "Name: "<< tom.name<< "\tAge: "<< tom.age<< "\t AgeRef: "<< tom.ageRef << std::endl;
    Person Alexa = Person();
    std::cout << "Name: "<< Alexa.name<< "\tAge: "<< Alexa.age<< "\t AgeRef: "<< Alexa.ageRef << std::endl;
    return 0;
}
