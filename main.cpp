#include <iostream>
#include "Node.h"
#include "Tree.h"
#include <string>
using namespace std;

int main() {

    //Node *root = new Node(13.5);
    //cout<<root->getKey();
    Tree tree = Tree();
    tree.insert(13.5);
    tree.insert(2.5);
    tree.insert(15.5);
    tree.insert(1.5);
    tree.insert(25.5);
    tree.insert(3.5);
    tree.insert(4.5);
    tree.output();

    return 0;
}
