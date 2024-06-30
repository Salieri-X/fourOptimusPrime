#include <iostream>
#include <fstream>
#include <map>
#include <sstream>
#include <vector>
#include <huangyihong.h>

using namespace std;

void wordFrequency(const std::string& filename)
{
	std::ifstream file(filename);
	if (!file.is_open())
	{
		std::cerr << "Error Opening file : " << filename << std::endl;
		return;
	}

	std::map<std::string, int> wordCount;
	std::string word;

	while (file >> word)
	{
		++wordCount[word];
	}

	for (const auto& pair : wordCount)
	{
		std::cout << pair.first << ": " << pair.second << std::endl;
	}
}

int main()
{
	vector<int> a(6,8);
	Uestc::Iot::_444_::Panlong pl(1);
	Uestc::Iot::_444_::HuangYh hyh("america");

	a.pop_back();
	
	cout << "what? again" << endl;

	pl.displayWhetherIsAfool();
	hyh.displayCountry();

	wordFrequency("/home/ubuntu/.ssh/known_hosts");
	return 0;
}