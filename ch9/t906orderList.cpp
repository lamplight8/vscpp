//习题9-6 通过对从本章的链表类模板LinkedList进行组合
//编写有序链表模板OrderList，添加成员函数insert实现链表元素的有序递增插入
//声明两个int类型有序链表a和b，分别插入5个元素，然后把b中的元素插入a中
#include <iostream>
#include <cassert>
using namespace std;

//结点类
template<class T>
class Node {
private:
    Node<T>* next;
public:
    T data;
public:
    Node(const T& data, Node<T>* next = 0);
    void insertAfter(Node<T>* p);//在本节点后插入一个节点
    Node<T>* deleteAfter();//删除本节点的后继节点，并返回其地址
    Node<T>* nextNode();//返回后继节点的地址
    const Node<T>* nextNode() const;
};

template<class T>
Node<T>::Node(const T& data, Node<T>* next)
:data(data), next(next)
{

}

template<class T>
void Node<T>::insertAfter(Node<T>* p)
{
    p->next = next;
    next = p;
}

template<class T>
Node<T>* Node<T>::deleteAfter()
{
    Node<T>* tempPtr = next;
    if (!next)
        return 0;
    next = tempPtr->next;
    return tempPtr;
}

template<class T>
Node<T>* Node<T>::nextNode()
{
    return next;
}

template<class T>
const Node<T>* Node<T>::nextNode() const
{
    return next;
}

//链表类
template<class T>
class LinkedList {
private:
    Node<T>* front;//表头指针
    Node<T>* rear;//表尾指针
    Node<T>* prevPtr;//前驱指针
    Node<T>* currPtr;//当前指针
    int size;//元素个数
    int position;//元素序号

    //新建一个结点
    Node<T>* newNode(const T& item, Node<T>* ptrNext = nullptr);
    void freeNode(Node<T>* p);//删除一个结点
    void copy(const LinkedList<T>& L);//复制一个结点
public:
    LinkedList();//创建空链表
    LinkedList(const LinkedList<T>& L);//链表的复制构造函数
    ~LinkedList();//销毁链表
    LinkedList<T>& operator=(const LinkedList<T>& L);//链表对象赋值操作
    int getSize();//返回链表长度
    bool isEmpty() const;//判断链表是否为空
    void reset(int pos = 0);//初始化游标的位置
    void next();//使游标移动到下一个结点
    bool endOfList() const;//游标是否到了链尾
    int currentPosition() const;//返回游标当前的位置
    void insertFront(const T& item);//在表头插入节点
    void insertRear(const T& item);//在表尾插入节点
    void insertAt(const T& item);//插入前驱节点
    void insertAfter(const T& item);//插入后继节点
    T deleteFront();//删除头节点
    void deleteCurrent();//删除当前节点
    T& data();//返回当前节点的数据引用
    const T& data() const;//返回当前节点数据的常引用
    void clear();//清空链表
};

//新建一个结点
template<class T>
Node<T>* LinkedList<T>::newNode(const T& item, Node<T>* ptrNext)
{
    Node<T>* p;
    p = new Node<T>(item, ptrNext);
    assert(p);
    return p;
}

//删除一个结点
template<class T>
void LinkedList<T>::freeNode(Node<T>* p)
{
    delete p;
}

//复制一个结点
template<class T>
void LinkedList<T>::copy(const LinkedList<T>& L)
{
    if(L.size == 0)
        return;
    front = rear = newNode(L.front->data);
    for(Node<T>* srcNode = L.front->nextNode(); srcNode != nullptr; srcNode = srcNode->nextNode())
    {
        Node<T>* p = newNode(srcNode->data);
        rear->insertAfter(p);
        rear = p;
    }
    size = L.size;
    reset(position = L.currentPosition());
}

//创建空链表
template<class T>
LinkedList<T>::LinkedList()
: front(nullptr)
, rear(nullptr)
, prevPtr(nullptr)
, currPtr(nullptr)
, size(0)
, position(0)
{

}

//链表的复制构造函数
template<class T>
LinkedList<T>::LinkedList(const LinkedList<T>& L)
: front(nullptr)
, rear(nullptr)
, prevPtr(nullptr)
, currPtr(nullptr)
, size(0)
, position(0)
{
    copy(L);
}

//销毁链表
template<class T>
LinkedList<T>::~LinkedList()
{
    clear();
}

//链表对象赋值操作
template<class T>
LinkedList<T>& LinkedList<T>::operator=(const LinkedList<T>& L)
{
    clear();
    copy();
    return *this;
}

//返回链表长度
template<class T>
int LinkedList<T>::getSize()
{
    return size;
}

//判断链表是否为空
template<class T>
bool LinkedList<T>::isEmpty() const
{
    return size == 0;
}

