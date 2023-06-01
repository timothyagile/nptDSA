#include <iostream>
using namespace std;

struct phanTu
{
	string giaTri;
	int key;
	phanTu (string s, int n)
	{
		giaTri = s;
		key = n;
	}
};

int hashFunction (int key, int n)
{
	return key % n;
}

void TaoHashTable (phanTu p, string tenSV[], int n)
{
	int index = hashFunction(p.key, n);
	tenSV[index] = p.giaTri;
}

void print (string s[], int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << i << ". " << s[i] << endl;
	}
}
int main ()
{
	int n = 10;
	string tenSV[10];
	
	phanTu A("Thinh", 22521415);
	phanTu B("Quan", 22521004);
	phanTu C("Quyen", 22521672);
	phanTu D("Khoa", 22521998);
	
	TaoHashTable(A, tenSV, n);
	TaoHashTable(B, tenSV, n);
	TaoHashTable(C, tenSV, n);
	TaoHashTable(D, tenSV, n);
	
	print(tenSV, n);
	return 0;
}
