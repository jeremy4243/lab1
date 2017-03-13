#include<iostream>

using namespace std;

int main(){
	int n;
	std::cin>>n;
	while(n!=1){
		if(n%2!=0){
			n=3*n+1;			
			cout<<n<<endl;
		}
		if(n%2==0){
			n=n/2;
			cout<<n<<endl;
		}
	}
	return 0;
}

