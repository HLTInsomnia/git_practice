#include <iostream>
#include <cstdlib>

using namespace std;

void foobar(void)
{
    int foobar;
    cout  << "You will never get here!"
}


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
