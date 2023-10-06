#include <iostream>
#include <fstream>
#include <string>

namespace fileSystem{
	void writeFile(int times,char filename[]){
		std::ofstream file(filename);
		for (int i=0;i<times;i++){
			std::string text;
			std::getline(std::cin,text);
			file<<text<<std::endl;
		}
	}
	
}

