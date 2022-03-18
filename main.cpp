#include <iostream>
class Person{
public:
 std::string name;
 int age;
 Person(std::string n, int a);
 void move();
};

Person::Person(std::string n, int a)
{
    name = n; age = a;
}
void Person::move(){
 std::cout << name << " is moving"<< std::endl;
}
int main() {
    Person tom("Tom", 22);
    std::cout << "Name: " << tom.name << "\tAge: " << tom.age << std::endl;
    tom.move();
    return 0;
}
