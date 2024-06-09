#ifndef CNUM_VECTOR_HPP
#define CNUM_VECTOR_HPP

//it has to be dynamic 


/// @brief similar to array but allow use to access dynamically
//  one pointer for (what idk) one for accessing the end address and the begining addrss 
// function i want is same as numpy all push pop delete should have 
namespace cnum{
    template <typename T> class vector{
        T* arr;
        T* end; 
        T* begin; 
        int capacity; 
        int size;
        public: 
        private:
         

    };
}

#endif