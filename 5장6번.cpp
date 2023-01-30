/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include <cstring>

using namespace std;

char& find(char a[], char c, bool& success){
    for(int i=0;i<strlen(a);i++){  //for(int i=0; a[i] != NULL ; i++) 이방법도 있었다
        if(a[i]==c){
            success = true;
            return a[i];
        }
        else
        success == false;
    }
}

int main()
{
    char s[] = "Mike";
    bool b = false;
    char &loc = find(s, 'M', b);
    if(b==false){
        cout << "M을 발견할 수 없다" << endl;
        return 0;
    }
    loc = 'm';
    cout << s << endl;
}
