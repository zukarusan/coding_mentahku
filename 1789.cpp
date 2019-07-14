#include <iostream>
using namespace std;

int main() {
	int l, s, lvl;
	while (true) {
		cin >> l;
		if (cin.eof())
			break;
		lvl = 1;
		while (l--) {
			cin >> s;
			if (s >= 20) {
				lvl = 3;
			}
			if (s < 20 && s >= 10 && lvl < 3)
				lvl = 2;
		}
		cout << lvl << endl;
	}
}