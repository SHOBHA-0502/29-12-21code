#include<iostream>
using namespace std;

int main() {
	int n ;
    cin>>n;
    int r ;
    int count = 0 ; 
    int max = 0 ;  
    
    while(n != 0){
        r = n%10 ;
        if(r%2==0){
            count += r;
            
        }
        else{
            max += r ;
        }
        n = n/10 ;
        
        
        
    }
    cout<< count <<" "<<max ;
    
	
}
