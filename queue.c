#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#define MAX 5

void Enqueue();
void dequeue();
void display();

int front = -1, rear = -1;
int queue[MAX];
int main()
{
    int ch;
    system("cls");
    while (1)
    {
        printf("\n*************main menu*************");
        printf("\n1.insert an element\n2.Delete an element\n3.Display the queue\n4.Exit\n");
        printf("\n====================================");
        printf("\nEnter The Choice=>");
        scanf("%d", &ch);

        switch (ch)
        {
        case 1:
            Enqueue();
            break;
        case 2:
            dequeue();
            break;
        case 3:
            display();
            break;
        case 4:
            exit(0);
            break;
        default:
            printf("\n\nEnter valid choice");
            break;
        }
    }
}

void Enqueue()
{
    int val;
    if (rear == MAX - 1)
    {
        printf("\n\nOVERFLOW");
    }
    else
    {
        if (front == -1)
        {
            front = 0;
        }
        printf("Enter The Values=>");
        scanf("%d", &val);
        rear++;
        queue[rear] = val;
        printf("\n\nValue inserted ");
    }
}

void dequeue()
{
    if (front == -1)
    {
        printf("Underflow");
    }
    else
    {
        printf("Element Delete from Queuq :%d", queue[front]);
        front++;
    }
}

void display()
{
    if (front == -1)
    {
        printf("Underflow");
    }
    else
    {
        int i;
        for (i = front; i <= rear; i++)
        {
            printf("\t%d", queue[i]);
        }
    }
}