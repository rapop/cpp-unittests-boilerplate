#include <iostream>

#include <boilerplate_module/boilerplate.h>

int main()
{
    std::cout << "Running main..." << std::endl;
    boilerplate_module::boilerplate boilerplate{1};
    const double sum = boilerplate.return_sum(10,1);
    std::cout << "Sum is " << sum << std::endl;
    return 0;
}