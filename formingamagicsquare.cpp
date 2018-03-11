#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

void magic_square(vector< vector<int> > mat)
{
    vector<int> all_cost;
    vector< vector<int> > predef {
        {8, 1, 6}, {3, 5, 7}, {4, 9, 2},
        {6, 1, 8}, {7, 5, 3}, {2, 9, 4},
        {4, 9, 2}, {3, 5, 7}, {8, 1, 6},
        {2, 9, 4}, {7, 5, 3}, {6, 1, 8},
        {8, 3, 4}, {1, 5, 9}, {6, 7, 2},
        {4, 3, 8}, {9, 5, 1}, {2, 7, 6},
        {6, 7, 2}, {1, 5, 9}, {8, 3, 4},
        {2, 7, 6}, {9, 5, 1}, {4, 3, 8}
    };

    vector< vector<int> >::iterator row, i;
    vector<int>::iterator col, j;

    int cost=0;
    for(row = predef.begin(), i = mat.begin(); row != predef.end(); ++row, ++i)
    {
        if(i==mat.end())
        {
            all_cost.push_back(cost);
            cost = 0;
            i = mat.begin();
        }
        for(col = row->begin(), j = i->begin(); col != row->end(); ++col, ++j)
        {
            if(*col != *j)
                cost += abs(*col - *j);
        }
    }
    all_cost.push_back(cost);
    auto m = min_element(all_cost.begin(), all_cost.end());
    cout<<*m;
}

int main(int argc, char *argv[])
{
    vector< vector<int> > mat;
    for(int i=0; i<3; ++i)
    {
        vector<int> row;
        for(int j=0; j<3; ++j)
        {
            int val;
            cin>>val;
            row.push_back(val);
        }
        mat.push_back(row);
    }
    magic_square(mat);
    return 0;
}
