//
// Created by MR on 2024/7/24.
//

#ifndef DYDEMOARRAY_CIRCLELINKLIST_H
#define DYDEMOARRAY_CIRCLELINKLIST_H


//链表的小结点
typedef struct CIRCLELINKNODE {
    struct CIRCLELINKNODE*next{};
    int size{};
}CircleLinkNode;

//链表结构体
typedef struct CIRCLELINKLIST{
    CircleLinkNode * head;
    int size;
}CircleLinkList;

//编写针对链表结构体操作的API函数

//比较回调
typedef int (*COMPARENODE)(CircleLinkNode*,CircleLinkNode*);
//打印回调
typedef void(*PRINTNODE)(CircleLinkNode*);

#define CIRCLELINKLIST_TRUE 1;
#define CIRCLELINKLIST_FALSE 0;

//初始化函数
CircleLinkList *Init_CircleLinkList();
//插入函数
void Insert_CircleLinkList(CircleLinkList * clist,int pos,CircleLinkNode* data);
//获得第一个元素
CircleLinkNode * Front_CircleLinkList(CircleLinkList * clist);
//根据位置删除
void RemoveByPos_CircleLinkList(CircleLinkList * clist,int pos);
//根据值删除
void RemoveByValue_CircleLinkList(CircleLinkList * clist, const char *data, COMPARENODE* compare);
//获取链表长度
int Size_CircleLinkList(CircleLinkList * clist);
//判断是否为空
int IsEmpty_CircleLinkList(CircleLinkList * clist);
//查找
int Find_CircleLinkList(CircleLinkList * clist,CircleLinkNode* data,COMPARENODE* comparenode);
//打印
void Print_CircleLinkList(CircleLinkList * clist,PRINTNODE print);
//释放内存
void FreeSpace_CircleLinkList(CircleLinkList * clist);

class CircleLinkList1 {

};


#endif //DYDEMOARRAY_CIRCLELINKLIST_H
