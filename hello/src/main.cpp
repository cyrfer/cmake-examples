#include "config.h"
#include <iostream>

#ifdef DO_EXTRAS
    #include "extras.h"
#endif // DO_EXTRAS

int main(int argc, char** argv)
{
    std::cout << "hello world" << std::endl;
#ifdef DO_EXTRAS
    callme();
#endif // DO_EXTRAS
    return 0;
}
