#include <iostream>

int main (){

    int number(10);

    int number2{24};

    int number3 = 4;

    std::cout << "number  : " << number << std::endl;
    std::cout << "number2 : " << number2 << std::endl;
    std::cout << "number3 : " << number3 << std::endl;

    std::cout << "number * number3 : " << number3 * number << std::endl;
    std::cout << "number2 - number3: " << number2 - number3 << std::endl;

    



    return 0;
}
