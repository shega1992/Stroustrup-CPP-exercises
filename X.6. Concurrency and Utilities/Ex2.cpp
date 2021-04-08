#include <iostream>
#include <thread>
#include <mutex>
#include <condition_variable>

std::mutex mmutex;
std::condition_variable mcond;
bool sig = false;

void hello()
{
    std::unique_lock <std::mutex> lck{mmutex};
    std::cout << "hello ";
    sig = true;
    mcond.notify_one();
}
void world()
{
    std::unique_lock <std::mutex> lck{mmutex};
    if(!sig) mcond.wait(lck);
    std::cout << "world!\n";
}

int main()
{
    std::thread t1 {hello};
    std::thread t2 {world};

    t1.join();
    t2.join();

    return 0;
}
