#include <iostream>
using namespace std;

#define MAX 999

struct stack
{
	int top = -1;
	int arr[MAX];
};

bool isEmpty(stack binaryStack)
{
	if (binaryStack.top < 0)
		return true;
	return false;
}

void push(stack &binaryStack, int a)
{
	if (binaryStack.top > MAX)
		cout << "Stack overflow\n";
	else
	{
	binaryStack.top++;
	binaryStack.arr[binaryStack.top] = a;
	cout << "Pushed\n";		
	}
}

void pop(stack &binaryStack)
{
	if (binaryStack.top < 0)
		cout << "Stack underflow\n";
	else
	{
		--binaryStack.top;
	}
}

int top(stack binaryStack)
{
	if (binaryStack.top < 0)
		return -999999;
	return binaryStack.arr[binaryStack.top];
}

void DecToBin(stack &binaryStack, int n)
{
	int t = n;
	while (t != 0)
	{
		push(binaryStack, t%2);
		t /= 2;
	}
}

void printStack (stack binaryStack)
{
	while (!isEmpty(binaryStack))
	{
		cout << top(binaryStack);
		pop(binaryStack);
	}
}

int main()
{
	int n;
	cout << "Nhap so can chuyen: ";
	cin >> n;
	DecToBin(bs, n);
	printStack(bs);
	return 0;
}
