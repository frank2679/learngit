#include <iostream>
#include <vector>
using namespace std;
main(){
	int n;
	vector<int> num;
	while(cin >> n)
		num.push_back(n);
	cout << num[0] << endl;
	return 0;
}
