#include <iostream>
using namespace std;

struct node 
{
	int data;
	node *next;
	node (int val)
	{
		data = val;
		next = NULL;
	}	
};

node *addNode(node *p, int x)
{
	node *temp = new node (x);
	p -> next = temp;
	return temp;
}

node *createList(node *head)
{
	int x;
	node *p = head;
	while (true)
	{
		cin >> x;
		if (x == 0)
			break;
		p = addNode(p, x);
	}
	return head;
}

void printList(node *head)
{
	node *p = head;
	while (p != NULL)
	{
		cout << p -> data << " ";
		p = p -> next;	
	}
}

void count (node *head)
{
	node *p = head;
	node *q = head;
	while(p != NULL)
	{
		if (p -> data == q->data)
		{
			if (p != q)
			{
				p = p -> next;
				q = head;
			}
			else
			{
				int count = 0;
				while (q != NULL)
				{
					if (p -> data == q -> data)
						count++;
					q = q->next;
				}
				cout << p->data << ": " << count << endl;
				p = p->next;
				q = head;
			}
		}
		else
			q = q -> next;
	}
}

int main ()
{
	int x;
	cin >> x;
	if (x == 0)
		cout << "Danh sach rong.";
	else
	{
		node *head = new node(x);
		head = createList(head);
		cout << "Danh sach vua nhap la: ";
		printList(head);
		cout << "\nSo lan xuat hien cua tung phan tu trong danh sach la:\n";
		count(head);
	}
	
	return 0;
}
