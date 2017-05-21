#include <iostream>
#include <chrono>
#include <ctime>

int main (){

    std::chrono::steady_clock::time_point t1 ;
    std::chrono::steady_clock::time_point t2 ;


    t1 = (std::chrono::steady_clock::now());

    for (int i = 0; i < 10000000; i++){
        std::cout << "*";


    }

    t2 = (std::chrono::steady_clock::now());

    std::chrono::duration<double> time_span = std::chrono::duration_cast<std::chrono::duration<double>>(t2 - t1);





     t1 = (std::chrono::steady_clock::now());

    for (int i = 0; i < 10000000; i++){
        printf("*");

    }

     t2 = (std::chrono::steady_clock::now());

    std::chrono::duration<double> time_span2 = std::chrono::duration_cast<std::chrono::duration<double>>(t2 - t1);

    std::cout << std::endl <<"std::cout Time: " << time_span.count() << " seconds" << std::endl;
    std::cout << "printf Time: " << time_span2.count() << " seconds" << std::endl;

    return 0;
}
