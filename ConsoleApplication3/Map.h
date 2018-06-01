#include <iostream>
#include <vector>
#include <fstream>
#include <string>

class Map
{
public:
	
	Map();
	~Map();

	string mapFileName;
	int width, height;
	char getElement(int x, int y);
	std::vector < std::vector<char> > mapArray;
};

