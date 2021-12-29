#include<bits/stdc++.h>
using namespace std ;

int main(){
    long long int t ;
    cin>>t;
    while(t--){
       long long int n ; 
       cin>>n ;
       string s;
       int k =0;
       cin>> s ;
       for(int i =1 ; i<=n ; i++){
           
           if(s[i]<= s[i+1]){
              
               k +=i-1;
                
               break;
           }
       }
       cout<< k ;
       if(k !=0){
           for(int i =1 ; i<=k ; i++){
               cout<< s[i];
           }
           for(int j = k ; j>=1 ; j--){
               cout<< s[j];
           }
       }
       else{
           for(int i =1 ; i<=n ; i++){
               cout<< s[i];
           }
           for(int j = n ; j>=1 ; j--){
               cout<< s[j];
           }

       }

       
       
    }
}