//Coding Ninjas - Subsequences of a string

// #include <bits/stdc++.h> 

// void subs(string str,int index,string output,vector<string>& ans){
// 	if(index>=str.length()){
// 		if(output.length()>0){
// 		ans.push_back(output);
// 		}
// 		return;
// 	}

// 	//fOR EXCLUDE

// 	subs(str,index+1,output,ans);

// 	//For Include

// 	output.push_back(str[index]);

// 	subs(str,index+1,output,ans);
// }
// vector<string> subsequences(string str){
	
// 	vector<string>ans;

// 	string output = "";
// 	int index = 0;

// 	subs(str,index,output,ans);
// 	return ans;

	
// }
