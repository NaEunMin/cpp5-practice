/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

void half(double &num){
    num=num/2; //num/=2;
}

int main()
{
   double n=20;
   half(n);
   cout << n;

    return 0;
}
