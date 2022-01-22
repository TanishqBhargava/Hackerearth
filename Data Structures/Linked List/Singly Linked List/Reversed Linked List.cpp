/*========================*\
|  ID: tanishqbhargava2509 |
|  LANG: C++               |
\*========================*/
//Tanishq Bhargava
// Using Linked Lists
#include<bits/stdc++.h>
using namespace std;
 
struct node
{
    long long int data;
    node* next;
};

struct node* insert(struct node *head,long long int data)
{
    struct node *t = (struct node *)malloc(sizeof(struct node));
    t->data = data;
    t->next = NULL;
    static struct node *last = NULL;  
    if(head == NULL)
    {
        head = t;
        last = t;
    }
    else
    {
        last->next = t;
        last = t;
    }
    return head;
}
 
struct node * solve(struct node* head)
{
    struct node *temp = head, *p = NULL;
    while(temp != NULL)
    { 
        if(temp->data % 2 == 0) 
        {
            struct node* pre, *next, *start, *end;  
            pre = NULL;
            start = temp;
            while(temp != NULL && temp->data % 2 == 0)                                         {
                next = temp->next;
                temp->next = pre;
                pre = temp;
                temp = next;
            }
            end = temp;
            start->next = temp;
            if(p == NULL)
                head=pre;
            else
                p->next=pre;
        }
        else
        {
            p = temp;
            temp = temp->next;
        }
    }
    return head;
}
 
void display(struct node *head)
{
    struct node* temp = head;
    while(temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
}

int main()
{
    int n;
    cin >> n;
    long long int temp;
    struct node *head = NULL;
    for(int i = 0; i < n; i++)
    {
        cin >> temp;
        head = insert(head, temp);
    }
    head = solve(head);
    display(head);
    return 0;
}
// Using Stacks and Arrays
#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    int n;
    cin >> n;
    long long int arr[n];
    stack<int> s;
    for(int i = 0; i < n; i++) 
        cin >> arr[i];
    for(int i = 0; i < n; i++)
    {
        if(arr[i] % 2 != 0)  
            cout << arr[i] << " ";
        else            
        {
            while(arr[i] % 2 == 0 && i < n)
            {
                s.push(arr[i]);
                i++;
            }
            while(!s.empty())  
            {  
                cout << s.top() << " ";
                s.pop();
            }
            i--;      
        }
    }
    return 0;
}
