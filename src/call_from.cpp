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

    // Launch 10 threads with intial function "call_from()"
    for( int i = 0; i < 10; i++)
    {
        t[i] = std::thread(call_from, i);
    }

    // Print from main function
    std::cout << "Launched from main" << std::endl;
}