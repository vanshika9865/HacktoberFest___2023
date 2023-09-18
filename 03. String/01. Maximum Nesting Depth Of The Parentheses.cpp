#include<bits/stdc++.h>
using namespace std;

int maxDepth(string s) {
    int count =0, ans = INT_MIN;
    for(int i : s){
        if(i == '(') count++;
        else if (i== ')') count -- ;
        ans = max(ans,count);
    }
    return ans;
}

int main(){
	string st = "(((((5)))))";
	cout<<maxDepth(st);
}
