#pragma once
#ifndef GUARD_split_h
#define GUARD_split_h


#include <algorithm> // find_if()
#include <cctype> // isspace()
#include <iostream>
#include <string>
#include <vector>

using namespace std;

// �μ��� ������ ���� true, �׷��� ���� ���� false
 bool space(char);


// �μ��� ������ ���� false, �׷��� ���� ���� true
 bool not_space(char );

 vector<string> split(const string& );
	


#endif