#include<iostream>

using namespace std;

void Print(long n,long N);

int main()
{
  long n,i;
  cout<<"Please input the layers of the Christmas tree: ";
  cin>>n;
  for(i=1;i<=n;i++)
    Print(i+1,n);
  cout<<endl;
  cout<<"Merry Christmas!"<<endl;
  return 0;
}

void Print(long n,long N)
{
  long al=1,sp=N,i;
  for(i=0; i<n; i++)
  {
    long j=0;
    for(; j<sp; j++)
      cout<<' ';
    for(;j<sp+al;j++)
      cout<<'*';
    sp = sp-1;
    al = al+2;
    cout<<'\n';
  }
}
