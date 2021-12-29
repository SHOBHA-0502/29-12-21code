#include<bits/stdc++.h>
using namespace std ;

int main(){
    int t ;
    cin>>t;
    while(t--){
       int ans =0;
       int n,m,rb,cb,rd,cd;
       cin>>n>>m>>rb>>cb>>rd>>cd;
       int dr,dc;
       dr=dc=1;
       while(1)
       {
           if(rb == rd or cb ==cd) break;
           if(dr ==1 and rb == n )dr =-1;
           else if(dr ==-1 and rb == 1) dr =1;
            if(dc ==1 and cb == n )dr =-1;
           else if(dc ==-1 and cb == 1) dr =1;
           rb += dr;
           cb +=dc;
           ans ++;


       }
       cout<< ans << endl;
       
       
    }
}