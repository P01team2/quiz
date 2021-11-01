#include <iostream>
#include <string>
class Oblast {
	int choise;
	std::string name;
	std::string nameOfFile;
public:
	Oblast(int choiseF,std::string nameF,const std::string nameOfFileF = "oblast.txt")
	{
		choise = choiseF;
		name = nameF;
		nameOfFile = nameOfFileF; 
	}
	Oblast() { choise=1; name = "name";nameOfFile = "oblast.txt"; }
	void setChoise(int valueChoise) {
		choise = valueChoise; 
	}
	void setName(std::string valueName) {
		name = valueName;
	}
	int getChoise() {
		return choise;
	}
	std::string getName() {
		return name;
	}
	void print() {
		std::cout << choise << "   " << name << "    " << nameOfFile;
}
};
