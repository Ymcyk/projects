#pragma once

#include <iostream>

template<typename T>
void print(T&& text)
{
    std::cout << text << '\n';
}