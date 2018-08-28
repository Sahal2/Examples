#include <iostream>

/**
 * Example simple application in C++.
 */

class HelloWorld
{
public:
    bool greet();
};

int main()
{
    HelloWorld greeter; // Create an instance of HelloWorld.

    if(!greeter.greet())
    {
        std::cerr << "Error greeting :-(" << std::endl;
        return 1; // Failure
    }

    return 0; // Success
}

bool HelloWorld::greet()
{
    std::cout << "Hello World!" << std::endl;
    return std::cout;
}
