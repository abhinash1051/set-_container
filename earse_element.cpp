#include<iostream>
#include<set>
using namespace std;
int main()
{
    set<int>num{1,3,4,5,6,6};

    set<int> :: iterator it1,it2;

    it1 = num.begin();
    it2  =num.end();


    it2--;
    it2--;
    num.erase(it1,it2);

    for (auto it = num.begin();
        it != num.end(); ++it)
        cout << ' ' << *it;
    return 0;


    

}