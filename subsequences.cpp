<<<<<<< HEAD
#include <bits/stdc++.h> 
void solve(vector<string>& ans, string str, string output, int i) {
    //base case
    if(i>=str.length()) {
        if(output.length()>0)
        ans.push_back(output);
        return ;
        }
    
    //exclude
    solve(ans, str, output, i+1);
    //include
    output.push_back(str[i]);
    solve(ans, str, output, i+1);
}

vector<string> subsequences(string str){
	
	vector<string> ans;
    string output = "";
    solve(ans,str,output,0);
    return ans;
	
=======
#include <bits/stdc++.h> 
void solve(vector<string>& ans, string str, string output, int i) {
    //base case
    if(i>=str.length()) {
        if(output.length()>0)
        ans.push_back(output);
        return ;
        }
    
    //exclude
    solve(ans, str, output, i+1);
    //include
    output.push_back(str[i]);
    solve(ans, str, output, i+1);
}

vector<string> subsequences(string str){
	
	vector<string> ans;
    string output = "";
    solve(ans,str,output,0);
    return ans;
	
>>>>>>> 910b4b5bd767c05d4ab0dfbc9920d5efb3421c48
}