#include<iostream>
#include<stdlib.h>
#include<string>
using namespace std;

struct book
{
	char book_name[100];
	char author_name[100];
	int ref_no;
	struct book *prev, *next;
};

int count = 1;
struct book *head = (struct book*)malloc(sizeof(struct book));

struct book *create_node()
{
	struct  book *newNode = (struct book*)malloc(sizeof(struct book));
	cout<<"\n\tEnter Book name: ";
	cin>>newNode->book_name;
	cout<<"\tEnter Author's name: ";
	cin>>newNode->author_name;
	cout<<endl;
	newNode->next=newNode->prev = NULL;

	return newNode;
}

void add_book()
{
	struct book *newNode = create_node();
	if(head == NULL)
	{
		head = newNode;
		count = 1;
		head->ref_no = count;
		cout<<"\tReference no: "<<newNode->ref_no;
		cout<<"\n\tFirst Book Added.\n\n";
	}
	else
	{
		struct book *temp = head;
		while(temp->next != NULL)
		{
			temp = temp->next;
		}
		temp->next = newNode;
		newNode->prev = temp;
		count=count+1;
		newNode->ref_no = count;
		cout<<"\tReference no: "<<newNode->ref_no;
		cout<<"\n\tBook Added.\n\n";
	}
}

void display()
{
	if(head == NULL)
	{
		cout<<"\n\n\t*** No Book Present in library ***\n\n";
	}
	struct book *temp = head;
	while(temp!= NULL)
	{
		cout<<"\n\n\tBook Name:     "<<temp->book_name;
		cout<<"\n\tAuthor's Name: "<<temp->author_name;
		cout<<"\n\tRef no:        "<<temp->ref_no;
		temp=temp->next;
		cout<<endl;
	}
}

void deleteNode() 
{
	int key;
	cout<<"Enter ref from following to delete that book:\n";
	display();
	cout<<"\nYour Choice => ";
	cin>>key;
  struct book *temp = head;
  struct book *prev = head;

  if (temp != NULL && temp->ref_no == key) {
  head = temp->next;
  free(temp);
  return;
  }
  
  while (temp != NULL && temp->ref_no != key) {
  prev = temp;
  temp = temp->next;
  }

  // If the key is not present
  if (temp == NULL) return;

  // Remove the node
  prev->next = temp->next;

  free(temp);
}

void edit()
{
	int x;
	cout<<"\n\nEnter ref no from following to edit book:\n";
	display();
	cout<<"\nYour Choice: => ";
	cin>>x;
	book *temp = head;
	for(int i=1; i<x; i++)
	{
		temp = temp->next;
	}
		cout<<"\n\n\tBook Name:     "<<temp->book_name;
		cout<<"\n\tAuthor's Name: "<<temp->author_name;
		cout<<"\n\tRef no:        "<<temp->ref_no;
	cout<<"\n\nWhat do you want to edit:\n\t1. Book name.\n\t2. Author's Name.\n\n\tYour choice: ";
	int choi;
	cin>>choi;
	if(choi == 1)
	{
		cout<<"Enter Book name: ";
		cin>>temp->book_name;
	}
	else if(choi == 2)
	{
		cout<<"Enter Author's name: ";
		cin>>temp->author_name;
	}
	else
	{
		cout<<"\n\t***Invalid choice***";
	}
}
int main()
{
	head = NULL;
	cout<<"\n\t\tLibrary Management System Using C++\n\n";
	cout<<"-----------------------------------------\n";
	cout<<"This Project is Presented  by:\t\t|\n\t\t\t\t\t|\n\tAbdul Malik    (BSCYS-019).\t|\n\tMuhammad Panah (BSCYS-017).\t|";
	cout<<"\n\tManal Anwaar   (BSEE- 010).\t|\n\tAnum Abid      (BSEE- 013).\t|\n\t\t\t\t\t|\n";
	cout<<"-----------------------------------------\n";
	
	int pass, pin = 123456789;
	cout<<"\n\n\tEnter Your Password: ";
	cin>>pass;
	if(pass == pin)
	{
	
		while(1)
		{
			cout<<"\n\nChoose one of the following Opetions:\n\n";
			cout<<"\t1. Add Book.\n\t2. Delete Book.\n\t3. Show All Books.\n\t4. Edit Book,\n\t5. Exit.\n";
			int choi, d;
			cout<<"\tYour Choice => ";
			cin>>choi;
			switch(choi)
			{
				case 1:
					cout<<"\n\tHow many books you want to add: ";
					cin>>d;
					for(int i=0; i<d; i++)
					{
						add_book();
					}
					break;
				case 2:
					deleteNode();
					break;
				case 3:
					display();
					break;
				case 4:
					edit();
					break;
				case 5:
					exit(1);
				default:
					cout<<"\n\n\t***Invalid Choice***\n";
			}
		}
	}
	else
	{
		cout<<"\n\n\t*** OOPS ***\n\tWrong Password\n";
		cout<<"\tExiting Program.";
		exit(1);
	}
	
	return 0;
}
