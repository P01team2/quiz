class Oblast {
	int choise;
	char name[10];
	const char nameOfFile;
public:
	Oblast(int choiseF,char nameF,const char nameOfFileF = oblast.txt)
	{
		choise = choiseF;
		name = nameF;
		nameOfFile = nameOfFileF; 
	}
	void setChoise(int valueChoise) {
		choise = valueChoise; 
	}
	void setName(char valueName) {
		name = valueName;
	}
	int getChoise() {
		return choise;
	}
	char getName() {
		return name;
	}
	void print() {
		std::cout << choise << "   " << name << "    " << nameOfFile;
}
};
