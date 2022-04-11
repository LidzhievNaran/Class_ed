#include <iostream>
#include <string>
template <typename T, typename V>
class Transaction
{
public:
    Transaction(T fromAcc, T toAcc, V code, int sum):
        fromAccount(fromAcc), toAccount(toAcc), code(code), sum(sum)
    { }
    void getInfo()
    {
        std::cout << "From: " << fromAccount << "\nTo: "<< toAccount
            << "\nSum: "<< sum << "\nCode: " << code << std::endl;
    }

private:
    T fromAccount;
    T toAccount;
    V code;
    int sum;
};


int main() {
    Transaction<std::string, int> t1("id1234", "id5678", 2804, 5000);
    t1.getInfo();

    return 0;
}