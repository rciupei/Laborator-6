#include <iostream>

using namespace std;

//  Prototip
void ordon(int [], int);

int main(){
    int a[] = {12, -14, 7, 23, 5, -71, 4};
    int i;
    ordon(a, 7);
    //  Afisez sirul
    for (i = 0; i < 7; i++) {
      cout << a[i] << " ";
    }
    return 0;
}

void ordon(int a[], int n) {
    int i, p, flag, aux;
    p = 0;
    do {
        flag = 0;
        for(i = 0; i < n-1-p; i++) {
            if(a[i] > a[i+1])
            {
                aux = a[i];
                a[i] = a[i+1];
                a[i+1] = aux;
                flag = 1;  //  Marchez ca s-a facut o inversare
            }
        }
        p++;
    }
    while(flag != 0);
}
