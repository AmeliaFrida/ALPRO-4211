#include <iostream>
using namespace std;

int tambah (int x,int y)
{
    if (x == 0)
    {
        return y;
    }else
    {
        return 1 + tambah(x-1,y);
    }
}
int kurang (int x, int y)
{
    if ( y == 0)
    {
        return x;
    }else
    {
        return -1 + kurang(x,y-1);
    }
}
int kali (int x,int y)
{
    if (x == 1)
    {
        return y;
    }else
    {
        return y + kali(x-1,y);
    }
}
int bagi (int x,int y)
{
    if (x <y)
    {
        return 0;
    }else
    {
        return 1 + bagi(x-y,y);
    }
}
int pangkat (int x,int y)
{
    if (y == 0)
    {
        return 1;
    }else
    {
        return x * pangkat(x,y-1);
    }
}


int main()
{
    int x;
    int y;
    cout << " masukkan bilangan 1 \t: " ;
    cin >> x;
    cout << " masukkan bilangan 2 \t: " ;
    cin >> y;
    cout << " Tambah \t: \t" << tambah(x,y) <<endl;
    cout << " Kurang \t: \t" << kurang(x,y) <<endl;
    cout << " Kali \t\t:   \t" << kali(x,y) <<endl;
    cout << " Bagi \t\t:   \t" << bagi(x,y) <<endl;
    cout << " Pangkat \t:   \t" << pangkat(x,y) <<endl;

    return 0;
}
