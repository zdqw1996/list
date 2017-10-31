#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<string>
using namespace std;

struct Node
{
    int m_data;
    Node *next;
};//节点模板

class List{
    private:
        Node *head;
        Node *tail;
    public:
        List(void)
        {
            head = NULL;
            tail = NULL;
        }
        ~List(void)
        {
            Node *tmp = new Node;
            while(tmp != NULL)
            {
                tmp = head;
                head = head->next;
                delete tmp;

            }
        }
        void create(int data)
        {
            Node *tmp = new Node;
            tmp->m_data = data;
            head->next = tmp;
            delete tmp;
            tmp = NULL; 
        }
        void inserthead(int data)
        {
            Node *tmp = new Node;
            Node *tmp1;

            tmp->m_data = data;
            tmp1 = head->next;
            head->next = tmp;
            tmp->next = tmp1;
            tmp1->next = NULL:
            delete tmp;
            delete tmp1;

        }
        void insertail(int data)
        {
            Node *tmp = new Node;
            Node *tmp1;
            tmp->m_data = data;
            tmp1 = tail->next;
            tail->next = tmp;
            tmp->next = tmp1;
            tmp1->next = NULL:
            delete tmp;
            delete tmp1;
        }
        void removehead(void)
        {
             Node *tmp;
             Node *tmp1;
             tmp = head->next;
             tmp1 = tmp->next;
             head->next = tmp->next;
        }
        void removetail(void)
        {
             Node *tmp;
             Node *tmp1;
             tmp = tail->next;
             tmp1 = tmp->next;
             tail->next = tmp->next;
        }
            

};
class Queue{
    private:
       List a;
    public:
        void queue_inq(int data;)
        {
            a.insethead(data);
            cout<<data<<' ';
        }
        void queue_outq()
        {
            a.removetail();
            cout<<tail->data<<' ';
        } 
        void queue_show() 
        {
           Node *tmp;
           Node *tmp1;
           tmp1 = head;
            while(tmp1->next!=NULL)
            {
                tmp = head->next;
                head->next = tmp1;
                tmp1 = tmp->next;
                cout<<tmp1->data<<' ';
            }
        }
};
int main(void)
{
    Queue b;
    b.queue_inq(1);
    b.queue_inq(2);
    b.queue_inq(3);
    b.queue_inq(4);
    b.queue_show();


}