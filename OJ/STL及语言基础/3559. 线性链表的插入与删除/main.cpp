#include <bits/stdc++.h>

using namespace std;

typedef struct node {
    int data;
    struct node* next;
} NODE;

NODE* insertLinklist(NODE* head, int tar, int val);
NODE* deleteLinklist(NODE* head, int tar);

NODE* insertLinklist(NODE* head, int tar, int val) {
    // TODO
    NODE *p;
    NODE *q = (NODE *)malloc(sizeof(NODE));
    q->data = tar;
    q->next = NULL;
    p = find(head, val);
    if (p) {
        q->next = p->next;
        p->next = q;
    }
    return head;
}

//删除第
NODE* deleteLinklist(NODE* head, int tar) {
    // TODO
    struct NODE * Node;
    struct NODE * Temp;
    if(!head) {
        return head;
    }
    Temp = head;
    Node = head;
    if( !(head->next)  && head->tar == tar) {
        Temp = Temp->next;
        free(head);
        head = Temp;
        return head;
    }
    while(Node) {
        if(Temp->tar == tar) {
            Node = Node->next;
            free(Temp);
            head = Temp = Node;
        } else if(Node->tar == tar) {
            Temp->next = Node->next;
            free(Node);
            Node = Temp->next;
        } else {
            Temp = Node;
            Node = Node->next;
        }
    }
    return head;
}
/* 你的代码将会被嵌入在这个位置 */

int main() {
    /* 输入及其他处理，细节隐藏不表 */

    NODE* head = createLinklist(/* 创建链表，细节隐藏不表 */);

    for (/* 若干操作，细节隐藏不表 */)
        if(/* 判断插入还是删除，细节隐藏不表 */)
            head = insertLinklist();
        else
            head = deleteLinklist();

    /* 后续判题，细节隐藏不表 */

    return 0;
}
