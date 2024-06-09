#ifndef CNUM_MATRIX_HPP
#define CNUM_MATRIX_HPP

#include "pair.hpp"
#include "vector.hpp"

namespace cnum{
    class Matrix{
        public:
            //init Matrix
            Matrix (int rows , int column){
                rows = rows; columns = column;
            }
            
            //Return columns and row as a pair of number
            Pair<int , int> shape(){
                return Pair<int , int>(columns , rows);
            }

        private:
            int rows; int columns;

    };
}
#endif
