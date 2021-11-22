#include<iostream>
using namespace std;

int main() {
	int i = 0;
	int sum = 1;
	cin >> i;
	
	for(int j = i; j > 0; --j){
		sum *= j;
	}
	
	cout << sum << endl;
	
	return 0;
}
