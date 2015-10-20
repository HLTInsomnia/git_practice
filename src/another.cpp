#include <iostream>
#include <cstdlib>

using namespace std;


int main(int argc,char **argv)
{
    int a[100];

    srand(time(NULL));

    for (int i=0;i<100;i++)
    {
        a[i] = rand()%100 + 1;
        cout << a[i] << endl;
    }

    return 0;
}
