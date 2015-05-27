#ifndef DATA
#define DATA
#include <string>
#include <vector>

using namespace std;

vector<string> split(string str);

class Bus{
public:
	Bus(int code=-1,string name=NULL):busCode(code),busName(name){}
	void setBusCode(int);
	void setBusName(string);
	bool isValid();
	
	int getBusCode(){return busCode;}
	string getBusName(){return busName;}
	
private:
	int busCode;//节点编号
	string busName;//节点名称
};


#endif //DATA