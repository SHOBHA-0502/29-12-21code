#include <iostream>
using namespace std;

int main() {
	int t ;
	cin>>t;
	
	while(t--){
	    string s ; 
	    cin>>s; 
	    int n = 0;
	    for(int i =0; i<s.size();i++){
	       // cout<< s[i] << ";;; "<<endl;
	        n += s[i];
	        n -= 48;
	        //cout<< n << " ;?;;"<< endl;
	        
	    }
	    cout<< n <<endl;
	}
	return 0;
}