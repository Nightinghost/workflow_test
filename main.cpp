#include <iostream>
#include <format>

int main()
{
    for (int i = 0; i < 10; i++)
        std::cout << std::format("{}\n", i);
    return EXIT_SUCCESS;
}