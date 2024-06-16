#include "src/matrix.hpp"
#include "src/pair.hpp"
#include "src/vector.hpp"

#include <iostream>
//for testing purpose
int main(){
    cnum::Pair<int , int> p(1,2);
    
    std::cout<<p.first()<<std::endl;
    std::cout<<p.first(3)<<std::endl;

    cnum::Matrix m(1,2);
    p = m.shape();
    std::cout<<p.first()<<std::endl;
    std::cout<<p.second(3)<<std::endl;

    cnum::vector<int> v;
    for(int i = 0 ; i<10 ; i++){
        v.push_back(i+1);
    }
    for(int i = 0 ; i<10; i++){
        std::cout<<v.get(i)<<" ";
    }
    std::cout<<std::endl<<v.size()<<std::endl;


    return 0;
}