#include <iostream>
#include <string>

class Account{
public:
    const static int rate = 8;
    Account(double sum)
    {
        this->sum = sum;
    }
    double getIncome()
    {
        return sum + sum * rate / 100;
    }
private:
    double sum;
};
int main() {
    Account account1(20000);
    Account account2(50000);
    std::cout << "Rate: "<< account1.rate << "\tIncome: " << account1.getIncome()<< std::endl;
    std::cout << "Rate: "<< account2.rate << "\tIncome: " << account2.getIncome()<< std::endl;
    return 0;
}