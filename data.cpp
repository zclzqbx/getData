#include "data.h"

vector<string> split(string str)
{
	vector<string> vec;
	size_t i=0;
	string subStr;
	subStr.clear();
	while(i<str.size())
	{
		if(str[i]==' ')
		{
			if(!subStr.empty())
				vec.push_back(subStr);
			subStr.clear();
		}
		else
		{
			subStr+=str[i];
		}
		++i;
	}
	vec.push_back(subStr);
	return vec;
}

void Bus::setBusCode(int code)
{
	busCode=code;
}

void Bus::setBusName(string name)
{
	busName=name;
}

bool Bus::isValid()
{
	if(busCode<0 || busName.size())
		return false;
	
	return true;
}

