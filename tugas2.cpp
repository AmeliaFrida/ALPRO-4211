//Max, Min, MaxArray, MinArray, isEven, isOdd, isFactor, SumEven, SumOdd.

#include <iostream>
using namespace std;

//DEKLARASI
int maxarray
(int arr[],int n);
int minarray
(int arr[],int n);
bool iseven (int a);
bool isodd (int a);
bool isfactor
(int a,int b);
int sum_even
(int arr[],int n);
int sum_odd
(int arr[],int n);

int main()
{
    //INPUT BIL UTK DIBANDINGKAN

    int g,b;
    cout << " INPUT BILANGAN 1 : ";
    cin >> g;
    cout << " INPUT BILANGAN 2 : ";
    cin >> b;
    cout << endl;

    cout << " BILANGAN TERBESARNYA ADALAH: " << max(g,b) << endl;
    cout << endl;
    cout << " BILANGAN TERKECILNYA ADALAH : " << min(g,b) << endl;
    cout << endl;

    //INPUT BIL ARRAY
    int i;
    cout << " INPUT JUMLAH ARRAY : " ;
    cin >> i;
    int arr[i];
    cout << " INPUT ARRAY BILANGAN : " << endl;
    for(int j=0 ; j<i ; j++ )
    {cin >> arr[j];}
    cout << endl;

    cout << " YANG TERBESAR DALAM ARRAY TERSEBUT ADALAH : " << maxarray( arr , i ) << endl;
    cout << endl;
    cout << " YANG TERKECIL DALAM ARRAY TERSEBUT ADALAH : " << minarray( arr , i ) << endl;
    cout << endl;
    //+ BIL GENAP SAJA DI ARRAY
    cout << " JUMLAH BILANGAN GENAP SAJA DI ARRAY : " << sum_even( arr , i ) << endl;
    cout << endl;
    //- BIL GANJIL SAJA DI ARRAY
    cout << " JUMLAH BILANGAN GANJIL SAJA DI ARRAY: " << sum_odd( arr , i ) << endl;
    cout << endl;

    //GANJIL ATAU GENAP??
    int gnp;
    cout << " INPUT BILANGAN GENAP ATAU GANJIL : " ;
    cin >> gnp;
    cout << endl;
    cout << " 1 = BENAR & 0 = SALAH " << endl;
    cout << endl;
    cout << " APAKAH GENAP ?? : " << iseven( gnp ) << endl;
    cout << endl;
    cout << " APAKAH GANJIL ??? : " <<  isodd( gnp ) << endl;
    cout << endl;

    //BIL FACTOR

    cout << " APAKAH " << b << " ADALAH FACTOR DARI " << g << " : " << isfactor(g,b) << endl;


    return 0;
}

//DEFINISI
int maxarray
(int arr[],int b)
{
    int temp = arr[0];
    for( int i = 0; i < b; i++ )
    {
        if ( arr[i] > temp )
        {
            temp = arr[i];
        }
    }
    return temp;
}

int minarray
(int arr[],int b)
{
    int temp = arr[0];
    for( int i = 0; i < b; i++ )
    {
        if ( arr[i] < temp )
        {
            temp = arr[i];
        }
    }
    return temp;
}

bool iseven
(int b)
{
    if (b % 2 == 0)
{
        return true;
    }
    else
    {
        return false;
    }
}

bool isodd
(int b)
{
    if (b % 2 != 0)
    {
        return true;
    }
    else
    {        return false;
    }
}

bool isfactor
(int g, int b)
{
    if( g % b == 0)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int sum_even (int arr[],int x)
{
    int sum = 0;
    for(int i = 0; i < x ; i++)
    {
        if (arr[i] % 2 == 0)//JIKA BIL GENAP
        {
            sum += arr[i];
        }
    }
    return sum;
}

int sum_odd
(int arr[],int x)
{
    int sum = 0;
    for(int i = 0; i < x ; i++)
    {
        if (arr[i] % 2 != 0)//JIKA BIL GANJIL
        {
            sum += arr[i];
        }
    }
    return sum;
}
