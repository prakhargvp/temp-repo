#include <fstream>
#include <iostream>
#include <sstream>
#include <vector>
#include <errno.h>
#include <cstring>
#include <string> 
#include <typeinfo> 
using namespace std;
struct col{
	vector<string> d;
};
template <typename T>
T cStringTo(string str,int type){
	if(type==0){
		return stoi(str);
	}else if(type==2){
		std::transform(str.begin(), str.end(), str.begin(), ::tolower);
		return str;
	}else{
		return str;
	}
}
struct acompare{
	acompare(int colNum,int sType){
		this->colNum = colNum;
		this->sType = sType;
	}
	bool operator () (col lhs, col rhs){
		string str1,str2;
		string type;
		str1 = lhs.d[colNum];
		str2 = rhs.d[colNum];
		// 0 => int
		// 1 => Ascii-case sensitive
		// 2 => Ascii-case in-sensitive
		if(sType==0){
			type="int";
		}else if(sType==1){
			type="string";
		}else{
			type="string";
		}
		constexpr string Type = type.c_str();
		cout << type << ":" <<Type <<endl;
		//return cStringTo<Type>(str1,colNum) < cStringTo<Type>(str2,colNum);
		return str1 < str2;
	}
	int colNum,sType;
};
