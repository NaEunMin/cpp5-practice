/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

class MyIntStack{
    int *p; //스택 메모리로 사용할 포인터
    int size; //스택의 최대 크기
    int tos; //스택의 꼭대기를 가리키는 인덱스
    public:
    MyIntStack();
    MyIntStack(int size);
    MyIntStack(const MyIntStack& s); //복사 생성자
    ~MyIntStack();
    bool push(int n);
    bool pop(int &n);
};

MyIntStack::MyIntStack(){
    tos = -1;
}

MyIntStack::MyIntStack(int size){
    this->size = size;
    p=new int[size];
    tos = -1;
}

MyIntStack::MyIntStack(const MyIntStack& s){
    this->size = s.size;
    this->tos = s.tos;
    this->p = new int[s.size];
}

MyIntStack::~MyIntStack(){
    delete [] p;
}

bool MyIntStack::push(int n){ //push란 스택 꼭대기에 추가하는 것
    if (tos >= 9) return false; //더 이상 push할 수 없다면 false 리턴
	p[++tos] = n; //현재스택 꼭대기 인덱스에 push
	return true; //push할 수 있다면 true 리턴
}

bool MyIntStack::pop(int &n){ //pop이란 스택 꼭대기를 제거하는 것
    if(tos<0) // 더 이상 pop할 수 없다면 false 리턴
    return false;
    n=p[tos--]; //현재 꼭대기 층 pop해서 n에 저장
    return true;
}

int main()
{
    MyIntStack a(10);
    a.push(10);
    a.push(20);
    MyIntStack b = a;
    b.push(30);
    
    int n;
    a.pop(n);
    cout << "스택 a에서 팝한 값 " << n << endl;
    b.pop(n);
    cout << "스택 b에서 팝한 값 " << n << endl;
    return 0;
}
