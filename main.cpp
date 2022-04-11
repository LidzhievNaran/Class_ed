#include <iostream>
#include <string>
class IntAccount
{
private:
    int id;
public:
    IntAccount(int id): id(id)
    { }
    int getId(){
        return  id;
    }
};

class StrAccount {
private:
    std::string id;
public:
    StrAccount(std::string id) : id (id)
    {}
    std::string getId(){
        return id;
    }
};

int main() {
    StrAccount acc1("ca-pub1292342340");
    IntAccount acc2(12343452);
    std::cout << "acc1: "<< acc1.getId()<< std::endl;
    std::cout << "acc2: "<< acc2.getId() << std::endl;
    return 0;
}