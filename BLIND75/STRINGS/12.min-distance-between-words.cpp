class Solution{
public:	
	
	int shortestDistance(vector<string> &s, string word1, string word2)
	{
	    int count = INT_MAX;
	    int i=0;
	    int index1 = -1,index2 = -1;
		while(i<s.size()){
		    if(s[i] == word1 && s[i] == word2){
		        return 0;
		    }else if(s[i] == word1){
		     
		       index1 = i;
		       if(index2 != -1){
		          count = min(count, abs(index1-index2)) ;  
		       }
		        
		    }else if(s[i] == word2){
		        index2 = i;
		        
		        if(index1 != -1){
		            count = min(count, abs(index1-index2));
		        }
		    }
		    i++;
		}
		return count;
	}
};