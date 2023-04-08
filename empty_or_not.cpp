#include<iostream>
#include<set>
using namespace std;
int main()
{
    set<int>num;

    num.insert(12);
    num.insert(13);
    num.insert(14);
    num.insert(15);
    num.insert(16);
    num.insert(17);
    num.insert(18);

    if(num.empty())
    {
        cout<<"true ";

    }
    else
    {
        cout<<"false";
    }

    
    return 0; 

}