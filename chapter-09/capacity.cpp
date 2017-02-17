#include <iostream>
#include <vector>

using namespace std;

void print_vector(const vector<int> &v) {
    cout << "size: " << v.size() << " capacity: " << v.capacity() << endl;
}

int main() {
    vector<int> ivec;
    print_vector(ivec);
    
    for (decltype(ivec.size()) ix = 0; ix != 24; ++ix) {
        ivec.push_back(ix);
    }
    print_vector(ivec);

    ivec.reserve(50);
    print_vector(ivec);

    while (ivec.size() != ivec.capacity()) {
        ivec.push_back(0);
    }

    print_vector(ivec);

    ivec.push_back(0);
    print_vector(ivec);

    ivec.shrink_to_fit();
    print_vector(ivec);

    ivec.resize(10);
    print_vector(ivec);

}
