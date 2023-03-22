#include <iostream>
using namespace std;

int main(){
    int n;
    cout<<"enter the input\n";
    cin>>n;

    if(n/1>0){
        cout<<"One rupee "<<n/1<<endl;
        if(n/2>0){
            cout<<"Two rupee "<<n/2<<" and ";
            int a = n%2;
            if(a%2==0 && a/2>0){
                cout<<"Two rupee "<<a/2<<" and ";
                cout<<"One rupee "<<a/1<<endl;
            }
            else{
                cout<<"One rupee "<<a/1<<endl;
            }
            
        }
        if(n/5>0){
            cout<<"Five rupee "<<n/5<<" and ";
            int a = n%5;
            if(a%2==0){
                cout<<"Two rupee "<<a/2<<" or ";
                cout<<"One rupee "<<a/1<<endl;
            }
            else{
                cout<<"One rupee "<<a/1<<endl;
            }
            
        }
        if(n/10>0){
            cout<<"Ten rupee "<<n/10<<" and ";
            int a = n%10;
            if(a/5>0){
                cout<<"Five rupee "<<a/5<<endl;
                a = a%5;
            }
            else if(a%5==0){
                cout<<"Five rupee "<<a/5<<" or ";
                cout<<"Two rupee "<<a/2<<" or ";
                cout<<"One rupee "<<a/1<<endl;
            }
            else if(a%2==0){
                cout<<"Two rupee "<<a/2<<" or ";
                cout<<"One rupee "<<a/1<<endl;
            }
            else{
                cout<<"One rupee "<<a/1<<endl;
            }
            
        }
        if(n/50>0){
            cout<<"Fifty rupee "<<n/50<<" and ";
            int a = n%50;
            if(a/10>0){
                cout<<"Ten rupee "<<a/10<<" and ";
                a=a%10;
            }
            if(a%10==0){
                cout<<"ten rupee "<<a/10<<" or ";
                cout<<"Five rupee "<<a/5<<" or ";
                cout<<"Two rupee "<<a/2<<" or ";
                cout<<"One rupee "<<a/1<<endl;
            }
            if(a/5>0){
                cout<<"Five rupee "<<a/5<<" and ";
                a = a%5;
            }
            if(a%5==0){
                cout<<"Five rupee "<<a/5<<" or ";
                cout<<"Two rupee "<<a/2<<" or ";
                cout<<"One rupee "<<a/1<<endl;
            }
            else if(a%2==0){
                cout<<"Two rupee "<<a/2<<" or ";
                cout<<"One rupee "<<a/1<<endl;
            }
            else{
                cout<<"One rupee "<<a/1<<endl;
            }
            
        }


        if(n/100>0){
            cout<<"Hundred rupee "<<n/100<<" and ";
            int a = n%100;
            // cout<<"***********"<<a<<"**********8888\n";
            if(a/50>0){
                cout<<"Fifty rupee "<<a/50<<" and ";
                a=a%50;
            }
            if(a%50==0){
                cout<<"Fifty rupee "<<a/50<<" or ";
                cout<<"ten rupee "<<a/10<<" or ";
                cout<<"Five rupee "<<a/5<<" or ";
                cout<<"Two rupee "<<a/2<<" or ";
                cout<<"One rupee "<<a/1<<endl;
            }
            if(a/10>0){
                cout<<"Ten rupee "<<a/10<<" and ";
                a=a%10;
            }
            if(a%10==0){
                cout<<"ten rupee "<<a/10<<" or ";
                cout<<"Five rupee "<<a/5<<" or ";
                cout<<"Two rupee "<<a/2<<" or ";
                cout<<"One rupee "<<a/1<<endl;
            }
            if(a/5>0){
                cout<<"Five rupee "<<a/5<<" and ";
                a = a%5;
            }
            if(a%5==0){
                cout<<"Five rupee "<<a/5<<" or ";
                cout<<"Two rupee "<<a/2<<" or ";
                cout<<"One rupee "<<a/1<<endl;
            }
            else if(a%2==0){
                cout<<"Two rupee "<<a/2<<" or ";
                cout<<"One rupee "<<a/1<<endl;
            }
            else{
                cout<<"One rupee "<<a/1<<endl;
            }
            
        }

        if(n/200>0){
            cout<<"Two Hundred rupee "<<n/200<<" and ";
            int a = n%200;
            // cout<<"***********"<<a<<"**********8888\n";
            if(a/100>0){
                cout<<"Hundred rupee "<<a/100<<" and ";
                a=a%100;
            }
            if(a%100==0){
                cout<<"Hundred rupee "<<a/100<<" or ";
                cout<<"Fifty rupee "<<a/50<<" or ";
                cout<<"ten rupee "<<a/10<<" or ";
                cout<<"Five rupee "<<a/5<<" or ";
                cout<<"Two rupee "<<a/2<<" or ";
                cout<<"One rupee "<<a/1<<endl;
            }
            if(a/50>0){
                cout<<"Fifty rupee "<<a/50<<" and ";
                a=a%50;
            }
            if(a%50==0){
                cout<<"Fifty rupee "<<a/50<<" or ";
                cout<<"ten rupee "<<a/10<<" or ";
                cout<<"Five rupee "<<a/5<<" or ";
                cout<<"Two rupee "<<a/2<<" or ";
                cout<<"One rupee "<<a/1<<endl;
            }
            if(a/10>0){
                cout<<"Ten rupee "<<a/10<<" and ";
                a=a%10;
            }
            if(a%10==0){
                cout<<"ten rupee "<<a/10<<" or ";
                cout<<"Five rupee "<<a/5<<" or ";
                cout<<"Two rupee "<<a/2<<" or ";
                cout<<"One rupee "<<a/1<<endl;
            }
            if(a/5>0){
                cout<<"Five rupee "<<a/5<<" and ";
                a = a%5;
            }
            if(a%5==0){
                cout<<"Five rupee "<<a/5<<" or ";
                cout<<"Two rupee "<<a/2<<" or ";
                cout<<"One rupee "<<a/1<<endl;
            }
            else if(a%2==0){
                cout<<"Two rupee "<<a/2<<" or ";
                cout<<"One rupee "<<a/1<<endl;
            }
            else{
                cout<<"One rupee "<<a/1<<endl;
            }
            
        }
        if(n/500>0){
            cout<<"Five Hundred rupee "<<n/500<<" and ";
            int a = n%500;
            // cout<<"***********"<<a<<"**********8888\n";
            if(a/200>0){
                cout<<"Two Hundred rupee "<<a/200<<" and ";
                a=a%200;
            }
            if(a%200==0){
                cout<<"Two Hundred rupee "<<a/200<<" or ";
                cout<<"Hundred rupee "<<a/100<<" or ";
                cout<<"Fifty rupee "<<a/50<<" or ";
                cout<<"ten rupee "<<a/10<<" or ";
                cout<<"Five rupee "<<a/5<<" or ";
                cout<<"Two rupee "<<a/2<<" or ";
                cout<<"One rupee "<<a/1<<endl;
            }
            if(a/100>0){
                cout<<"Hundred rupee "<<a/100<<" and ";
                a=a%100;
            }
            if(a%100==0){
                cout<<"Hundred rupee "<<a/100<<" or ";
                cout<<"Fifty rupee "<<a/50<<" or ";
                cout<<"ten rupee "<<a/10<<" or ";
                cout<<"Five rupee "<<a/5<<" or ";
                cout<<"Two rupee "<<a/2<<" or ";
                cout<<"One rupee "<<a/1<<endl;
            }
            if(a/50>0){
                cout<<"Fifty rupee "<<a/50<<" and ";
                a=a%50;
            }
            if(a%50==0){
                cout<<"Fifty rupee "<<a/50<<" or ";
                cout<<"ten rupee "<<a/10<<" or ";
                cout<<"Five rupee "<<a/5<<" or ";
                cout<<"Two rupee "<<a/2<<" or ";
                cout<<"One rupee "<<a/1<<endl;
            }
            if(a/10>0){
                cout<<"Ten rupee "<<a/10<<" and ";
                a=a%10;
            }
            if(a%10==0){
                cout<<"ten rupee "<<a/10<<" or ";
                cout<<"Five rupee "<<a/5<<" or ";
                cout<<"Two rupee "<<a/2<<" or ";
                cout<<"One rupee "<<a/1<<endl;
            }
            if(a/5>0){
                cout<<"Five rupee "<<a/5<<" and ";
                a = a%5;
            }
            if(a%5==0){
                cout<<"Five rupee "<<a/5<<" or ";
                cout<<"Two rupee "<<a/2<<" or ";
                cout<<"One rupee "<<a/1<<endl;
            }
            else if(a%2==0){
                cout<<"Two rupee "<<a/2<<" or ";
                cout<<"One rupee "<<a/1<<endl;
            }
            else{
                cout<<"One rupee "<<a/1<<endl;
            }
            
        }

        if(n/2000>0){
            cout<<"Two Thousand rupee "<<n/2000<<" and ";
            int a = n%2000;
            // cout<<"***********"<<a<<"**********8888\n";
            if(a/500>0){
                cout<<"Five Hundred rupee "<<a/500<<" and ";
                a=a%500;
            }
            if(a%200==0){
                cout<<"Two Hundred rupee "<<a/200<<" or ";
                cout<<"Hundred rupee "<<a/100<<" or ";
                cout<<"Fifty rupee "<<a/50<<" or ";
                cout<<"ten rupee "<<a/10<<" or ";
                cout<<"Five rupee "<<a/5<<" or ";
                cout<<"Two rupee "<<a/2<<" or ";
                cout<<"One rupee "<<a/1<<endl;
            }
            if(a/100>0){
                cout<<"Hundred rupee "<<a/100<<" and ";
                a=a%100;
            }
            if(a%100==0){
                cout<<"Hundred rupee "<<a/100<<" or ";
                cout<<"Fifty rupee "<<a/50<<" or ";
                cout<<"ten rupee "<<a/10<<" or ";
                cout<<"Five rupee "<<a/5<<" or ";
                cout<<"Two rupee "<<a/2<<" or ";
                cout<<"One rupee "<<a/1<<endl;
            }
            if(a/50>0){
                cout<<"Fifty rupee "<<a/50<<" and ";
                a=a%50;
            }
            if(a%50==0){
                cout<<"Fifty rupee "<<a/50<<" or ";
                cout<<"ten rupee "<<a/10<<" or ";
                cout<<"Five rupee "<<a/5<<" or ";
                cout<<"Two rupee "<<a/2<<" or ";
                cout<<"One rupee "<<a/1<<endl;
            }
            if(a/10>0){
                cout<<"Ten rupee "<<a/10<<" and ";
                a=a%10;
            }
            if(a%10==0){
                cout<<"ten rupee "<<a/10<<" or ";
                cout<<"Five rupee "<<a/5<<" or ";
                cout<<"Two rupee "<<a/2<<" or ";
                cout<<"One rupee "<<a/1<<endl;
            }
            if(a/5>0){
                cout<<"Five rupee "<<a/5<<" and ";
                a = a%5;
            }
            if(a%5==0){
                cout<<"Five rupee "<<a/5<<" or ";
                cout<<"Two rupee "<<a/2<<" or ";
                cout<<"One rupee "<<a/1<<endl;
            }
            else if(a%2==0){
                cout<<"Two rupee "<<a/2<<" or ";
                cout<<"One rupee "<<a/1<<endl;
            }
            else{
                cout<<"One rupee "<<a/1<<endl;
            }
            
        }
    }
    return 0;
}