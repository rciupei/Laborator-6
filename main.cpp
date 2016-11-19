#include <iostream>


using namespace std;
struct vector {
   double x, y, z;
};

int suma(int [], int );
int modul(int[], int);
void permcirc(int[], int);
vector sumv(vector , vector );



int main()
{
    int a[10]={-3,5,-8,2,3},i;
    vector v1,v2;
    v1.x=12,v1.y=7,v1.z=-1;
    v2.x=-1, v2.y=5,v2.z=0;
    vector sv = sumv(v1,v2);



    int sm=suma(a,5);
    modul(a,5);
    permcirc(a,5);

    for(i=0;i<5;i++)
        cout<<a[i]<<" ";

    cout << endl<< sm;
    return 0;
}
