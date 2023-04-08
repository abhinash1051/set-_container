#include<iostream>
#include<set>
using namespace std;
int main()
{
    set<int>number;

    number.insert(10);
    number.insert(11);
    number.insert(13);
    number.insert(15);
    

    cout<<"element of the set are  ";
    for(auto i = number.begin(); i != number.end();i++)
    cout<<*i<< " ";

    return 0;
    

}