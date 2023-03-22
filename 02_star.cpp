#include <iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int k=0;
    for(int i=1;i<=n;i++){
        if(i%2==0){
            for(int j=0;j<i+1;j++){
                cout<<"* ";
            }
            cout<<endl;
        }
        else{
            for(int j=0;j<i-k;j++){
                cout<<"* ";
            }
            k++;
            cout<<endl;
        }
    }
    return 0;
}


// aman rajak