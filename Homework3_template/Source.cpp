#include<iostream>
#include<time.h>

using namespace std;
//1.�������� ������ �������, ������� ��������� ������ ��������� ���������.
template <typename type>
type root(type a, type b)
{
	if (a != 0)
	{
		return b / a;
	}
}
//2. �������� �������, ������������ ������� �������������� ��������� ������������� �� �������.
void arr_average(int a[], int size)
{
	double average = 0;
	int sum = 0;
	for (int i = 0; i < size; i++)
	{
		sum += a[i];
	}
	average = (double)sum / size;
	cout << average << endl;
}
//3. �������� ��������� �������, ������������ ���������� �������������, ������������� � ������� ��������� ������������� �� �������.
template <typename type1>
void arr1(type1 a[], int size)
{
	int cpos = 0, cminus = 0, czero = 0;
	for (int i = 0; i < size; i++)
	{
		if (a[i] > 0)
		{
			cpos++;
		}
		else if (a[i] < 0)
		{
			cminus++;
		}
		else if (a[i] == 0)
		{
			czero++;
		}
	}
	cout << "���������� ������������� ��������� = " << cpos << endl;
	cout << "���������� ������������� ��������� = " << cminus << endl;
	cout << "���������� ������� ��������� = " << czero << endl;
}
//4 �������� ��������� �������, ������������ ������� � �������� (�������� � �����) ��������� ������������� �� �������.
template <typename type2>
void arr_MinMax(type2 a[], int size)
{
	type2 max = INT_MIN;
	type2 min = INT_MAX;
	int n1, n2;
	for (int i = 0; i < size; i++)
	{
		if (a[i] > max)
		{
			max = a[i];
			n1 = i;
		}
	}
	for (int i = 0; i < size; i++)
	{
		if (a[i] < min)
		{
			min = a[i];
			n2 = i;
		}
	}
	cout << "�������� �������� �������: " << max << " " << "����� ��������:" << n1 << endl;
	cout << "������� �������� �������: " << min << " " << "����� ��������:" << n2 << endl;

}
//5. �������� ��������� �������, �������� ������� ���������� ��������� ������������� �� ������� �� ���������������.
template <typename type3>
void arr_reverse(type3 a[], int size)
{
	for (int i = 0; i < size / 2; i++)
	{
		swap(a[i], a[size - i - 1]);
	}
	for (int i = 0; i < size; i++)
	{
		cout << a[i] << " ";
	}
	cout << endl;
}
//6. �������� �������, ������������ ���������� ������� ����� � ������������ �� �������

bool prostoye(int n)
{
	for (int i = 2; i <= n / 2 + 1; i++)
		if (n%i == 0)return false;
	return true;
}
int arr_res(int arr[], int n)
{
	int c = 0;
	for (int i = 0; i < n; i++)
		if (prostoye(arr[i]))
			c++;
	return c;
}

int main()
{
	setlocale(LC_ALL, "Rus");
	srand(time(NULL));
	int n = 0;
start:
	cout << "������� ����� �������: ";
	cin >> n;

	if (n == 1)
	{
		cout << "1.	�������� ������ �������, ������� ��������� ������ ��������� ���������." << endl;
		int a, b;
		cout << "������� �������� �: ";
		cin >> a;
		cout << "������� �������� b: ";
		cin >> b;
		cout << "������ ��������� ��������� = " << root(a, b) << endl;

	}
	else if (n == 2)
	{
		cout << "2.	�������� �������, ������������ ������� �������������� ��������� ������������� �� �������." << endl;
		int a[] = { 6,8,9,15,16,47,85,21 };
		cout << "������� �������������� ��������� �������" << endl;
		arr_average(a, 8);
	}
	else if (n == 3)
	{
		cout << "3.	�������� ��������� �������, ������������ ���������� �������������, ������������� � ������� ��������� ������������� �� �������." << endl;
		int a[] = { -4,-8,-9,0,0,0,56,42,1,58 };

		arr1(a, 10);
	}
	else if (n == 4)
	{
		cout << "4.	�������� ��������� �������, ������������ ������� � �������� (�������� � �����) ��������� ������������� �� �������." << endl;
		int a[] = { 4,6,8,-1,15,28,-5,30 };
		double b[] = { 2.5,-16.8,30.68,5.8,4.3,4.7,3.8,-20.4 };

		arr_MinMax(a, 8);
		arr_MinMax(b, 8);
	}

	else if (n == 5)
	{
		cout << "5. �������� ��������� �������, �������� ������� ���������� ��������� ������������� �� ������� �� ���������������." << endl;
		int a[] = { 1,2,3,4,5,6,7,8 };
		double b[] = { 1.5,6.8,1.5,8.8,5.6,7.8,4.1,2.8 };
		arr_reverse(a, 8);
		arr_reverse(b, 8);
	}

	else if (n == 6)
	{
		cout << "6.�������� �������, ������������ ���������� ������� ����� � ������������ �� �������" << endl;
		
		int a[] = {2,3,5,7,1,21,6,9,133};
		
		cout << arr_res(a, 9) << endl;
	}

	goto start;
	system("pause");
	return 0;

}