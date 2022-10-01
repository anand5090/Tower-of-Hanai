#include<iostream>
using namespace std;
void Toh(int n,char beg,char aux,char end)
{
    if(n>0)
    {
        Toh(n-1,beg,end,aux);
        cout<<"\n"<<beg<<"->"<<end;
        Toh(n-1,aux,beg,end);
    }
}
int main()
{
    Toh(4,'A','B','C');
}