#include <iostream>
#include <math.h>
#include <fstream>


using namespace std;

int main()

{   

        int v[100],x,n,i,k1,k2,d,nrd,A,B,pc,y,c,nr=0,nr1=0,minim=1000000,minim2=1000000,maxim=-1000000,inv,nr2=0,minprim=1000000,maxprim=-1000000;

            cout<<"n=";cin>>n;
            cout<<"k1=";cin>>k1;
            cout<<"k2=";cin>>k2;
            cout<<"A=";cin>>A;
            cout<<"B=";cin>>B;

            for(i=1;i<=n;i++)
            {
                cout<<"v["<<i<<"]=";
                cin>>v[i];
            }
cout<<"numerele pozitive care au cel putin "<<k1<<" si cel mult "<<k2<<" divizori naturali sunt ";
            for(i=1;i<=n;i++)
            {
             x=v[i];
             nrd=0;
                
                for(d=1;d<=x;d++)
                   {
                        if(x%d==0)
                            nrd++;
                   }
                  if(x>=0) 
                   if(nrd>=k1 && nrd<=k2)
                   {
                    cout<<v[i]<<" ";
                       nr++;
                   }

            }
if(nr==1)
     cout<<"(un numar)";
     else
cout<<" ("<<nr<<" numere)";

        cout<<endl<<"numerele din vector care au produsul cifrelor cuprins intre valorile "<<A<<" si "<<B<<" sunt ";
            for(i=1;i<=n;i++)
            {
                x=v[i]; pc=1;
                y=x;
                while(y!=0)
                {
                    c=y%10;
                    pc=pc*c;
                    y=y/10;
                }
                if( pc>=A && pc<=B )
                {
                    cout<<v[i]<<" ";
                    nr1++;
                }

            }
            if(nr1==1)
     cout<<"(un numar)";
     else
cout<<" ("<<nr1<<" numere)";

                for(i=1;i<=n;i++)
            {
                x=v[i];
                if(i%2==0)   //pozitiile pare
                {
                    if(x<minim) 
                        minim=x;
                }
              else
                    if(x<minim2)    //pozitiile impare
                        minim2=x;
            }
            if(minim<minim2)
            cout<<endl<<"elementul minim de pe pozitiile pare este "<<minim<<" care este mai mic decat elementul minim de pe pozitiile impare care este "<<minim2;
            else 
            cout<<endl<<"elementul minim de pe pozitiile pare este "<<minim<<" care este mai mare decat elementul minim de pe pozitiile impare care este "<<minim2;

cout<<endl<<"cel mai mare numar care nu contine cifra zero este ";
            for(i=1;i<=n;i++)
            {
                x=v[i];
                y=x;
                while(y!=0)
                {
                    c=y%10;
                    if(c!=0)
                        if(y>maxim)
                           {
                            maxim=y;
                           }
                    y=y/10;
                }  
            }
cout<<maxim;
cout<<endl<<"pozitiile din vector care contin numere care incep si se termina cu aceeasi cifra sunt ";

             for(i=1;i<=n;i++)
            {
                x=v[i]; inv=0;
                y=x;
                while(y!=0)
                {
                    c=y%10;
                    inv=inv*10+c;
                    y=y/10;
                }
                if(x%10==inv%10)
                {
                    cout<<i<<" ";
                    nr2++;
                }
            }

            if(nr2==1)
cout<<" (o pozitie)";
     else
cout<<" ("<<nr2<<" pozitii)";
               for(i=1;i<=n;i++)
               {
                x=v[i];
                nrd=0;
                for(d=1;d<=n;d++)
                {
                    if(x%d==0)
                        nrd++;
                }
                if(nrd==2)
                    {
                        if(x<minprim)
                          minprim=x;
                          if(x>maxprim)
                          maxprim=x;
                    }
               }
               cout<<endl<<"cel mai mare nr prim="<<maxprim;
               cout<<endl<<"cel mai mic nr prim="<<minprim;
               
    return 0;

}