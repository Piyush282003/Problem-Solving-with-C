#include <bits/stdc++.h>
#include <stack>
using namespace std;

int main(){
    string s;
    getline(cin,s);

    stack<string> st;
    string wrds="";
    for(int i=0;i<s.length();i++){
        while(s[i]!=' ' && i<s.length()){
            wrds+=s[i++];
            continue;
        }
        st.push(wrds);
        wrds="";
    }

    while(!st.empty()){
        cout<<st.top()<<" ";
        st.pop();
    }
    return 0;
}