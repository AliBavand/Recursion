#include <iostream>
#include <vector>
using namespace std;

void sum_list(vector<int> list, int i, int &count)
{
    if (i == list.size())
        return;
    else if(list[i] > 0){
        count++;
        sum_list(list, i + 1, count);
    }
    else{
        sum_list(list, i + 1, count);
    }
        
}

int main()
{
    vector<int> a;
    int count = 0;
    int x;
    while (cin >> x)
        a.push_back(x);
    sum_list(a, 0, count);
    cout << "Number Of Positive Numbers = " << count << endl;
}