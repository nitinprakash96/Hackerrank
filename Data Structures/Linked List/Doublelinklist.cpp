#include<iostream>
#include<conio.h>
#include<stdio.h>
#include<cstdlib>
using namespace std;
struct node
{
    int data;
    node *next;
    node *prev;
};
node *head;
class DLINKLIST
{
public:
    void insertatbig(int num)
    {
        node *temp=new node();
        temp->data=num;
        temp->next=NULL;
        temp->prev=NULL;
        if(head!=NULL)
        {
            temp->next=head;
            head->prev=temp;
            head=temp;
        }
        else
        {
           cout<<"list is empty "<<endl;
           head=temp;
        }
    }
    void printaF()
    {
        if(head==NULL)
        {
            cout<<"list is empty "<<endl;
            return;
        }
       node *temp1=head;
       cout<<"FORWARD list is "<<endl;
       while(temp1!=NULL)
       {
           cout<<temp1->data<<" ";
           temp1=temp1->next;
       }
        cout<<endl;
    }
    void printR()
    {
         if(head==NULL)
        {
            cout<<"list is empty "<<endl;
            return;
        }
        node *temp1=head;
        while(temp1->next!=NULL)
        {
            temp1=temp1->next;
        }
        cout<<"REVERSE list is "<<endl;
        while(temp1!=NULL)
        {
            cout<<temp1->data<<endl;
            temp1=temp1->prev;
        }
        cout<<endl;
    }
    void insertatany(int num1,int pos)
    {
         if(head==NULL)
        {
            cout<<"list is empty "<<endl;
        }
        node *temp1=new node();
        temp1->data=num1;
        temp1->next=NULL;
        temp1->prev=NULL;
        if(pos==1)
        {
           temp1->next=head;
           head->prev=temp1;
           head=temp1;
           return;
        }
        node *temp2=head;
        for(int i=0;i<pos-2;i++)
        {
            temp2=temp2->next;
        }
        temp1->next=temp2->next;
        temp2->next=temp1;
        temp1->prev=temp2;
        (temp2->next)->prev=temp1;
    }
    void deleteany(int num2)
    {
         if(head==NULL)
        {
            cout<<"list is empty "<<endl;
            return;
        }
        node *temp1=head;
        if(num2==1)
        {
            head=temp1->next;
            (temp1->next)->prev=NULL;
            free(temp1);
        }
        for(int i=0;i<num2-2;i++)
        {
            temp1=temp1->next;
        }
        node *temp2=temp1->next;
        temp1->next=temp2->next;
        (temp2->next)->prev=temp1;
        free(temp2);
    }
    void serach(int x)
    {
        node *temp=head;
        if(head==NULL)
        {
            cout<<"list is empty "<<endl;
            return;
        }
        while(temp!=NULL)
        {
            if(temp->data==x)
            {
                cout<<"item is found "<<endl;
                return;
            }
            temp=temp->next;
        }
        cout<<"data is not available "<<endl;
    }
};
int main()
{
    DLINKLIST l;
    int n1,x,y,z,p,s;
    head=NULL;//empty list
    cout<<"how many element u want to insert at beginning"<<endl;
    cin>>n1;
    for(int i=0;i<n1;i++)
    {
        cout<<"enter the element value "<<endl;
        cin>>x;
        l.insertatbig(x);
        l.printaF();
    }
    cout<<"enter the element value at any position "<<endl;
    cin>>y;
    cout<<"enter the position at which u want to enter "<<endl;
    cin>>z;
    l.insertatany(y,z);
    l.printaF();
    cout<<"enter the position at which u want to delete "<<endl;
    cin>>p;
    l.deleteany(p);
    l.printaF();
    cout<<"enter the no. u want to search "<<endl;
    cin>>s;
    l.serach(s);
    l.printaF();
}
