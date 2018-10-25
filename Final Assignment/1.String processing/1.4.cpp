/**
                    Asadullah Bin Rahman
                        ID:1702070
*/
#include<bits/stdc++.h>
#define sf(f)                            scanf("%d",&f)
#define pf(f)                            printf("%d\n",f)
#define PI                               3.1415926535897932385
#define size                             3000000
#define mp                               make_pair
#define pb                               push_back
#define one(x)                           __builtin_popcount(x)
#define onel(x)                          __builtin_popcountl(x)
#define onell(x)                         __builtin_popcountll(x)
using namespace std;
typedef long long ll;

void DELETE(char* txt,int m, int n)
{
    cout<<"After Deleting..."<<endl;
    char strng[size];
    int i=0,j=0,k=m-1;
    for(j=0; j<k; j++)
    {
        strng[i]=txt[j];
        i++;
    }
    for(j=j+n; txt[j]!='\0'; j++)
    {
        strng[i]=txt[j];
        i++;
    }
    strng[j]='\0';
    puts(strng);
}
void REPLACE(string & strng, string & substrng1, string & substrng2)
{
    cout<<"After removing..."<<endl;
    int sbl= substrng1.length();
    int snl= substrng2.length();
    int max= strng.length()- sbl +1;

    int i=0, j=0,k=0;

    for(i = 0, j = 0; strng[i]!='\0' && substrng1[j]!='\0'; i++)
    {
        if(strng[i] == substrng1[j])
        {
            j++;
        }
        else
        {
            j = 0;
        }
    }

    char new_strng[80]={'\0'};
    if(j==sbl)
    {
        int m=i-j+1;
        for(i=0; i<m-1; i++)
        {
            new_strng[k]=strng[i];
            k++;
        }

        int save=i;
        for(i=0; substrng2[i]!='\0'; i++)
        {
            new_strng[k]=substrng2[i];
            k++;
        }

        int n=save+j;
        for(n; strng[n]!='\0'; n++)
        {
            new_strng[k]=strng[n];
            k++;
        }
        new_strng[k]='\0';

        cout<<new_strng<<endl;

    }

    else
    {
        cout<<strng<<endl;
    }
}
int main()
{
    char text1[]="AAABBB",text2[]="JOHN PAUL JONES";
    DELETE(text1,2,2);
    cout<<endl;
    DELETE(text2,6,5);
    cout<<endl;
    string s1="AAABBB", s2="AA", s3="BB", a1="JOHN PAUL JONES", a2="PAUL", a3="DAVID";
    REPLACE(s1,s2,s3);
    cout<<endl;
    REPLACE(a1,a2,a3);
    return 0;
}
