// Hollow pyramid star pattern
/*
    1
   1 2
  1   2
 1     2
123456789        

*/
#include<iostream>
using namespace std;

int main()
{
    int size = 5;

    for (int i = 0; i < size; i++)
    {
        for (int k = 0; k < size-i-1    ; k++)
        {
            cout<<" ";
        }
        int num = 1;
        for (int j = 0; j < 2*i+1; j++)
        {
            if (i == 0 || i == size-1)
            {
                cout<<num++;
            }
            else
            {
                if (j == 0 || j == 2*i)
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