#include <iostream>
#include <string>

class Account{
public:
    Account(double sum)
    {
        this->sum = sum;
    }
    static int getRate()
    {
        return rate;
    }
    static void setRate(int r)
    {
        rate = r;
    }
    double getIncome()
    {
        return sum + sum * rate / 100;
    }
private:
    double sum;
    static int rate;
};
int Account::rate = 8;
int main() {
    Account account1(20000);
    Account account2(50000);
    Account::setRate(5);
    std::cout << "Rate: "<< Account::getRate() << std::endl;
    std::cout << "Rate: "<< account1.getRate() << " Income: "<< account1.getIncome() << std::endl;
    std::cout << "Rate: "<< account2.getRate()<< " Income: "<< account2.getIncome() << std::endl;
    return 0;
}