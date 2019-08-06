#include <iostream>
#include <vector>

using namespace std;


template <typename T>
void printElements(const T& coll)   // collection = coll
{
    for (const auto &elem : coll)
    {
        cout << elem << endl;
    }
}

int main()
{


    for(int i: {2, 3, 5, 7, 9, 13, 17, 19})
    {
        cout << i << endl;
    }

    cout << "\n\nVECTOR\n";

    vector<double> vec;
    vec.push_back(3.0);
    vec.push_back(5.6);
    for (auto &elem : vec)
    {
        elem *= 3;
        cout << elem << endl;
    }

    cout << "\n\nTesting template print\n";
    printElements(vec);

    int array[] = {1, 2, 3, 4, 5};

   long sum = 0;
   for (int x : array)
       sum += x;

   for (auto elem : {sum, sum*2, sum*4})    // print some multiples of sum
       cout << elem << endl;



    return 0;
}

