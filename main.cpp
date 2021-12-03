#include <iostream>
#include <fstream>
#include <vector>




int main() {

	std::vector<int> depthOfsubmarine;
	std::ifstream file("sample.txt");
	int input;
	while (file >> input) {
		depthOfsubmarine.push_back(input);
	}
	int increaseCount = 0;
	
	for (int i = 0; i < depthOfsubmarine.size()-1; i++) {
		if (depthOfsubmarine.size() == 0) {
			break;
		}
		else if (depthOfsubmarine[i] < depthOfsubmarine[i + 1])
			increaseCount++;
	}
	std::cout <<increaseCount<< std::endl;
	return 0;
}
