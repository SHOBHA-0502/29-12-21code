#include<bits/stdc++.h>
using namespace std;


	int main(){
        int n ; 
        cin>>n ;
        char c;
        cin>>c;
         float hra = (20.0/100)*n;
    float  da = (50.0/100)*n;
        float pf = (11.0/100)*n;
        if(c=='A'){
            cout<< int(n + hra + da +1700 -pf +0.5);
        }
        else if(c == 'B'){
            cout<< int(n + hra + da +1500 -pf +0.5);
        }
        else {
            cout<<  int(n + hra + da +1300 -pf +0.5 );
        }
    }
	

