#include<iostream>

using namespace std;

struct node{
	int Data;
	node *next;
};

int main()
{
	
	node *n;
	node *t;
	node *h;
	node *bantu;
	node *hapus;
	
	n= new node;
	n->Data=2;
	t=n;
	h=n;
	
	
	n=new node;
	n->Data=5;
	t->next=n;
	t=t->next;
	
	n= new node;
	n->Data =8;
	n->next=NULL;
	t->next=n;
	bantu=n;
	
	n=new node;
	n->Data =7;
	t->next= n;
	n->next=bantu;
	
	hapus=h;
	h=hapus->next;
	delete hapus;
	
	t=h;
	
	while(t!=NULL){
		cout<< "Data:"<<t->Data <<endl;
		t=t->next;
	}
	
	return
	0;
}
