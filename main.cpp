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
bool operator == (Counter c1, Counter c2)
{
    return c1.seconds == c2.seconds;
}
bool operator != (Counter c1, Counter c2)
{
    return c1.seconds != c2.seconds;
}
bool operator > (Counter c1, Counter c2){
    return c1.seconds > c2.seconds;
}
bool operator < (Counter c1, Counter c2){
    return c1.seconds < c2.seconds;
}

int main() {
    Counter c1(20);
    Counter c2(10);
    bool b1 = c1 == c2;
    bool b2 = c1 > c2;
    std::cout << b1 << std::endl;
    std::cout << b2 << std::endl;

    return 0;
}