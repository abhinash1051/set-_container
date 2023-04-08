#include<iostream>
#include<set>
using namespace std;
int main()
{

    string name = "geeksforgeeks";
 
    // declaring the string
    // and passing the string
    // in the set constructor
    set<char> my_name(name.begin(), name.end());
 
    // printing the set
    for (auto it : my_name) {
        cout << it << " ";
    }
    cout << endl;
   
  return 0;

}