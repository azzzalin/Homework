#include <iostream>

using namespace std;
template <class T>
struct Node
{
    T data;
    Node* parent, * left, * right;
};


template <class T>
class FBTree
{
private:
    Node<T>* Head;
public:
    FBTree() : Head(NULL)
    {

    }
    void InsertNode(int n)
    {
        Node<T>* z = new Node<T>;
        Node<T>* y = NULL;
        Node<T>* x = Head;

        z->data = n;

        while (x != NULL)
        {
            y = x;
            if ((z->data) < (x->data))
                x = x->left;
            else
                x = x->right;
        }
        z->parent = y;
        if (y == NULL)
            Head = z;
        else
        {
            if ((z->data) < (y->data))
                y->left = z;
            else
                y->right = z;
        }
        z->left = NULL;
        z->right = NULL;

        
    }
    FBTree(int n)
    {
        InsertNode(n);
    }
 
    T FindNode(T n)
    {
        Node<T>* x = Head;

        while ((x != NULL) && (x->data != n))
            if (n < (x->data))
                x = x->left;
            else
                x = x->right;
        if (x == NULL) {
            return NULL;
        }
        return x->data;
    }
    Node<T>* GetHead()
    {
        return Head;
    }
    
    void SymmetricShow(Node<T>* x)
    {
        if (x == NULL)
            return;
        SymmetricShow(x->left);
        cout << (x->data);
        SymmetricShow(x->right);
    }
    void DeleteNode(T n)
    {
        Node<T>* pointer = Head;
        Node<T>* parent = NULL;

        while ((pointer != NULL) && (pointer->data != n))
        {
            parent = pointer;
            if (n < (pointer->data))
                pointer = pointer->left;
            else
                pointer = pointer->right;
        }

        if (pointer != NULL)
        {
            Node<T>* removed = NULL;

            if ((pointer->left == NULL) || (pointer->right == NULL))
            {
                Node<T>* child = NULL;
                removed = pointer;

                if ((pointer->left) != NULL)
                    child = pointer->left;
                else
                    if ((pointer->right) != NULL)
                        child = pointer->right;

                if (parent == NULL)
                    Head = child;
                else
                {
                    if ((parent->left) == pointer)
                        parent->left = child;
                    else
                        parent->right = child;
                }
            }
            else 
            {
                Node<T>* mostLeft = pointer->right;
                Node<T>* mostLeftParent = pointer;

                while ((mostLeft->left) != NULL)
                {
                    mostLeftParent = mostLeft;
                    mostLeft = mostLeft->left;
                }

                pointer->data = mostLeft->data;
                removed = mostLeft;

                if ((mostLeftParent->left) == mostLeft)
                    mostLeftParent->left = NULL;
                else
                    mostLeftParent->right = mostLeft->right;
            }
            delete removed;
        }
    }
};





int main()
{
    FBTree<int> f;

    f.InsertNode(1);
    f.InsertNode(2);
    f.InsertNode(3);
    f.InsertNode(4);
    f.InsertNode(5);
    f.InsertNode(6);
    cout << "Binary Search Tree:" << endl;
    f.SymmetricShow(f.GetHead());
    cout << endl;
    int n;
    cout << "Enter Element for Search: ";
    cin >> n;
    if (f.FindNode(n) != NULL)
        cout << endl << "This element  has in tree" << endl << endl;
    else
        cout << endl << "This element hasn't in tree" << endl << endl;

    system("pause");
}
Footer
© 2022 GitHub, Inc.
Footer navigation
Terms
