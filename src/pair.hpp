#ifndef CNUM_ARRAY_HPP
#define CNUM_ARRAY_HPP

namespace cnum{
    template <class A , class B> class Pair{
        public:
            Pair(A a, B b){
                x=a; y=b;
            }

            A first(){
                return x;
            }

            A first(A a){
                x = a; return x;
            }

            B second(){
                return y;
            }

            B second(B b){
                y = b; return y;
            }
            
        private:
            A x; B y;
    };
}

#endif
