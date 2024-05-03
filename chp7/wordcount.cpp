// wordCount.cpp

#include <iostream>
#include <string>
#include <map>

using namespace std;

int main() {
	string s;

	// �� �ܾ�� �󵵸� �����ϴ� ��
	// �Է��� �����鼭 �� �ܾ�� �󵵸� ����
	map<string, int> counters;

	cout << "Enter words (CTRL+Z to stop): " << endl;


	while (cin >> s)
		++counters[s];

	// �ܾ�� �󵵸� ���
	cout << "Word count: " << endl;
	for (map<string, int>::const_iterator it = counters.begin();
		it != counters.end(); ++it) {
		cout << it->first << "\t" << it->second << endl;
	}



}