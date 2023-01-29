#include<bits/stdc++.h>

using namespace std;

void printVector(vector<int> vtr)
{
    for(int i=0; i<vtr.size();++i)
    {
        cout<<vtr[i]<<" ";
    }
    cout<<endl;
}

int main()
{
    vector<int> vec(4,1); //initializing 1 at 4 positions

    vec.push_back(33);
    vec.push_back(34);
    vec.push_back(35);
    vec.push_back(36);
    printVector(vec);

    vec.insert(vec.begin(),0); //inserting 0 at position 0
    vec.insert(vec.end(),4,2); //inserting 2 at last 4 positions
    printVector(vec);

    vec.erase(vec.begin()+5); //deleting 33 from position 6
    printVector(vec);

    vec.erase(vec.begin()+5, vec.begin()+8); //deleting 34,35,36
    printVector(vec);

    cout<<vec.back()<<endl; //printing the last element
    vec.pop_back(); //deleting the last element
    printVector(vec);

    vec.clear(); //deleting all elements

    if(vec.empty()) //checking if vector is empty
    {
        cout<<"empty"<<endl;
    }
    vec = {1,2,3,4};
    printVector(vec);
    cout<<"Size: "<<vec.size()<<endl;

    vector<vector<int>> vect(3,vector<int>(3,1)); //Two dimensional vector

    for(int i=0;i<vect.size();++i)
    {
        for(int j=0; j<vect.size();++j){
            cout<<vect[i][j]<<" "; 
        }
        cout<<endl;
    }

    return 0;
}