//初始化游标的位置
template<class T>
void LinkedList<T>::reset(int pos)
{
    if(pos >= 0 && pos <= size)
    {
        position = 0;
        prevPtr = nullptr;
        currPtr = front;
        while(pos--)
            next();
    }
    else
    {
        position = pos;
        prevPtr = nullptr;
        currPtr = nullptr;
    }
}

//使游标移动到下一个结点
template<class T>
void LinkedList<T>::next()
{
    position++;
    prevPtr = currPtr;
    if(currPtr)
        currPtr = currPtr->nextNode();
}

//游标是否到了链尾
template<class T>
bool LinkedList<T>::endOfList() const
{
    return currPtr == nullptr;
}

//返回游标当前的位置
template<class T>
int LinkedList<T>::currentPosition() const
{
    return position;
}

//在表头插入节点
template<class T>
void LinkedList<T>::insertFront(const T& item)
{
    front = newNode(item, front);
    if(isEmpty())
        rear = front;
    size++;
    reset(++position);
}

//在表尾插入节点
template<class T>
void LinkedList<T>::insertRear(const T& item)
{
    Node<T>* p = newNode(item);
    if(isEmpty())
    {
        front = rear = p;
    }
    else
    {
        rear->insertAfter(p);
        rear = p;
    }
    size++;
    reset(position);
}

//插入前驱节点
template<class T>
void LinkedList<T>::insertAt(const T& item)
{
    if(currPtr)
    {
        Node<T>* p = newNode(item, currPtr);
        if(prevPtr)
            prevPtr->insertAfter(p);
        else
        {
            front = prevPtr = p;
        }
        size++;
        reset(++position);
    }
}

//插入后继节点
template<class T>
void LinkedList<T>::insertAfter(const T& item)
{
    if(currPtr)
    {
        Node<T>* p = newNode(item, currPtr->nextNode());
        currPtr->insertAfter(p);
        if(rear == currPtr)
            rear = p;
        size++;
    }
}

//删除头节点
template<class T>
T LinkedList<T>::deleteFront()
{
    assert(!isEmpty());
    Node<T>* p = front;
    front = front->nextNode();
    if(--size == 0)
        rear = nullptr;
    reset(--position);
    T item = p->data;
    freeNode(p);
    return item;
}

//删除当前节点
template<class T>
void LinkedList<T>::deleteCurrent()
{
    if(currPtr)
    {
        if(front == currPtr)
            front = currPtr->nextNode();
        if(rear == currPtr)
            rear = prevPtr;
        if(prevPtr)
            prevPtr->deleteAfter();
        freeNode(currPtr);
        size--;
        reset(position);
    }
}

//返回当前节点数据的引用
template<class T>
T& LinkedList<T>::data()
{
    if(!currPtr)
    {
        cerr << "Current node is invalid!" << endl;
        exit(1);
    }
    return currPtr->data;
}

//返回当前节点数据的常引用
template<class T>
const T& LinkedList<T>::data() const
{
    if(!currPtr)
    {
        cerr << "Current node is invalid!" << endl;
        exit(1);
    }
    return currPtr->data;
}

//清空链表
template<class T>
void LinkedList<T>::clear()
{
    while(isEmpty())
        deleteFront();
}

//顺序表类
template<class T>
class OrderList
{
private:
    LinkedList<T>* p;
public:
    OrderList();
    ~OrderList();
    LinkedList<T>* getLinkList() const;
    void insert(const T& item);
};

template<class T>
OrderList<T>::OrderList()
{
    p = new LinkedList<T>();
}

template<class T>
OrderList<T>::~OrderList()
{
    p->clear();
}

template<class T>
LinkedList<T>* OrderList<T>::getLinkList() const
{
    return p;
}

template<class T>
void OrderList<T>::insert(const T& item)
{
    p->reset(0);
    if(p->isEmpty())
        p->insertFront(item);
    else{
        while(!p->endOfList() && item>p->data())
            p->next();
        if(p->endOfList())
            p->insertRear(item);
        else
            p->insertAt(item);
    }
}

//主程序
int main()
{
    int i, n;
    OrderList<int> a;
    a.insert(27);
    a.insert(38);
    a.insert(25);
    a.insert(66);
    a.insert(41);
    OrderList<int> b;
    b.insert(100);
    b.insert(20);
    b.insert(80);
    b.insert(50);
    b.insert(30);

    LinkedList<int>* p = b.getLinkList();
    p->reset(0);
    while(!p->endOfList())
    {
        a.insert(p->data());
        p->next();
    }

    p = a.getLinkList();
    p->reset(0);
    
    n = p->getSize();
    for(i=0; i<n; i++)
    {
        if(i<n-1)
            cout<<p->data()<<", ";
        else
            cout<<p->data()<<endl;
        p->next();
    }
    
    return 0;
}