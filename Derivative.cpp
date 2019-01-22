#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    double a,d,backward,Forwa_Rd,result;
    cout<<"Input a\n";
    cin>>a;
    cout<<"Input d\n";
    cin>>d;
    double i=a+d;//x+dx
    Forwa_Rd=i*i;//f(x+dx)
    backward=a*a;//f(x)
    result=(Forwa_Rd-backward)/d;
    cout<<"The result is "<<result<<endl;
    return 0;
}
