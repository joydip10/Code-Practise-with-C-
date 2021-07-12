#include<iostream>

using namespace std;

class data
{
    int height;
    int weight;
public:
    void getdata(int a,int b)
    {
        height=a;
        weight=b;
    }
    void showdata()
    {
        cout<<"height = "<<height<<endl;
        cout<<"weight = "<<weight<<endl;
    }
};

data all_data(data a,int p,int q)
{
    a.getdata(p+1,q+1);
    return a;
}
int main()
{
    int a=1;
    int b=2;
    data st;
    st.getdata(a,b);
    st.showdata();
    data p;
    p=all_data(st,a,b);
    p.showdata();

    return 0;

}
