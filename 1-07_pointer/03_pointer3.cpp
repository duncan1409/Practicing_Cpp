#include <iostream>
using namespace std;

int main()
{
    int num=147;
    int*pNum0=&num;
    int*pNum1=&num;
    int*pNum2=&num;

    cout<<&num<<endl;
    cout<<pNum0<<endl;
    cout<<pNum1<<endl;
    cout<<pNum2<<endl;
    cout<<endl;
    
    cout<<num<<endl;
    cout<<*pNum0<<endl;
    cout<<*pNum1<<endl;
    cout<<*pNum2<<endl;
    cout<<endl;

    num=100;
    cout<<*pNum0<<endl;
    cout<<*pNum1<<endl;
    cout<<*pNum2<<endl;
    cout<<endl;


}