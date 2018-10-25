#include <iostream>
using namespace std;

class Triplets{
	public: 
	int x ;
	int y ;
	int gcd ;
} ;

Triplets extended_euclid(int a , int b){Triplets ans ;
	if(b==0){ ans.gcd = a ; ans.x = 1 ; ans.y = 0 ; return ans;}
	Triplets temp = extended_euclid(b , a%b) ;
	ans.x = temp.y ;
	ans.y = temp.x - (a/b)*temp.y ;
	ans.gcd = temp.gcd ;
	return ans ;
}

int main() {
	Triplets t = extended_euclid(19,5) ; 
	cout<<t.x<<" "<<t.y<<" "<<t.gcd;
	return 0;
}