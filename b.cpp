#include <iostream>
#include <vector>

using namespace std;

int main()
{
	int n;
	cin >> n;
	int* arr = new int[n];
	int vmax = -1000, vind = 0;
	for (int i = 0; i < n; i++)
	{
		int inp;
		cin >> inp;
		arr[i] = inp;
		if (vmax < inp) {
			vmax = inp;
			vind = i;
		}
	}
	//cout << "vmax" << vmax << ", " << vind << endl;

	int omax = -1000;
	for (int i = vind + 1; i < n - 1; i++)
	{
		int val = arr[i];
		if (omax >= val) continue;
		if (val % 10 != 5) continue;
		if (arr[i + 1] >= val) continue;
		omax = val;
	}
	//cout << "omax" << omax << endl;

	if (omax == -1000) {
		cout << 0 << endl;
	}
	else {
		int place = 1;
		for (int i = 0; i < n; i++) {
			if (arr[i] > omax) place++;
		}

		cout << place;
	}
	return 0;
}
