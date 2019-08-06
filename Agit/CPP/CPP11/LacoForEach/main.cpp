#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int> vec;
    vec.resize(10, 0);

    for (int v : vec)
        cout << v << '\n';

    for (int &v : vec)
        cout << v << '\n';

    cout << "Hello World!" << endl;
    return 0;
}

