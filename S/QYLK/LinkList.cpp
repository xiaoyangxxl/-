//
// Created by MR on 2024/7/24.
//

#include <cstdlib>
#include "LinkList.h"


//初始化链表
LinkList*Init_LinkList(){
    auto *list= (LinkList *)malloc(sizeof(LinkList));
    list->head->next= nullptr;
    list->size=0;
    return list;
}
//插入
void Insert_LinkList(LinkList* list, int pos, LinkNode* data){
    if(data == nullptr){
        return;
    }
    if(list== nullptr){
        return;
    }
    if(pos<0||pos>list->size){
        return;
    }
    //辅助指针---查找插入位置
    auto *pCurrent= reinterpret_cast<LinkNode *>(&(list->head));
    for(int i=0;i<pos;i++){
        pCurrent=pCurrent->next;
    }
    //插入
    data->next=pCurrent->next;
    pCurrent->next=data;

    list->size++;
}
//根据位置删除
void RemoveByPos_LinkList(LinkList* list,int pos){
    if(list== nullptr){
        return;
    }
    if(pos<0||pos>=list->size){
        return;
    }
    //辅助指针
    auto *pCurrent= reinterpret_cast<LinkNode *>(&(list->head));
    for(int i=0;i<pos;i++){
        pCurrent=pCurrent->next;
    }
    //删除结点
    pCurrent->next=pCurrent->next->next;
    list->size--;
}
//查找
int Find_LinkList(LinkList* list,LinkNode*data,COMPARENODE compartment){
    if(list== nullptr){
        return -1;
    }
    if(data== nullptr){
        return -1;
    }
    //辅助指针
    LinkNode *pCurrent=list->head->next;
    int index=0;
    int flag=-1;
    while (pCurrent!= nullptr){
        if(compartment(pCurrent,data)==0){
            flag=index;
            break;
        }
        pCurrent=pCurrent->next;
        index++;
    }
    return flag;
}
//返回链表大小
 int  Size_LinkList(LinkList* list){
    return list->size;
}
//打印
void Print_LinkList(LinkList* list,PRINTNODE print){
    if(list== nullptr){
        return;
    }
    //辅助指针
    LinkNode *pCurrent=list->head->next;
    while (pCurrent!= nullptr){
        print(pCurrent);
        pCurrent=pCurrent->next;
    }
}
//释放链表内存
void FreeSpace_LinkList(LinkList* list){
    if(list== nullptr){
        return;
    }
    free(list);
}