///
/**             H.M.MEHEDI HASAN
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

void findposition(string & strng, string & substrng)
{

    int sbl= substrng.length();
    int max= strng.length()- sbl +1;

    int i=0, j=0 ,k=0;

    for(i = 0, j = 0; strng[i]!='\0' && substrng[j]!='\0'; i++)
    {
        if(strng[i] == substrng[j])
        {
            j++;
        }
        else
        {
            j = 0;
        }
    }

    if(j == sbl)
        cout<<substrng<<"   found at position "<< i - j + 1<<" from :   "<<strng<<endl;
    else
        cout<<substrng<<"   not found from :   "<<strng<<endl;

}
int main()
{
    string S="JOHN PAUL JONES", T="A THING OF BEAUTY IS A JOY FOREVER";
    string sb1="JO",sb2="JOY",sb3="A",sb4="THE";

    findposition(S,sb1);
    findposition(T,sb1);cout<<endl;
    findposition(S,sb2);
    findposition(T,sb2);cout<<endl;
    findposition(S,sb3);
    findposition(T,sb3);cout<<endl;
    findposition(S,sb4);
    findposition(T,sb4);cout<<endl;
    return 0;
}
