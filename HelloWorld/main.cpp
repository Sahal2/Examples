#include <iostream>

/**
 * Example simple application in C++.
 */

class HelloWorld
{
private:
    std::string greeting;

public:
    HelloWorld():
        greeting("Hello World...")
    {
    }

    /**
     * Greet the world.
     *
     * @return whether we were successful.
     */
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
    std::cout << greeting << std::endl;
    return std::cout.good(); // Return whether we were successful.
}
