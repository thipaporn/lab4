#include <iostream>
#include <string>
using namespace std;

int findDivisor (int x){
	int i=2;
	while(i>=1){
		if(x%i == 0){
			return i;
		}else{
			i++;
		}
	}
}
int main (){
	cout << "Input 10 = "<< findDivisor(10)<<"\n";
	cout << "Input 97 = "<< findDivisor(97)<<"\n";
	cout << "Input 221 = "<< findDivisor(221)<<"\n";
	return 0;
	
}
