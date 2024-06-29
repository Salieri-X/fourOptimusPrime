#include <iostream>
#include <vector>
#include <huangyihong.h>

using namespace std;

int main()
{
	vector<int> a(6,8);
	Uestc::Iot::_444_::Panlong pl(1);

	cout << a[5] << endl;

	cout << "test runtime" << endl;

	a.pop_back();

	cout << "what?" << endl;

	a.pop_back();
	
	cout << "what? again" << endl;

	pl.displayWhetherIsAfool();

	return 0;
}