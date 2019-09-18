#include <iostream>
using namespace std;

int compare_s1_s2(string s1, string s2) {
	int i = 0, f = 0;
	while(i < s1.length()) {
		if(tolower(s1[i]) < tolower(s2[i])) {
			return -1;
		}
		if(tolower(s1[i]) > tolower(s2[i])) {
			return 1;
		}
		if(tolower(s1[i]) == tolower(s2[i])) {
			i++;
			continue;
		}
		i++;
	}
	return 0;
}

int main() {
	string s1,s2;
	cin >> s1;
	cin >> s2;
	cout << compare_s1_s2(s1, s2) << endl;
}
