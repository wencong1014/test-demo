#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

typedef int ElemType;

typedef struct LNode{           //���嵥����ڵ�����
    ElemType data;              //ÿ���ڵ���һ������Ԫ��    
    struct LNode *next;         //ָ��ָ����һ���ڵ�    
}LNode, *LinkList ;              

//��ʼ��һ��������(��ͷ���)
bool InitList(LinkList L){
    L = (LNode *)malloc(sizeof(LNode));     //����һ��ͷ���
    if(L == NULL){          //�ڴ治�㣬����ʧ��
        return false;
    }
    L->next = NULL;         //ͷ���֮����ʱ��û�н��
    return true;
}

int main(){
    // LinkList L;     //����һ��ָ�������ָ��
    // //��ʼ��һ���ձ�
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
