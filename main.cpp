#include "matrix.hpp"
#include "pair.hpp"

#include <iostream>

int main(){
    cnum::Pair<int , int> p(1,2);
    
    std::cout<<p.first()<<std::endl;
    std::cout<<p.first(3)<<std::endl;

    cnum::Matrix m(1,2);
    p = m.shape();
    std::cout<<p.first()<<std::endl;
    std::cout<<p.second(3)<<std::endl;

    return 0;
}