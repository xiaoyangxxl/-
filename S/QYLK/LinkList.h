//
// Created by MR on 2024/7/24.
//

#ifndef DYDEMOARRAY_LINKLIST_H
#define DYDEMOARRAY_LINKLIST_H

//链表小结点
typedef struct LINKNODE{
    struct LINKNODE*next;
}LinkNode;

//链表结点
typedef struct LINKLIST{
    LinkNode *head;
    int size;
}LinkList;

//遍历函数指针
typedef void(*PRINTNODE)(LinkNode*);
//比较函数指针
typedef int(*COMPARENODE)(LinkNode*,LinkNode*);

//初始化链表
LinkList*Init_LinkList();
//插入
void Insert_LinkList(LinkList* list, int pos, LinkNode* data);
//根据位置删除
void RemoveByPos_LinkList(LinkList* list,int pos);
//查找
int Find_LinkList(LinkList* list,LinkNode*data,COMPARENODE compartment);
//返回链表大小
int Size_LinkList(LinkList* list);
//打印
void Print_LinkList(LinkList* list,PRINTNODE print);
//释放链表内存
void FreeSpace_LinkList(LinkList* list);

class LinkList1 {

};


#endif //DYDEMOARRAY_LINKLIST_H
