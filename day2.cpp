#include <iostream>
#include <fstream>
#include <vector>
#include <string>




int main() {

	std::vector<std::string> position;
	std::ifstream file("sample.txt");
	std::string input;
	while (file >> input) {
		position.push_back(input);
	}
	int horizontalPosi = 0;
	int depth = 0;
	for (int i = 0; i < position.size() - 1; i++) {
		if (position[i] == "forward")
			horizontalPosi = horizontalPosi + stoi(position[i + 1]);
		else if (position[i] == "down")
			depth = depth + stoi(position[i + 1]);
		else if (position[i] == "up")
			depth = depth - stoi(position[i + 1]);

	}
	int result = horizontalPosi * depth;
	std::cout << result << std::endl;
	return 0;
}
