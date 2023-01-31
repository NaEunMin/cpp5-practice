/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

class MyIntStack{
    int p[10]; //최대 10개 정수 저장
    int tos; //스택의 꼭대기를 가리키는 인덱스
    public:
    MyIntStack();
    bool push(int n);
    bool pop(int &n);
};

MyIntStack::MyIntStack(){
    tos = -1;
}

bool push(int n){ //push란 스택 꼭대기에 추가하는 것
    if (tos >= 9) return false; //더 이상 push할 수 없다면 false 리턴
	p[++tos] = n; //현재스택 꼭대기 인덱스에 push
	return true; //push할 수 있다면 true 리턴
}

bool pop(int &n){ //pop이란 스택 꼭대기를 제거하는 것
    if(tos<=0) // 더 이상 pop할 수 없다면 false 리턴
    return false;
    n=p[tos--]; //현재 꼭대기 층 pop해서 n에 저장
    return true;
}

int main()
{
    MyIntStack a;
    for(int i=0; i<11; i++){ //11개 푸시하면 마지막은 stack full이 됨.
        if(a.push(i)) cout << i << ' ';
        else cout << endl << i+1 << " 번째 stack full";
    }
    int n;
    for(int i=0; i<11; i++){ //11개 팝하면 마지막은 stack empty이 됨.
        if(a.pop(n)) cout << n << ' ';
        else cout << endl << i+1 << " 번째 stack empty";
    }
    cout << endl;

    return 0;
}
