#include <iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        int k=i+1,m=2*i;
        for(int spaces=1;spaces<n-i;spaces++){
            cout<<" ";
        }
        for(int j=0;j<i+1;j++){
            cout<<k++<<"";
        }

        for(int j=1;j<i+1;j++){
            cout<<m--<<"";
        }cout<<endl;
        
    }
    return 0;
}