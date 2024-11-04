#include "semafor/Semafor.hpp"
#include <thread>
#include <iostream>
static bool isFinished = false;
void doSomething()
{
    while(!isFinished)
    {
        std::cout << "this thread is runnnning" << std::endl;
    }
}
int main(int argc, char **argv)
{
    Semafor semafor;
    std::thread secondThread(doSomething);

    std::cin.get();

    isFinished = true;

    secondThread.join();

    std::cin.get();

    std::cout << "Finishing" << std::endl;
    return 0;
}