#include "easyfind.hpp"

int main()
{
    std::vector<int> vect;
    vect.push_back(1);
    vect.push_back(2);
    vect.push_back(3);
    try
    {
        std::vector<int>::iterator it =  easyfind(vect,3);
        std::cout << "element found is :"<<  *it << std::endl;
        it =  easyfind(vect,4);
    }
    catch(const EXCEPTIONNOTFOUND& e)
    {
        std::cerr << e.what() << '\n';
    }
    
}