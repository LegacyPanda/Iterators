#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    vector<string> strHeroes = {"Iron Man", "Hulk", "Black Widow", "Thor", "Hawkeye", "Captain America", "Nick Fury"};

    for(auto i = strHeroes.begin(); i != strHeroes.end(); ++i)
    {
        cout << *i + " "; 
    }

    cout << endl;

    return 0;
}