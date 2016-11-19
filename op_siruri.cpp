int suma(int a[], int n){
    int i, sum=0;
    for(i=0;i<n;i++)
    sum+=a[i];

    return sum;
}

void modul(int a[], int n){
    for(int i=0; i<n;i++){
        if(a[i]<0)
            a[i]=-a[i];
    }
}

void permcirc(int s[], int n)
{
   int i, aux;
   aux = s[0];
   for(i=0; i<n-1; i++)
      s[i] = s[i+1];
   s[n-1] = aux;
}
