/*
1
21
321
4321
*/
#include<iostream>
using namespace std;

int main()
{
  int i = 1;
  int n = 5;

  while (i<=n)
  {
    int j = 1;
    while (j<=i)
    {

        cout<<i-j+1;
        j+=1;
    }
    cout<<endl;
    i+=1;
  }
    
}