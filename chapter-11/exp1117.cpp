#include <iostream>
#include <set>
#include <map>
#include <vector>
#include <algorithm>
#include <iterator>

using namespace std;

int main() {
    vector<int> v{1, 2, 3, 4, 5};
    multiset<int> miset{0, -1};

    copy(v.begin(), v.end(), inserter(miset, miset.end()));
    // copy(v.begin(), v.end(), back_inserter(miset));
    copy(miset.begin(), miset.end(), inserter(v, v.end()));
    copy(miset.begin(), miset.end(), back_inserter(v));

    map<string, int> wordcount{{"hello", 1}};
    map<string, int>::const_iterator map_it = wordcount.begin();
    cout << map_it->first << endl;
    return 0;
}

