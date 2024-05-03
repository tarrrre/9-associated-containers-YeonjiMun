#include <algorithm> // find_if()
#include <cctype> // isspace()
#include <iostream>
#include <string>
#include <vector>

using namespace std;

// �μ��� ������ ���� true, �׷��� ���� ���� false
 bool space(char c) {
	return isspace(c);
}

// �μ��� ������ ���� false, �׷��� ���� ���� true
 bool not_space(char c) {
	return !isspace(c);
}

 vector<string> split(const string& str) {
	typedef string::const_iterator iter;
	iter i = str.begin();
	vector<string> ret;

	// for(iter != str.begin(); i != str.end(); i++)
	while (i != str.end()) {
		

		// ���� ������ ���� 
		// ���� i��ġ���� ù ��° �پ�� �ƴ� ���� ã��
		i = find_if(i, str.end(), not_space);
		

		// ���� �ܾ��� ���� ã��
		// while �ݺ��� �� �׻� ���ο� �ݺ��� j�� ���� 
		// ���� i��ġ���� ù ��° �پ�� ���� ã��
		iter j = find_if(i, str.end(), space);
		

		// [i,j)  ������ ���ڸ� ���� 
		if (i != str.end()) {
			ret.push_back(string(i, j));
		}

		// i�ݺ��� ��ġ�� j�ݺ����� ��ġ�� �����ϱ�
		i = j;
		

	}
	return ret;

}

