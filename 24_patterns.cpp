#include <iostream>
using namespace std;

// int main(){
//     int n;
//     cin>>n;

//     for(int i=0;i<n;i++){
//         for(int j=0;j<i+1;j++){
//             if(j%2==0){
//                 cout<<1<<"";
//             }
//             else{
//                 cout<<0<<"";
//             }
//         }
//         cout<<endl;
//     }
//     return 0;
// }



// int main(){
//     int n;
//     cin>>n;

//     for(int i=0;i<n;i++){
//         for(int j=0;j<i+1;j++){
//             if(i%2==0 && j%2==0){
//                 cout<<"*"<<"";
//             }
//             else if(i%2!=0){
//                 if(j%2==0){
//                     cout<<"@"<<"";
//                 }
//                 else{
//                     cout<<"*"<<"";
//                 }
//             }
//             else{
//                 cout<<"@"<<"";
//             }
//         }
//         cout<<endl;
//     }
//     return 0;
// }



// int main(){
//     int n;
//     cin>>n;

//     for(int i=0;i<n;i++){
//         for(int j=0;j<i+1;j++){
//             if(i%2==0 && j%2==0){
//                 cout<<1<<"";
//             }
//             else if(i%2!=0){
//                 if(j%2==0){
//                     cout<<0<<"";
//                 }
//                 else{
//                     cout<<1<<"";
//                 }
//             }
//             else{
//                 cout<<0<<"";
//             }
//         }
//         cout<<endl;
//     }
//     return 0;
// }



// int main(){
//     int n;
//     cin>>n;

//     // int k=1;
//     int k=15;
//     for(int i=0;i<n;i++){
//         for(int j=0;j<i+1;j++){
//             // cout<<k++<<" ";
//             cout<<k--<<" ";
//         }
//         cout<<endl;
//     }
//     return 0;
// }


// int main(){
//     int n;
//     cin>>n;

//     for(int i=0;i<n;i++){
//         char ch='a';
//         // char ch='A';
//         for(int j=0;j<i+1;j++){
//             cout<<ch++<<" ";
//         }
//         cout<<endl;
//     }
//     return 0;
// }
// int main(){
//     int n;
//     cin>>n;
//     for(int i=0;i<n;i++){
//         char ch = 'A'+i;
//         // char ch = 'a'+i;
//         for(int j=0;j<i+1;j++){
//             cout<<ch--<<" ";
//         }
//         cout<<endl;
//     }
//     return 0;
// }


int main(){
    int n;
    cin>>n;

    // char ch = '\n';
    for(int i=0;i<n;i++){
        for(int j=0;j<i+1;j++){
            if(i%2==0 && j%2==0){
                cout<<"\\"<<"";
            }
            else if(i%2!=0){
                if(j%2==0){
                    cout<<"/"<<"";
                }
                else{
                    cout<<"\\"<<"";
                }
            }
            else{
                cout<<"/"<<"";
            }
        }
        cout<<endl;
    }
    return 0;
}