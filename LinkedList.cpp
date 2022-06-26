// Implementation of LinkedList
#include<bits/stdc++.h>
#define ll long long 
using namespace std;
typedef struct node
{
	int num;
	struct node *ptr;
}node;
node *head,*first,*temp=0;
void insert(int n)
{
	first=0;
	for(int i=0;i<n;++i)
	{
		head=new node;
		cin>>head->num;
		if(first!=0)
		{
			temp->ptr=head;
			temp=head;
		}
		else
		{
			first=temp=head;
		}
		temp->ptr=0;
	}
}
void print()
{
	temp=first;
	while(temp!=0)
	{
		cout<<temp->num<<" ";
		temp=temp->ptr;
	}
	cout<<"\n";
}
void delete_node(int x)
{
	temp=first;
	head=first;
	if(temp->num==x)
	{
		first=temp->ptr;
		return;
	}
	while(temp!=0 && temp->num!=x)
	{
		head=temp;
		temp=temp->ptr;
	}
	head->ptr=temp->ptr;
	free(temp);
}
void add(int b)
{
	temp=first;
	while(temp->ptr!=0)
	{
		temp=temp->ptr;
	}
	head=new node;
	head->num=b;
	head->ptr=NULL;
	temp->ptr=head;
	temp=head;
	temp->ptr=NULL;
}
int main()
{
	int n;
	cin>>n;
	insert(n);
	print();
	int m;
	cin>>m;
	delete_node(m);
	print();
	add(7);
	print();
	return 0;
	
}
