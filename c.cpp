
#include <iostream>
#include <vector>

using namespace std;

int main()
{
	int x1, y1, x2, y2, x3, y3, r;
	cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3 >> r;

	int xleft = max(x1, x3 - r);
	int xright = min(x2, x3 + r);
	int ybottom = max(y1, y3 - r);
	int ytop = min(y2, y3 + r);

	if (xleft > xright || ybottom > ytop) {
		cout << 0;
	}
	else
	{
		long count = 0;
		long r2 = r * r;
		for(int x = xleft; x <= xright; x++)
			for (int y = ybottom; y <= ytop; y++)
			{
				if (pow(x3 - x, 2) + pow(y3 - y, 2) <= r2) count++;
			}
		cout << count;
	}
	return 0;
}
