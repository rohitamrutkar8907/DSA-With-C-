#include<bits/stdc++.h>
using namespace std;
int main()
{
// Create a map of strings to integers
map<string, int> map;

// Insert some values into the map
map["one"] = 1;
map["two"] = 2;
map["three"] = 3;


// Iterate through the map and print the elements
for(auto i: map)
{
    cout<<i.first<<" "<<i.second<<endl;
}

//unorder_map
unordered_map<string, int> umap;

// inserting values by using [] operator
  umap["PI"] = 3;

// inserting value by insert function
umap.insert(make_pair("e", 2));

//search
cout<<umap.at("e")<<endl;

//count
cout<<umap.count("e")<<endl;

//erase
umap.erase("e");
//find
string key = "PI";
if (umap.find(key) == umap.end())
    cout << key << " not found\n\n";
return 0;
}
