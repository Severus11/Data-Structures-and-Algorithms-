#include <iostream> 
#include <iterator> 
#include <map> 
#include<string>
  
using namespace std; 
  
int main() 
{ 
  
    // empty map container 
    map<string, int> gquiz1; 
  
    // insert elements in random order 
    for (int i=0; i<6; i++)
    {
        int ele;
        string ss;
        cin>>ss>>ele;
        gquiz1.insert(pair<string, int>(ss, ele));

    }
     
    /*gquiz1.insert(pair<int, int>(2, 30)); 
    gquiz1.insert(pair<int, int>(3, 60)); 
    gquiz1.insert(pair<int, int>(4, 20)); 
    gquiz1.insert(pair<int, int>(5, 50)); 
    gquiz1.insert(pair<int, int>(6, 50)); 
    gquiz1.insert(pair<int, int>(7, 10)); */
  
    // printing map gquiz1 
    map<int, int>::iterator itr; 
    cout << "\nThe map gquiz1 is : \n"; 
    cout << "\tKEY\tELEMENT\n"; 
    for (itr = gquiz1.begin(); itr != gquiz1.end(); ++itr) { 
        cout << '\t' << itr->first 
             << '\t' << itr->second << '\n'; 
    } 
    cout << endl;

    //int check_k=2;
    
    string s;
    cin>>s;
    for (itr = gquiz1.begin(); itr != gquiz1.end(); ++itr)
    {
        if (gquiz1[c]==40)
        {
            cout<<gquiz1.at(c);
            cout<<"haan bhai hai"<<endl;
            break;
        }
    }







    return 0;
}