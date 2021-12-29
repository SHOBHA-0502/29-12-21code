#include <iostream>
using namespace std;

int main() {
	int x ;
	float a ;
    
	cin>>x>>a;
	if(x%5 == 0 && x+0.50 <=a ){
	    cout<< (a - x - 0.50 )<<endl;
	}
	else{
	    cout<< a <<endl;
	
}
return 0;
}
