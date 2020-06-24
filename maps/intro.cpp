//Basics to interface maps in c++
//They are a data structured as a key and a value pair
//Main attributes of this DS: ::insert(pair<type, type>(key, value))
//indexing can be done by: ::begin(). ::end() and ::find(key)
//::erase() to remove everything, ::erase(key) to remove a specific key , ::erase(it1, it2) to erase in a range by using iterator

#include<iostream>
#include<iterator>
#include<bits/stdc++.h>

using namespace std;

map<int, string>mp;
int main()
{
   
    string s;
    //ways to enter elements
    mp.insert({1, "overton"});
    mp.insert({2, "ramsey"});

    mp.insert({3, "football"});

    mp.insert(pair<int, string>(4, "Brazzuka"));

    for (int i=5; i<7; i++)
    {
        cin>>s;
        mp.insert({i,s});                  
    }
    //how to erase
    map<int, string>::iterator it1;*```------`````````````.


    
    it1= mp.find(2);
    mp.erase(it1);
    //erase in a range:
    auto it2 = mp.find(4);
    auto it3= mp.find(6);
    mp.erase(it2, it3);

    // how to print:
    map<int, string>::iterator it;
    cout<<"\tKey\tElement"<<endl;
    for(it= mp.begin(); it != mp.end(); it++)
    {
        cout<<"\t"<<it->first<<"\t"<< it->second<<endl;
    }
    cout<<"isEmpty?? "<<mp.empty()<<endl;

    //size of the map
    cout<<"the size of the map is:"<<mp.size()<<endl;

      


    return 0;
}