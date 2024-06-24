#include <bits/stdc++.h>
using namespace std;

void rectangle (){
    cout<< "Enter length of rectangle \n";
    int l; cin>>l;
    cout<< "Enter breadth of rectangle \n";
    int b; cin>>b;
    for (int i = 0; i < b; i++)
    {
        for (int j = 0; j < l; j++)
        {
            cout<<"* ";
        }
        cout<<endl;
    }
}

void half_pyramid(){
    cout<<"Enter height of pyramid \n";
    int height; cin>>height;
    for (int i=0; i<height;i++){
        for (int j = 0; j <= i; j++)
        {
            cout<<"* ";
        }
        cout<<endl;        
    }
}

void numbered_half_pyramid(){
    cout<<"Enter height of pyramid\n";
    int height; cin>>height;
    
    for (int i = 0; i < height; i++)
    {
        int num=1;
        for (int j = 0; j <= i; j++)
        {
            cout<<num<<" ";
            num++;
        }
        cout<<endl;
    }
    
}

void reverse_half_pyramid(){
    cout<<"Enter height of pyramid\n";
    int height; cin>>height;
    for (int i = 0; i < height; i++)
    {
        for (int j = height; j >i; j--)
        {
            cout<<"* ";
        }
        cout<<endl;
        
    }
    
}
int main()
{
    int k=1;
    while (k==1)
    {
        cout<<"//// Enter tthe pattern u want to print ////\n";
        cout<<"//// 1. Rectangle ////\n";
        cout<<"//// 2. Half Pyramid ////\n";
        cout<<"//// 3. Numbered Half Pyramid ////\n";
        cout<<"//// 4. Reverse Half Pyramid ////\n";
        cout<<"//// 99. Exit ////\n";

        int choice; cin>>choice;
        switch (choice)
        {
            case 1:
                rectangle();
                break;

            case 2:
                half_pyramid();
                break;

            case 3:
                numbered_half_pyramid();
                break;

            case 4:
                reverse_half_pyramid();
                break;

            case 99:
                k=0;
                break;

            default:
                cout<<"Invalid choice \n";
                break;
        }
    }
    return 0;
}