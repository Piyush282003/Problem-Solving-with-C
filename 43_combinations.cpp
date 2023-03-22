#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void combination(char s[],int n,int r,string output,int index){
    if(index==n){
        if(output.length()==r){
            for(int i=0;i<output.length();i++){
                cout<<output[i]<<" ";
            }
            cout<<endl;
        }
        return;
    }

    combination(s,n,r,output,index+1);

    char ele = s[index];
    output.push_back(ele);
    combination(s,n,r,output,index+1);

}
int main(){
    char set[]={'a','a','b','c'};
    // char set[]={'a','b','c','d','e'};
    // char set[]={'1','2','3'};
    int n = sizeof(set)/sizeof(set[0]);
    cout<<"Enter the length of combination\n";
    int r;
    cin>>r;
    string output;
    combination(set,n,r,output,0);
    return 0;
}