#include <iostream>
#include <memory>
#include <cstdint>

#include "widget.hpp"
#include "print.hpp"

int main()
{
    const char text1[] = "tekst";
    const char * const text2 = "tekst";

    for (const char* ptr{text2}; *ptr != '\0'; ++ptr)
    {
        std::cout << *ptr << '\n';
    }

    for (uint8_t iter{}; iter < sizeof(text1) - 1; ++iter)
    {
        std::cout << text1[iter] << '\n';
    }
}
