// Hollow number diamond pattern
/*
    1
   1 2
  1   2
 1     2
1       2
 1     2
  1   2
   1 2
    1
*/

#include<iostream>
using namespace std;

int main()
{
    int size = 5;
    for (int i = 0; i < size; i++)
    {
        for (int j = 1; j < size-i; j++)
        {
            cout<<" ";
        }
        int num = 1;
        for (int k = 0; k < 2*i+1; k++)
        {
            if (i == 0 || i == size-1)
            {
                cout<<num++;
            }
            else
            {
                if (k == 0 || k == i*2)
                {
                    cout<<num++;
                }else
                {
                    cout<<" ";
                }
                
            }
        }
        cout<<endl;
    }
    
}