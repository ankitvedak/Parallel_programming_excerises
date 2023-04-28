#include <iostream>
#include <thread>

// Initial funciton call for each thread
void call_from(int tid)
{
    std::cout<<"Launched by thread: "<< tid <<std::endl;
}

int main()
{
    // Create an array of 10 thread objects 

    std:: thread t[10];
}