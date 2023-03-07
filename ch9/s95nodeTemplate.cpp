//例9-5 节点类模板
// node.h
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