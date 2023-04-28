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

    // wait for the threads to complete
    for(int i = 0; i < 10; i++)
    {
        t[i].join();
        // std::cout<<"Launched by thread join "<< i <<std::endl;
    }

    return 0;
}

/*
    Key things to note cout is not thread safe.
    As there is no synchronization currently done on the system there are bunch of cout threads trying to the write at the same time causing a jumbled mess
*/ 