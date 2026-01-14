#include <iostream>
#include <sodium.h>

int main()
{
    if (sodium_init() == -1) {
        return 1; // Initialization failed
    }

    // Your libsodium code here
    std::cout << "libsodium initialized successfully!" << std::endl;

    return 0;
}
