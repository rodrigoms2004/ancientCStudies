#include <iostream>
#include <vector>

using namespace std;

int main()
{
    auto var = 10;
    cout << var << endl;

    vector<int> vec;
    vec.resize(10, 0);

    for (auto it = vec.begin(); it != vec.end(); ++it)
        cout << *it << '\n';


    return 0;
}

