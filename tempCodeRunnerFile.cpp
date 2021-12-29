#include<bits/stdc++.h>
using namespace std ;

int main(){
    int t ;
    cin>>t;
    while(t--){
        int n ,m,rs,cs,rf,cf;
        cin>>n >>m>>rs>>cs>>rf>>cf;
        if(rf>=rs && cf>=cs){
            cout<< min(rf-rs, cf-cs)<<endl;
        }
        else if(rf>=rs || cf>=cs){
            int z = min(m-rs ,n-cs);
            rs = rs +z ;
            cs=cs+z;
            cout<< z+ min(abs(rf-rs),abs(cf-cs))<<endl;
        }
        else {
            int count = m-rs +m-rf;
            int max = n-cs +n- cf;
            cout<< min(count , max)<<endl;

        }
       
    }
}