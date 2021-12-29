#include<bits/stdc++.h>
using namespace std ;
int main(){
    int n ; 
    cin>> n ;
    int y = (5*n*n +4);
    int z = (5*n*n-4);
    if(sqrt(y)*sqrt(y)==y||sqrt(z)*sqrt(z)==z){
        cout<<"yes"<<endl ;

    }
    else {
        cout<< "no";
    }

}