#include <stdio.h>
#include <stdlib.h>

// 声明数据类型,以便统一使用
typedef int datatype;
// 声明单向链表的节点
typedef struct node
{
    datatype data;
    struct node *next;
} Node, *SinglyLinkedList;
// Node表示节点的类型,LinkedList表示指向Node节点类型的指针类型.

// 单向链表的创建,尾插法
SinglyLinkedList singly_linked_list_create(SinglyLinkedList temp)
{
    printf("singly_linked_list_create...\n");
    temp = (Node *)malloc(sizeof(Node));
    if (temp == NULL)
    {
        printf("list_init error:%s", "内存不足");
        return NULL;
    }
    temp->next = NULL;
    return temp;
}

// 单向链表的释放
void singly_linked_list_destory(SinglyLinkedList L)
{
    printf("singly_linked_list_destory...\n");
    Node *p, *tmp;
    p = L->next;
    int i = 0;
    for (; p != NULL; i++)
    {
        tmp = p; // 在tmp保存当前节点的指针
        p = p->next;
        free(tmp); // 释放tmp指向的当前节点的内存
        printf("destory %d:node.data:%d\n", i, tmp->data);
    }
}

// 单向链表的长度
int singly_linked_list_length(SinglyLinkedList L)
{
    printf("singly_linked_list_length...\n");
    if (L == NULL) {
        printf("L is null when length...");
        return 0;
    }

    Node *p = L->next;
    int length = 0;
    for (; p != NULL; length++)
    {
        p = p->next;
    }
    printf("length is %d\n", length);
    return length;
}

// 单向链表的打印
void singly_linked_list_print(SinglyLinkedList L)
{
    printf("singly_linked_list_print...\n");
    Node *p = L;
    printf("singly_linked_list_print...%d", p->data);
    for (int i = 0; p != NULL; i++)
    {
        printf("单链表第%d个元素的值为:%d\n", i, p->data);
        p = p->next;
    }
    printf("singly_linked_list_print...end\n");
}

// 在单向链表中删除值为x的元素
SinglyLinkedList singly_linked_list_delete(SinglyLinkedList L, datatype x)
{
    Node *pre, *p;

    p = L->next;

    for (; p->data != x;)
    {
        /* code */
    }

    pre->next = p->next; // 删除操作,将前驱的next指向后继
    free(p);

    return L;
}

// 单向链表的插入,尾插法
void singly_linked_list_append(SinglyLinkedList L, datatype value)
{
    printf("singly_linked_list_apend...\n");

    if (L == NULL)  {
        printf("L is null when append 1\n");
        L = (Node *)malloc(sizeof(Node));
        if(L == NULL) {
            printf("malloc error when init\n");
        }
        L->data = value;
        L->next = NULL;
        printf("L.data:%d\n", L->data);
        return;
    }

    Node *temp = (Node *)malloc(sizeof(Node));
    if (temp == NULL) {
        printf("malloc error when append\n");
        return;
    }
    temp->data = value;
    temp->next = NULL;

    Node *p = L->next;
    for (; p != NULL;)
    {
        p = p->next;
    }

    printf("singly_linked_list_append...end\n");
    p->next = temp;
}

int main()
{
    SinglyLinkedList L; // undefine
    L = NULL; // null
    if(L == NULL) {
        printf("l is null\n");
    } else {
        printf("l is not null\n");
    }
    //return 0;

    // = singly_linked_list_create(root);
    //printf("data:%d\n", L->data);

    for (int i = 5; i <= 5; i++)
    {
        printf("append:%d\n", i);
        singly_linked_list_append(L, i);
    }
    //singly_linked_list_length(L);

    singly_linked_list_print(L);

    singly_linked_list_destory(L);
}

int main1()
{
    Node *head = NULL;
    int n; // 表示创建多少个节点

    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        int a; // 表示传递给节点的数据值
        scanf("%d", &a);
        //insert(head, a); // insert 增加链表节点
    }

    // 输出链表
    Node *temp = head;
    for (; temp != NULL;)
    {
        printf("%d", temp->data);
        temp = temp->next;
    }

    return 0;
}
