#include<iostream>
#include<stdlib.h>
#include<string.h>
#include<conio.h>
using namespace std;
int main()
{
    int i,j,k,l,a[100],temp[100],x,position,c,value,Src,found,element,pos,p,q,add;
    cout<<"Please insert the Number of element of the array:"<<"\n";
    cin>>l;
    cout<<"insert The elements: \n";
    for(i=0;i<l;i++)
    {
        cin>>temp[i];
    }

    g:
        for(i=0;i<l;i++)
        {
            a[i]=temp[i];
        }
    cout<<"Enter an Integer Number:\n 0 Exit\n 1 View all elements\n 2 Insert new element\n 3 Search an element\n 4 Delete an element (user should input item to be searched and delete)\n 5 Sort elements in ascending order\n 6 Sort elements in descending order\n 7 Find memory location of an element (user should input index number)\n";
    cin>>x;


        if(x==1)
        {
              cout<<"\nElements in array are: ";
               for(i=0; i<l; i++)
                {
                    cout<<" "<<a[i];
                }
                cout<<"\npress any key to finish the task \n";
                getch();

                system("cls");
                goto g;

        }
        else if(x==2)
        {

            cout<<"Enter the location where you wish to insert an element\n";
            cin>>position;

            cout<<"Enter the value to insert\n";
            cin>>value;

            for (c = l - 1; c >= position - 1; c--)

                    a[c+1] = a[c];

                a[position-1] = value;


                cout<<"Resultant array is\n";

            for (c = 0; c <= l; c++)
                cout<<"\n"<<a[c];

                cout<<"\npress any key to finish the task \n";
                getch();
                system("cls");
                goto g;


        }
        else if(x==3)
        {
                cout<<"\nEnter element to search: ";
        cin>>Src;


    found = 0;

    for(i=0; i<l; i++)
    {

        if(a[i] == Src)
        {
            found = 1;
            break;
        }
    }
    if(found == 1)
    {
        cout<<"\n position=="<<i + 1;
    }
    else
    {
        cout<<"\n is not found in the array";
    }
                cout<<"\npress any key to finish the task \n";
                getch();
                system("cls");
                goto g;
        }
    else if(x==4)
    {
        cout<<"Enter the element to be deleted\n";
        cin>>element;
        found=0;

        for (i = 0; i < l; i++)
        {
            if (a[i] == element)
            {
                found = 1;
                pos = i;
                break;
            }
        }

        if (found == 1)
        {
            for (i = pos; i <  l - 1; i++)
            {
                a[i] = a[i + 1];
            }

            cout<<"The resultant array is \n";
            for (i = 0; i < l - 1; i++)
            {
                cout<<"\n"<<a[i];
            }

        }
        else
            cout<<"Element is not found in the array\n";

                cout<<"\npress any key to finish the task \n";
                getch();
                system("cls");
                goto g;
    }
    else if(x==5)
    {
        for (i = 0; i < l; i++)
        {

            for (j = i + 1; j < l; ++j)
            {

                if (a[i] > a[j])
                {

                    p =  a[i];
                    a[i] = a[j];
                    a[j] = p;

                }

            }

        }
              cout<<"The numbers arranged in ascending order are given below \n";
                    for (i = 0; i <l; ++i)
                        cout<<" "<<a[i];

                cout<<"\npress any key to finish the task \n";
                getch();
                system("cls");
                goto g;
    }

    else if(x==6)
    {
        for (i = 0; i < l; ++i)
        {
            for (j = i + 1; j < l; ++j)
            {
                if (a[i] < a[j])
                {
                    q = a[i];
                    a[i] = a[j];
                    a[j] = q;
                }
            }
        }

        cout<<"The numbers arranged in descending order are given below\n";

        for (i = 0; i < l; ++i)
        {
            cout<<a[i];
        }
                cout<<"\npress any key to finish the task \n";
                getch();
                system("cls");
                goto g;
    }
    else if(x==7)
    {
        cout<<"inter the position of the number in the array: \n";
        cin>>add;
        cout<<"the memory adress of %d is = "<<a[add-1];
        cout<<a[add-1];

                cout<<"\npress any key to finish the task \n";
                getch();
                system("cls");
                goto g;
    }
    else if(x==0)
        cout<<"You Are successfuly Exited ";
    else
    {
        cout<<"Please Enter The Correct Number ";
               cout<<"\npress any key to try again \n";
                getch();
                system("cls");
                goto g;

    }



    return 0;
}

