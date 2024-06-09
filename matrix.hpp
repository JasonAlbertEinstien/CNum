#include <iostream> 
#include <functional>
#ifndef MATRIX
#define MATRIX

class Matrix{
    public:
        //init Matrix
        Matrix (int rows , int column){
            rows = rows; columns = column;
        }
        
        //Return columns and row as a pair of number
        std::pair<int , int> shape(){
            return std::make_pair(columns , rows);
        }

    private:
        int rows; int columns;

};

#endif
