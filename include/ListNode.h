#include<stack>


//ListNode* pNode1 = CreateListNode(1);
//ListNode* pNode2 = CreateListNode(2);
//ListNode* pNode3 = CreateListNode(3);
//ListNode* pNode4 = CreateListNode(4);
//ListNode* pNode5 = CreateListNode(5);
//
//ConnectListNodes(pNode1, pNode2);
//ConnectListNodes(pNode2, pNode3);
//ConnectListNodes(pNode3, pNode4);
//ConnectListNodes(pNode4, pNode5);

 
struct ListNode
{
    int val;
    ListNode* next;
    ListNode(){}
    ListNode(int x) : val(x), next(NULL) {}
};

ListNode* CreateListNode(int value)
{
    ListNode* pNode = new ListNode();
    pNode->val = value;
    pNode->next = nullptr;
    return pNode;
}

void ConnectListNodes(ListNode* pCurrent, ListNode* pNext)
{
    if (pCurrent == nullptr)
    {
        printf("Error to connect two nodes.\n");
        exit(1);
    }
    pCurrent->next = pNext;
}

void PrintListNodeValue(ListNode* pNode)
{
    if (pNode == nullptr)
        printf("The node is nullptr.\n");
    else
        printf("The value of the node is %d .\n", pNode->val);
}

void PrintListNode(ListNode* pHead)
{
    printf("PrintList starts.\n");
    ListNode* pNode = pHead;
    while (pNode != nullptr)
    {
        printf("%d\t", pNode->val);
        pNode = pNode->next;
    }
    printf("\nPrintList ends.\n");
}

void DestroyList(ListNode* pHead)
{
    ListNode* pNode = pHead;
    while (pNode != nullptr)
    {
        pHead = pHead->next;
        delete pNode;
        pNode = pHead;
    }
}

void AddToTail(ListNode**pHead, int value)
{
    ListNode* pNew = new ListNode();
    pNew->val = value;
    pNew->next = nullptr;
    if (*pHead = nullptr)
        *pHead = pNew;
    else
    {
        ListNode* pNode = *pHead;
        while (pNode->next != nullptr)
            pNode = pNode->next;
        pNode->next = pNew;
    }
}

void RemoveNode(ListNode** pHead, int value)
{
    if (*pHead == nullptr || pHead == nullptr)
        return;
    ListNode* pToBeDeleted = nullptr;
    if ((*pHead)->val == value)
    {
        pToBeDeleted = *pHead;
        *pHead = (*pHead)->next;
    }
    else
    {
        ListNode* pNode = *pHead;
        while (pNode->next != nullptr && pNode->next->val != value)
            pNode = pNode->next;
        if (pNode->next != nullptr && pNode->next->val == value)
        {
            pToBeDeleted = pNode->next;
            pNode->next = pNode->next->next;
        }
    }
    if (pToBeDeleted != nullptr)
    {
        delete pToBeDeleted;
        pToBeDeleted = nullptr;
    }
}
