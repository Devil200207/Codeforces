#include <iostream>
#include <vector>
#include <queue>
using namespace std;

template <typename T>
class treenode
{
public:
    T data;
    vector<treenode<T> *> children;

    treenode(T data)
    {
        this->data = data;
    }
};

treenode<int> *takeinput()
{
    int rootdata;
    cout << "enter data" << endl;
    cin >> rootdata;
    treenode<int> *root = new treenode<int>(rootdata);
    int n;
    cout << "enter no. of children of " << rootdata << endl;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        treenode<int> *child = takeinput();
        root->children.push_back(child);
    }
    return root;
}

treenode<int> *takeinputlevelwise()
{
    int rootdata;
    cout << "enter root data" << endl;
    cin >> rootdata;
    treenode<int> *root = new treenode<int>(rootdata);

    queue<treenode<int> *> pendingnodes;
    pendingnodes.push(root);
    while (pendingnodes.size() != 0)
    {
        treenode<int> *front = pendingnodes.front();
        pendingnodes.pop();

        cout << "enter no. of children of " << front->data << endl;

        int numchild;
        cin >> numchild;

        for (int i = 0; i < numchild; i++)
        {
            int childdata;
            cout << "enter " << i << "th child of " << front->data << " " << endl;
            cin >> childdata;

            treenode<int> *child = new treenode<int>(childdata);
            front->children.push_back(child);
            pendingnodes.push(child);
        }
    }
}

void printTree(treenode<int> *root)
{
    if (root == NULL)
        return;

    cout << root->data << " : ";

    for (int i = 0; i < root->children.size(); i++)
    {
        cout << root->children[i]->data << ",";
    }
    cout << endl;
    for (int i = 0; i < root->children.size(); i++)
    {
        printTree(root->children[i]);
    }
}

void printtreeLevelWise(treenode<int> *root)
{
    if (root == NULL)
        return;

    queue<treenode<int> *> pendingnodes;
    pendingnodes.push(root);

    while (pendingnodes.size() != 0)
    {
        treenode<int> *front = pendingnodes.front();
        pendingnodes.pop();
        cout << front->data << ":";

        for (int i = 0; i < front->children.size(); i++)
        {
            pendingnodes.push(front->children[i]);
            if (i == front->children.size() - 1)
            {
                cout << front->children[i]->data;
            }
            else
                cout << front->children[i]->data << ",";
        }
        cout << endl;
    }
}

int main()
{
    // treenode<int> *root = new treenode<int>(1);
    // treenode<int> *node1 = new treenode<int>(2);
    // treenode<int> *node2 = new treenode<int>(3);

    // root->children.push_back(node1);
    // root->children.push_back(node2);
    treenode<int> *root = takeinputlevelwise();
    printtreeLevelWise(root);

    return 0;
}