#include<bits\stdc++.h>
using namespace std ;
int main(){
    int n ; 
    cin>>n ; 
    int first =0 ;
    int second = 1 ;
    cout<<first << endl;
    for(int i = 0 ; i< n ; i++){
        
        int sum = first +second;
        cout<< sum << endl; 
        first = second;
        second = sum;

    }
}