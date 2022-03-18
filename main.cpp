#include <iostream>
class Person{
public:
    std::string name;
    int age;
    void move(){
        std::cout << name << " is moving"<< std::endl;
    }
};
int main() {
    Person person;
    Person *ptr = &person;
    ptr->name = "Tom";
    ptr->age = 22;
    ptr->move();
    std::cout << "Name: " << ptr->name << "\tAge: "<<ptr->age << std::endl;
    std::cout << "Name: " << person.name << "\tAge: "<<person.age << std::endl;//Изменения по указателю ptr в данном случае приведут к изменениям объекта person.
    return 0;
}
