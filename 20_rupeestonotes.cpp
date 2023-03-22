#include <iostream>
using namespace std;

int main(){
    int n;
    cin>>n;

    if(n/1>0){
        cout<<"1 "<<n/1<<endl;
        n = n/1;
    }
    if(n/2000>0){
        cout<<"2000 "<<n/2000<<endl;
        n = n/2000;
        if(n/500>0){
        cout<<"500 "<<n/500<<endl;
        n = n%500;
        if(n/200>0){
            cout<<"200 "<<n/200<<endl;
            n = n%200;
            if(n/100>0){
                cout<<"100 "<<n/100<<endl;
                n = n%100;
                if(n/50>0){
                    cout<<"50 "<<n/50<<endl;
                    n=n%50;
                    if(n/10>0){
                        cout<<"10 "<<n/10<<endl;
                        n = n%10;
                        if(n/5>0){
                            cout<<"5 "<<n/5<<endl;
                            n = n%5;
                            if(n/2>0){
                                cout<<"2 "<<n/2<<endl;
                                n=n%2;
                                if(n/1>0){
                                    cout<<"1 "<<n/1<<endl;
                                    n=n%1;
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    }
    if(n/500>0){
        cout<<"500 "<<n/500<<endl;
        n = n%500;
        if(n/200>0){
            cout<<"200 "<<n/200<<endl;
            n = n%200;
            if(n/100>0){
                cout<<"100 "<<n/100<<endl;
                n = n%100;
                if(n/50>0){
                    cout<<"50 "<<n/50<<endl;
                    n=n%50;
                    if(n/10>0){
                        cout<<"10 "<<n/10<<endl;
                        n = n%10;
                        if(n/5>0){
                            cout<<"5 "<<n/5<<endl;
                            n = n%5;
                            if(n/2>0){
                                cout<<"2 "<<n/2<<endl;
                                n=n%2;
                                if(n/1>0){
                                    cout<<"1 "<<n/1<<endl;
                                    n=n%1;
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    if(n/200>0){
        cout<<"200 "<<n/200<<endl;
        n = n/200;
    }
    if(n/100>0){
        cout<<"100 "<<n/100<<endl;
        n = n/100;
    }
    if(n/50>0){
        cout<<"50 "<<n/50<<endl;
        n = n/50;
    }
    if(n/10>0){
        cout<<"10 "<<n/10<<endl;
        n = n/10;
    }
    if(n/5>0){
        cout<<"5 "<<n/5<<endl;
        n = n/5;
        
    }
    if(n/2>0){
        cout<<"2 "<<n/2<<endl;
        n = n/2;
    }
    return 0;
}