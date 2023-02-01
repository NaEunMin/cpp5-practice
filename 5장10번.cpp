/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include <string>
using namespace std;

class Buffer{
    string text;
    public:
    Buffer(string text){this->text = text;}
    void add(string next){text+=next;}
    void print(){cout << text << endl;}
    Buffer& append(Buffer &b,string str);
};

Buffer& append(Buffer &b, string str){ //b는 객체buf에 대한 참조(공간을 공유함)
    b.add(str);
    return b;
}
int main()
{
    Buffer buf("Hello");
    Buffer& temp = append(buf, "Guys");
    temp.print();
    buf.print();
    return 0;
}
