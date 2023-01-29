/*unordered_set is a set in which key can be stored in any order. An unordered_set is implemented using a hash table where keys
are hashed into indices of a hash table so that the insertion is always randomized.
All operations on the unordered_set takes constant time O(1) on an average which can go up to linear time O(n) in worst case
which depends on the internally used hash function*/
#include <iostream>
#include <unordered_set> //to use unordered_set

using namespace std;

int main()
{
    unordered_set<string> myset = {"apple", "grapes", "melon", "orange", "guava"}; // declaration of unordered_set

    myset.insert("kiwi"); // Inserts new elements in the unordered_set

    // find function used to search a key. If key is not present in set, it returns an end iterator
    if (myset.find("berries") == myset.end())
        cout << "berries not found" << endl;
    else
        cout << "found" << endl;

    auto it = myset.find("orange");
    if (it == myset.end())
        cout << "not found" << endl;
    else
        cout << *it << " found" << endl;

    // accessing all elements in unordered_set

    unordered_set<string>::iterator itr;
    for (itr = myset.begin(); itr != myset.end(); itr++)
    {
        cout << *itr << " ";
    }
    cout << endl;

    // Removes from the unordered_set container either a single element or a range of elements ([first,last))
    myset.erase("melon");
    cout << "After erasing melon" << endl;
    for (itr = myset.begin(); itr != myset.end(); itr++)
    {
        cout << *itr << " ";
    }
    cout << endl;

    myset.erase(myset.find("guava"), myset.end());
    cout << "After erasing a range from myset" << endl;
    for (itr = myset.begin(); itr != myset.end(); itr++)
    {
        cout << *itr << " ";
    }
    cout << endl;

    // All the elements in the unordered_set container are dropped
    cout << "clearing..." << endl;
    myset.clear();

    // empty() returns a bool value indicating whether the unordered_set container is empty
    if (myset.empty())
        cout << "myset is empty";

    return 0;
}