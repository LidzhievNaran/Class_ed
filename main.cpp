#include <iostream>
#include <string>

class Person
{
public:
    Person(std::string n)
    {
        name = n;
    }
    ~Person()
    {
        std::cout<< "Destructor called for Person "<< name << std::endl;
    }
private:
    std::string name;
};

int main() {
 Person tom("Tom");
 Person *sam = new Person("Sam");
 delete sam;
 std::cout << "End of Main" << std::endl;
    return 0;
}