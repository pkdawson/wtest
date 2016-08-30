#include <iostream>
#include <chrono>
using namespace std;

int main()
{
    auto dur = 200ms;
    cout << "hello, world\n";
    cout << dur.count() << "ms\n";
    return 0;
}
