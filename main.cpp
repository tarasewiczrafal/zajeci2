#include <iostream>

using namespace std;

int main()
{
    int w;
    cout << "Podaj liczbe wierszy";
    cin >> w;
    for  (int i =0;i<=w;i++)
    {
        for(int j=0;j<w-i;j++)
        {
            cout <<" ";
        }
                for(int j=0;j<(w-i)/2;j++)
        {
            cout <<" ";
        }
        for (int k=0;k<(i);k++)
        {
            cout << "x";
        }
        cout <<endl;
    }
    return 0;
}
