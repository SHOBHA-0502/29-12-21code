/*#include<iostream>
using namespace std;


int main(){
int n ;
    cin>>n ;
    for(int i = 1 ; i<= n ; i++){
        for(int j =1 ; j<=n-i ; j++){
            cout<<" ";
        }
        for(int k = 1; k <=i ; k++){
            cout<< "*";
        }
        for(int l = i-1 ; l>=1 ; l--){
            cout<<"*";
        }
        cout<< endl ;
    }
    
  
}*/
/*#include <iostream>
using namespace std;

int main() {
    int n ; 
    cin>> n ; 
    for(int i =1 ; i<= n ; i++){
        for(int j =1 ; j<=n-i ; j++){
            cout<< " ";
        }
        for(int k = 1 ; k<= i ; k++){
            cout<< i+k-1;
        }
        for(int l = 2*i-2 ; l>=i ; l--){
            cout<< l ;
        }
        cout<< endl ;
    }
    
}*/
#include<bits/stdc++.h>
using namespace std ;

int main(){
    int t ;
    cin>>t;
    while(t--){
         int n ; 
         cin>>n;
        
         string s;
         vector<int> v1;
         vector<int> v2{0};
         for(int i =0 ; i< n; i++){
             int x ;
             cin>> x ;
             v1.push_back(x);

         }
         cin>> s;
         sort(v1.begin(),v1.end());
         
         for(int i =0, j =n-1;i!=j;i++,j--){
             if(s[i]==0){
                 v2.push_back(v1[i]);
             }
             else{v2.push_back(v1[j]);}
         }
         for(int i =0 ;i<n ; i++){
             cout<< v2[i]<< " "<<endl;
         }
}
}



