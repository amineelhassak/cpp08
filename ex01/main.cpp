#include "Span.hpp"

int main()
{
    try
    {
    Span span(10);
    span.addNumber(10);
    span.addNumber(1);
    span.addNumber(3);
    span.addNumber(0);
    span.addNumber(10);

    std::list<int> l(6,-1);
    span.addNumbers(l.begin(), l.end());
    // span.addNumber(10);
    std::list<int>it = span.getNumbers();
    std::cout << "-------------------------------------------\n";
    for (std::list<int>::iterator itt = it.begin(); itt != it.end(); itt++)
    {
        std::cout << *itt << " |";
    }
    std::cout << "\n--------------------------------------------\n";
    }
    catch(...)
    {
        std::cerr << "l9lawi" << '\n';
    }
    
}