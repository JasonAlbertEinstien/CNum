#ifndef CNUM_VECTOR_HPP
#include "vector.hpp"
#endif

#ifndef CNUM_ARRAY_HPP
#include "pair.hpp"
#endif

#ifndef CNUM_REGRESSION_HH
#define CNUM_REGRESSION_HH
namespace cnum{
    // @brief Regression only allows people to use float as an input format
    // Not accept any other format
    class linear_model{
        vector <Pair <double , double> > v;
        public:
            linear_model(vector< Pair<double , double> > v){
                vector <Pair<double , double> > v = v;
            }

            linear_model(){
                vector <Pair<double , double> > v = v;
            }
            double LinearRegression(){
                v.size();
                //min (y - (a + bx))^2 
            }

    };
}
#endif