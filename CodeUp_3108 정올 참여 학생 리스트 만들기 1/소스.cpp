#include <iostream>
#include <vector>
#define MAX 10001
using namespace std;

typedef struct _data
{
	int number;
	string name;
}_data;

_data list[MAX];
int main()
{
	_data t;
	int n;
	char code;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> code >> t.number >> t.name;
		if (code == 'I' && !list[t.number].number)
		{
			list[t.number] = t;
		}
		else if (code == 'D' && list[t.number].number)
		{
			list[t.number].number = 0;
		}
	}
	int index = 0;
	for (auto& a : list)
		if (a.number != 0)
			list[index++] = a;

	for (int i = 0; i < 5; i++)
	{
		cin >> index;
		index--;
		if (list[index].number != 0)
			cout << list[index].number << ' ' << list[index].name << endl;
	}

	return 0;
}