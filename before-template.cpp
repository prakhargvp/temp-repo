#include <fstream>
#include <iostream>
#include <sstream>
#include <vector>
#include <errno.h>
#include <cstring>
#include <string>  
using namespace std;
struct col{
	vector<string> d;
};
struct acompare{
	acompare(int colNum,int sType){
		this->colNum = colNum;
		this->sType = sType;
	}
	bool operator () (col lhs, col rhs){
		string str1,str2;
		str1 = lhs.d[colNum];
		str2 = rhs.d[colNum];
		// 0 => int
		// 1 => Ascii
		if(sType==0){
			return stoi(str1) < stoi(str2);
		}else{
			return str1 < str2;
		}
	}
	int colNum,sType;
};
