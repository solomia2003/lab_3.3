// Lab_03_3.cpp
// ������� �������
// ����������� ������ � 3.3
// ������������, ������ �������� �������.
// ������ 23
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	double x; // ������� ��������
	double R; // ������� ��������
	double y; // ��������� ���������� ������
	cout << "R = "; cin >> R;
	cout << "x = "; cin >> x;

	// ������������ � ����� ����
	if (x <= -7 - R)
		y = R;
	else
		if (-7 - R <= x && x <= -7)
			y = sqrt(((x - 7) * (x - 7)) + (2 * (R * R)));
		else
			if (-7 <= x && x <= -7 + R)
				y = sqrt(((x - 7) * (x - 7)) + (2 * (R * R)));
			else
				if (-7 + R <= x && x <= -4)
					y = R;
				else
					if (-4 <= x && x <= 0)
						y = ((3 / 4) * R);
					else
						if (0 <= x && x <= ((atan(1) * 4) / 2))
							y = sqrt((R * R) - (x - ((atan(1) * 4) / 2) * (atan(1) * 4) / 2));
						else
							if (((atan(1) * 4) / 2) <= x && x <= (atan(1) * 4))
								y = sqrt((R * R) - (x - ((atan(1) * 4) / 2) * (atan(1) * 4) / 2));
							else
								if (x > (atan(1) * 4))
									y = (1 + (sqrt(2) * (atan(1) * 4)));
	cout << endl;
	cout << "y = " << y << endl;
	cin.get();
	return 0;
}
