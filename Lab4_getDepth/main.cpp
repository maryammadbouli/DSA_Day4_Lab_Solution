#include <iostream>
#include "Tree.h"

using namespace std;

int main()
{
    Tree tr;
    tr.add(2);
    tr.add(5);
    tr.add(4);
    tr.add(1);
    tr.add(12);
    tr.add(14);
    tr.add(44);
    tr.add(7);
    tr.add(9);
    tr.add(20);
    tr.traverse();
    cout<<"\n\nThe depth of the tree is: "<<tr.getMaxDepth()<<endl;

    return 0;
}
