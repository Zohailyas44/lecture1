#include <iostream>

using namespace std;
class array
{
    int no[4];
    char name[4];
public:
    int no()
    {
        for(int i=0;i<4;i++)
        {
            cin>>no[i];
            cin>>name[i];
        }
    }
        int show()
        {
            for(int i=0;i<4;i++)
            {
                cout<<"no"<<no[4]<<endl;
                cout<<"name"<<name[4]<<endl;
            }
        }

};
int main()
{
    array n1;
    n1.no();
    n1.show();
    return 0;
}
