/*unordered_multiset can store duplicate elements. Internal implementation of unordered_multiset is same as that of unordered_set
and also uses hash table for searching, just the count value is associated with each value in former one*/

#include <iostream>
#include <unordered_set> //for unordered_multiset

using namespace std;

void display(unordered_multiset<int> ums)
{
    // printing all elements of unordered_multiset
    unordered_multiset<int>::iterator itr;
    for (itr = ums.begin(); itr != ums.end(); itr++)
    {
        cout << *itr << " ";
    }
    cout << endl;
}

int main()
{
    // Intialization
    unordered_multiset<int> ums = {1, 3, 1, 7, 2, 3, 4, 1, 6};

    // find function used to search a key. If key is not present in set, it returns an end iterator
    int val = 8;
    if (ums.find(val) == ums.end())
        cout << val << " not found" << endl;

    val = 7;
    if (ums.find(val) == ums.end())
        cout << val << " not found" << endl;
    else
        cout << val << " found" << endl;

    //  count function returns total number of occurrence in set
    val = 6;
    int cnt = ums.count(val);
    cout << val << " appears " << cnt << " times in unordered multiset 1 \n";

    // erase function deletes all instances of val
    cout<<"erasing "<<val<<"..."<<endl;
    ums.erase(val);
    display(ums);

    // equal_range returns a pair, where first is iterator
    // to first position of val and second it iterator to
    // last position to val
    cout<<"printing elements using equal_range..."<<endl;
    val = 1;
    pair<unordered_multiset<int>::iterator, unordered_multiset<int>::iterator> range = ums.equal_range(val);
    while (range.first != range.second)
    {
        cout << *range.first++ << " ";
    }
    cout << endl;

    // clear function deletes all entries from set
    ums.clear();

    if (ums.empty())
        cout << "unordered multiset is empty\n";
    else
        cout << "unordered multiset is not empty\n";

    return 0;
}
