#include<iostream>
#include<string>
#include<algorithm> //for reverse method

using namespace std;

int main()
{
    string str;

    //Method to input string from input stream
    cout<<"Enter a string: ";
    getline(cin,str);

    //Method to find the length of the string
    cout<<"Length of string: "<<str.length()<<endl;

    //Method to append the character at the end of the string
    str.push_back('!');
    cout<<"String after appending a character: "<<str<<endl;

    //Method to delete the last character of the string
    str.pop_back();
    cout<<"String after delete last character: "<<str<<endl;

    //Method to find the capacity of a string. Capacity is equal to or greater than the length of the string
    cout<<"Capacity of the string: "<<str.capacity()<<endl;

    //Method to decrease the capacity of the string. Capacity can be decrease to save the memory  
    str.shrink_to_fit();
    cout<<"Capacity after shrinking: "<<str.capacity()<<endl;

    //Method to increse or decrease the size of string.
    str.resize(5);
    cout<<"String after resizing: "<<str<<endl;

    //Reverses the order of the elements in the range
    reverse(str.begin(),str.end());
    cout<<"Reverse of string: "<<str<<endl;

    string str2="123";
    //Method to convert string to integer
    int i = stoi(str2);
    cout<<"String to integer i: "<<i<<endl;
    
    //Method to convert int to string
    cout<<"Integer to String: "<<to_string(i)<<endl;
    
    return 0;
}