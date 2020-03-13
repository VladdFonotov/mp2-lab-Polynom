#include<iostream>
#include"Polynom.h"
#include<math.h>

using namespace std;

int main() {
	try {
		TPolynom pol, pol_t;
		TMonom m[3];
		int arr[2][2];
		arr[0][0] = 1;
		arr[1][0] = 1;
		arr[0][1] = 123;
		arr[1][1] = 155;
		m[0].coef = -5;
		m[0].p_x = 1;
		m[0].p_y = 5;
		m[0].p_z = 5;
		pol.AddMonom(m[0]);
		TPolynom pa(arr, 2);
		cout << pa << endl;
		cout << pol << endl;
		pa += pol;
		cout << pa << endl;
		
		/*
		for (int i = 0; i < 3; i++)
		{
			m[i].coef = 7 * pow(-1, i);
			m[i].p_x = i / 2;
			m[i].p_y = 2;
			m[i].p_z = i;
			pol.AddMonom(m[i]);
		}

		cout << pol << endl;
		pol *= m[1];
		cout << pol << endl;
		pol_t.AddMonom(m[0]);
		m[0].coef = -7;
		pol_t.AddMonom(m[0]);
		cout << pol_t << endl;
		*/
	}
	catch (char *s) {
		cout << s;
	}
	system("pause");
	return 0;
}