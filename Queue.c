#include "stdio.h"
#include "string.h"
#include "stdlib.h"
#include "math.h"

int queue[500005], front=-1, back=-1;
void push(int val)
{
        if (front == - 1)
        {front = 0;
        back=0;}
        queue[back] = val;
        back++;
}
void pop()
{
front++;
}
int top()
{
    return queue[front];
}
int empty()
{
    if(front==-1) return 1;
    if(front==back) return 1;
    if(front>back) return 1;
    return 0;
}

int main()
{
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        char s[50];
        int x;
        scanf(" %s", s);
        if (s[0] == 't')
        {
            if (empty()) printf("Invalid\n");
            else                
                printf("%d\n", top());
        }
        else if (s[0] == 'p' && s[1] == 'o')
        {
            if (empty()) printf("Invalid\n");
            else    pop();
        }
        else
        {
            scanf("%d", &x);
            push(x);
        }
    }
    return 0;
}