#include <iostream>
#include <string>
template <typename T>
class Account {
private:
    T id;
public:
    Account (T id ): id (id)
    {

    }
    T getId(){
        return id;
    }
};

int main() {
    Account <std::string> acc1("ca-pub21232131");
    Account <int> acc2(2131231232131);
    std::cout << "acc1: "<< acc1.getId() << std::endl;
    std::cout << "acc2: "<< acc2.getId() << std::endl;
    return 0;
}