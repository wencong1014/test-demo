#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

typedef int ElemType;

typedef struct LNode{           //定义单链表节点类型
    ElemType data;              //每个节点存放一个数据元素    
    struct LNode *next;         //指针指向下一个节点    
}LNode, *LinkList ;              

//初始化一个单链表(带头结点)
bool InitList(LinkList L){
    L = (LNode *)malloc(sizeof(LNode));     //分配一个头结点
    if(L == NULL){          //内存不足，分配失败
        return false;
    }
    L->next = NULL;         //头结点之后暂时还没有结点
    return true;
}

int main(){
    // LinkList L;     //声明一个指向单链表的指针
    // //初始化一个空表
    // InitList(L);
    // free(L);
    // printf("ok\n");
    
    int a[3] ={10,20,30};
    int *p = a;
    int i = 0;

    printf("p = %p  *(p) = %d\n", p, *(p));
    printf("p+1 = %p  p[%d] = %d\n", p+1, i, p[i++]);
    printf("sizeof(int) = %d\n", sizeof(int));
    

    return 0;
}
