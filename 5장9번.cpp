/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

class Accumulator{
    int value;
    public:
    Accumulator(int value){this->value = value;}
    Accumulator& add(int n);
    int get(){return value;}
};

Accumulator& Accumulator::add(int n){
    value+=n;
    return *this;
} 
int main()
{
    Accumulator acc(10);
    acc.add(5).add(6).add(7);
    cout << acc.get();

    return 0;
}
