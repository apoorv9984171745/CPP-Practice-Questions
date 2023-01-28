# include <iostream>

using namespace std;
int main(){
    int a,b,c;
    cout<<"Enter first number: ";
    cin>>a;
    cout<<"Enter second number ";
    cin>>b;
    c=a;
    a=b;
    b=c;
    cout<<"swapped value of first number: "<<a;
    cout<<"Swapped value of second number: "<<b;
    return 0;


}