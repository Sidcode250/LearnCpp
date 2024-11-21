#include <iostream>

class Car
{
    public:
        std::string Model;
        int series;

        void accelerate(){
            std::cout << "Go Fast";
        }
};

int main()
{
    Car car1;

    car1.Model = "Corvette";
    car1.series = 5;

    std::cout << car1.Model << '\n' << car1.series << '\n';
    car1.accelerate();

    return 0;
}