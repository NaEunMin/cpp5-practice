/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include <cstring>
using namespace std;

class Dept{
  int size;
  int *scores;
  public:
  Dept(int size){
      this->size = size; 
      scores = new int[size];
  }
  
  /*Dept(const Dept &dept){
    this->size = dept.size;
    this->scores = new int[dept.size];
    for(int i=0;i<dept.size;i++){
        scores[i]=dept.scores[i];
      
  }
 }*/ 
  ~Dept(){
      if(scores)
      delete [] scores;
  }
  
  int getSize(){return size;}
  void read();
  bool isOver60(int index);
};

void Dept::read(){
    cout << "10개 정수 입력 >>";
    for(int i=0;i<size;i++){
        cin >> scores[i];
    }
}

bool Dept::isOver60(int index){
    if(scores[index]>60)
    return true;
    else
    return false;
}

int countPass(Dept &dept){
    int count=0;
    for(int i=0; i<dept.getSize(); i++){
        if(dept.isOver60(i))
        count++;
    }
    return count;
}


int main(){
    Dept com(10);
    com.read();
    int n = countPass(com);
    cout << "60점 이상은 " << n << "명";
    return 0;
}
