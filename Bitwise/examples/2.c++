#include <iostream>
using namespace std;

int main()
{
    int a=1;
    int b=2;

    if(a-- >0 && ++b > 2)   //if(1>0 && 3>2), a=0,b=3
    cout<< "Stage1 - Inside If "; //execute
    else
    cout<<"Stage2 - Inside else ";

    cout<< a<< " "<< b << endl; // 0 3
}