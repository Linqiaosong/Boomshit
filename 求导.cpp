#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    double a,d,backward,Forwa_Rd,result;
    cout<<"Input a\n";
    cin>>a;//求导的点
    cout<<"Input d\n";
    cin>>d;//精度值
    double i=a+d;//x+dx
    Forwa_Rd=i*i;//f(x+dx)
    backward=a*a;//f(x)
    result=(Forwa_Rd-backward)/d;
    cout<<"The result is "<<result<<endl;
    return 0;
}
