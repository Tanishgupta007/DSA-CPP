//gfg

class Solution{
  public:
    string convertToRoman(int n) {
        int num[] = {1,4,5,9,10,40,50,90,100,400,500,900,1000};
        string str[] = {"I","IV","V","IX","X","XL","L","XC","C","CD","D","CM","M"};
    
        int i = 12;
        string ans = "";
        while(n > 0){
            int div = n/num[i];
            n = n & num[i];
            
            while(div--){
                ans+=str[i];
            }
            i--;
        }
        
        return ans;
    }
    
};