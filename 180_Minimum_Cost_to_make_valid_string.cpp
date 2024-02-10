
// Minimum cost to make a string valid - Coding Ninjas
/*
#include <bits/stdc++.h> 
#include <stack>
 
int findMinimumCost(string str) {
  
  int len1 = str.length();

  //for checking odd
  if(len1%2!=0){
    return -1;
  }

  stack<char> s;

  //valid part removal
  for(int i = 0;i<len1;i++){
    char ch = str[i];

    if(ch == '{'){
      s.push(ch);
    }else{
      if(!s.empty() && s.top() == '{'){
        s.pop();
      }
      else{
        s.push(ch);
      }
    }
  }

  //Now stack contains invalid part
  int a = 0,b = 0;

  while(!s.empty()){
    if(s.top() == '{'){
      b++; // count of open brace
    }else{
      a++; // count of close brace
    }
    s.pop();
  }
  int ans = (a+1)/2 + (b+1)/2;


  return ans;
}.
*/