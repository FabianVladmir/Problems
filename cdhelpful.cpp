#include <iostream>
using namespace std;

int main()
{
    int a = 0, b = 0, c = 0;
    char ch;
    while(ch = getchar())
    {
        if(ch == '1')
            a++;
        else if(ch == '2')
            b++;
        else if(ch == '3')
            c++;
        else if(ch == '\n')
            break;
    }

    bool first = true;
    for(int i=0; i<a; i++)
    {
        if(first == true)
        {
            printf("1");
            first = false;
        }
        else
            printf("+1");
    }
    for(int i=0; i<b; i++)
    {
        if(first == true)
        {
            printf("2");
            first = false;
        }
        else
            printf("+2");
    }
    for(int i=0; i<c; i++)
    {
        if(first == true)
        {
            printf("3");
            first = false;
        }
        else
            printf("+3");
    }
    cout << endl;

    return 0;
}
