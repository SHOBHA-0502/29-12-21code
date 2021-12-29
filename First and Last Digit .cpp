#include<bits/stdc++.h>
using namespace std ;

int main(){
    int t ;
    cin>>t;
    while(t--){
        int n ,m,rs,cs,rf,cf;
        cin>>n >>m>>rs>>cs>>rf>>cf;
        if(rf>=rs || cf>=cs){
            cout<< min(rf-rs, cf-cs);
        }
        else {
            int count = m-rs +m-rf;
            int max = n-cs +n- cf;
            cout<< min(count , max);

        }
       
    }
}