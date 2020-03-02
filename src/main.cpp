#include "iostream"

std::string gen_string_function()
{
    return "Hello world";
}

int main()
{
    std::cout << gen_string_function() << std::endl;
    return 0;
}