#include "data.h"
#include <string>
#include <vector>
#include <fstream>
using namespace std;

ifstream input("nx_20150427_1355.txt",ios::in);
ofstream output("data.txt",ios::ate);

int main()
{
	vector<Bus> busList;
	string str;
	while(1)
	{
		getline(input,str);
		if(str=="<Bus::nx type=È«Êý>")
		{
			while(str!="</Bus::nx>")
			{
				getline(input,str);
				vector<string> vec=split(str);
				for(size_t i=0;i<vec.size();++i)
					output<<vec[i]<<endl;
			}
		}
		if(str=="</Bus::nx>")
			break;
	}
	return 0;
}