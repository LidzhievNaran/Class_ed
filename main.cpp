#include <iostream>
#include <string>
class Counter
{
public:
    Counter (int sec)
    {
        seconds = sec;
    }
    void display()
    {
        std::cout << seconds << " seconds"<< std::endl;
    }
    Counter operator + (Counter c2){
        return (this->seconds + c2.seconds);
    }
    int operator + (int s)
    {
        return this->seconds + s;
    }
    int seconds;
};

int main() {
    Counter c1(20);
    Counter c2(10);
    Counter fuck(90);
    Counter c3 = c1 + c2;
    c3.display();
    int seconds = c1 +25;
    std::cout << seconds << std::endl;
    return 0;
}