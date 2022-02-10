#include <bits/stdc++.h>
using namespace std;
deque<int> leftRot(int d, deque<int> dq){
    while (d--)
    {
        int n= dq.front();
        dq.pop_front();
        dq.push_back(n);
    }
    return dq;
}
int main() {
int size, d, num;
cin>>size;
int i=size;
cin>>d;
deque<int> dq;
    while (size--)
    {
        cin>>num;
        dq.push_back(num);
    }
    dq=leftRot(d, dq);
    for (int j=0; j<i; j++ )
    {
        cout<<dq[j]<<" ";
    }
    return 0;
}
