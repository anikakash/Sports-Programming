#include<bits/stdc++.h>
using namespace std;

typedef struct info{
    int roll;
    struct info *next;
}data;

data *head=NULL;;

///insert_end() ; Pasing Argument is: the value;
void insert_end(int x)
{
    data *temp = (data*)malloc(sizeof(data));
    temp -> roll = x;
    temp -> next = NULL;
    if(head == NULL)
    {
        head = temp;
        return;
    }
    data *node = head;
    while(node ->next !=NULL)
    {
        node = node ->next;
    }
    node ->next = temp;
}
void countr()
{
    int cnt=0;
    data *temp = head;
    while(temp!=NULL)
    {
       cnt++;
        temp = temp -> next;
    }
    cout<<cnt<<endl;
}
int main()
{
    insert_end(5);
    insert_end(6);
    countr();

}




