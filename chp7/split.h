#pragma once
#ifndef GUARD_split_h
#define GUARD_split_h


#include <algorithm> // find_if()
#include <cctype> // isspace()
#include <iostream>
#include <string>
#include <vector>

using namespace std;

// 인수가 공백일 때는 true, 그렇지 않을 때는 false
 bool space(char);


// 인수가 공백일 때는 false, 그렇지 않을 때는 true
 bool not_space(char );

 vector<string> split(const string& );
	


#endif