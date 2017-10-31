#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<string>
using namespace std;
struct Node
{
    int data;
    Node *next;
};//节点模板

class Queue{   //队列的头指针和尾指针是不能被其他类访问的
    private:
        Node *head;
        Node *tail;
    public:
        Queue(void)
        {
            head = NULL;
            tail = NULL;
        }
        ~Queue(void)
        {
            Node *tmp = new Node;
            while(tmp != NULL)
            {
                tmp = head;
                head = head->next;
                delete tmp;

            }
        }

        void outpush(int value)
        {
            Node *tmp = head;
            head = head->next;
            delete tmp;
            tmp = NULL;
            if(head == NULL)
            {
                tail = NULL;
            }

        }
        void inpush(void)
        {
            Node *tmp = new Node;
            tmp->data = value;
            tmp->next = NULL;
            if(tail != NULL)
            {
                tail->next = tmp;
            }
            else
            {
                head = tmp;
            }
            tail = tmp;

        }
        bool empty()
        {
            return head ==NULL && tail ==NULL;

        }
        int init(void)
        {
            if(this->empty() == true)
            {
                cout<<"该队列为空"<<endl;
                return 0;
            }
            return head->data;
        }




};

int main(void)
{
    Queue que;
    qu.inpush(324);
    qu.inpush(3324);
    cout<<qu.init()<<endl;
    qu.outpush();
    cout<<qu.init()<<endl;
    qu.outpush();
    cout<<qu.init()<<endl;

    return 0;

}