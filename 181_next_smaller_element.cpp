// Next smaller element 

/*

#include<stack>

vector<int> nextSmallerElement(vector<int> &arr, int n) {
  stack<int> s;
  s.push(-1);

  vector<int> ans(n);

  for (int i = n - 1; i >= 0; i--) {
    int curr = arr[i];

    while (!s.empty() && s.top() >= curr) {
      s.pop();
    }
    ans[i] = s.top();
    s.push(curr);
  }
  return ans;
}

*/