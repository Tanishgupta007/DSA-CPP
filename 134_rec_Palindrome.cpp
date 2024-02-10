#include<iostream>
using namespace std;

bool palindrome(string str,int i,int j)
{
    string temp = str;
    
    if(i>j){
        return 1;
    }
    if(str[i] != str[j]){
        return 0;  
    }else{
        i++;
        j--;
        palindrome(str,i,j);

    }
    
}
int main()
{
    string str;
    cin>>str;
    int i = 0,j = str.length()-1;
    
    bool res = palindrome(str,i,j);

    if(res){
        cout<<"Yes ";
    }else{
        cout<<"No ";
    }

}




// #include<iostream>
// using namespace std;

// bool palindrome(string str){

//     string temp = str;
//     int i = 0,j = str.length()-1;
    
//     while (i<j)
//     {
//         swap(temp[i++],temp[j--]);
//     }

//     if (temp == str)
//     {
//         return 1;
//     }
//     else{
//         return 0;
//     }
    
// }
// int main()
// {
//     string str;
//     cin>>str;

//     if(palindrome(str)){
//         cout<<"Yes";
//     }
//     else
//     {
//         cout<<"No";
//     }
// }