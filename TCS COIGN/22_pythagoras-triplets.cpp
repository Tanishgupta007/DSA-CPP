#include<iostream>
#include<cmath>
using namespace std;

int main()
{
    int n = 20000;


    for (int i = 1; i <= n; i++)
    {
        for (int j = i+1; j <= n; j++)
        {
            double k = sqrt(i*i+j*j);

            if(k == floor(k) && k <= n){
                cout<<i<<" "<<j<<" "<<k<<endl;
            } 
            
        }
        
    }
    


}