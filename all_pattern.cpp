#include <bits/stdc++.h>
using namespace std;

void rectangle()
{
    cout << "Enter length of rectangle \n";
    int l;
    cin >> l;
    cout << "Enter breadth of rectangle \n";
    int b;
    cin >> b;
    for (int i = 0; i < b; i++)
    {
        for (int j = 0; j < l; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
}

void half_pyramid()
{
    cout << "Enter height of pyramid \n";
    int height;
    cin >> height;
    for (int i = 0; i < height; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
}

void numbered_half_pyramid()
{
    cout << "Enter height of pyramid\n";
    int height;
    cin >> height;

    for (int i = 0; i < height; i++)
    {
        int num = 1;
        for (int j = 0; j <= i; j++)
        {
            cout << num << " ";
            num++;
        }
        cout << endl;
    }
}

void reverse_half_pyramid()
{
    cout << "Enter height of pyramid\n";
    int height;
    cin >> height;
    for (int i = 0; i < height; i++)
    {
        for (int j = height; j > i; j--)
        {
            cout << "* ";
        }
        cout << endl;
    }
}

void numbered_reverse_half_pyramid()
{
    cout << "Enter Height :" << endl;
    int height;
    cin >> height;

    cout << "\n --------------Style 1: ---------------\n"; // prints like 54321 5432 543 54 5
    for (int i = 0; i < height; i++)
    {
        for (int j = height; j > i; j--)
        {
            cout << j << " ";
        }
        cout << endl;
    }

    // Style 2
    cout << "\n --------------Style 2: ---------------\n"; // prints like 11111 2222 333 44 5
    for (int i = 0; i < height; i++)
    {
        for (int j = height; j > i; j--)
        {
            cout << i + 1 << " ";
        }
        cout << endl;
    }

    // Style 3
    cout << "\n --------------Style 3: ---------------\n"; // prints like 54321 4321 321 21 1
    for (int i = 0; i < height; i++)
    {
        for (int j = height; j > i; j--)
        {
            cout << j - i << " ";
        }
        cout << endl;
    }

    cout << "\n --------------Style 4: ---------------\n"; // prints like 12345 2345 345 45 5
    for (int i = 0; i < height; i++)
    {
        int num = i;
        for (int j = height; j > i; j--)
        {
            cout << num + 1 << " ";
            num++;
        }

        cout << endl;
    }
}

void hollow_pyramid()
{
    cout << "Enter height of pyramid : " << endl;
    int height;
    cin >> height;

    for (int i = 0; i < height; i++)
    {

        for (int j = 0; j < height + (height - 1); j++)
        {
            if (j == height - 1 - i || j == height - 1 + i || i == height - 1)
            {
                cout << " * ";
            }
            else
            {
                cout << "   ";
            }
        }
        cout << endl;
    }
}

void pyramid()
{
    cout << "Enter height of pyramid : " << endl;
    int height;
    cin >> height;

    for (int i = 0; i < height; i++)
    {
        for (int j = 0; j < height + (height - 1); j++)
        {
            if (j >= height - 1 - i && j <= height - 1 + i)
            {
                cout << " * ";
            }
            else
            {
                cout << "   ";
            }
        }
        cout << endl;
    }
}

void rev_pyramid()
{
    int height;
    cout << "Enter height of reverse pyramid\n";
    cin >> height;
    for (int i = 0; i < height; i++)
    { // Loop from 0 to height-1
        // Print spaces for current row
        for (int j = 0; j < i; j++)
        {
            cout << "   ";
        }

        // Print stars for current row
        for (int j = 0; j < 2 * (height - i) - 1; j++)
        {
            cout << " * ";
        }

        cout << endl;
    }
}

void kite()
{
    int width;
    cout << "Enter width of kite: ";
    cin >> width;

    // Upper part of the kite
    for (int i = 0; i < width; ++i)
    {
        for (int j = 0; j < width + (width - 1); ++j)
        {
            if (j >= width - 1 - i && j <= width - 1 + i)
            {
                cout << " * ";
            }
            else
            {
                cout << "   ";
            }
        }
        cout << endl;
    }

    // Lower part of the kite (inverted pyramid)
    for (int i = width - 2; i >= 0; --i)
    {
        for (int j = 0; j < width + (width - 1); ++j)
        {
            if (j >= width - 1 - i && j <= width - 1 + i)
            {
                cout << " * ";
            }
            else
            {
                cout << "   ";
            }
        }
        cout << endl;
    }
}

void half_kite()
{
    int width;
    cout << "Enter width of kite: ";
    cin >> width;

    for (int i = 0; i < width; i++)
    {
        for (int j = 0; j < i + 1; j++)
        {
            cout << " * ";
        }
        cout << endl;
    }
    for (int i = 0; i < width - 1; i++)
    {
        for (int j = width - 1 - i; j > 0; j--)
        {
            cout << " * ";
        }
        cout << endl;
    }
}

void half_pyramid_0_and_1(){
    int height; cout<<"Enter height\n"; cin>>height;
    int num=2;
    for (int i = 1; i <= height; i++)
    {
        
        for (int j = 1; j <= i; j++)
        {
            
            if (num % 2 != 0)// num is odd
            {
                cout<<" 0 ";
                num++;
            }
            else
            {
                cout<<" 1 ";
                num --;
            }
            
            
        }
        cout<<endl;
    }
}

int main()
{
    int k = 1;
    while (k == 1)
    {
        cout << "\n//// Enter tthe pattern u want to print ////\n";
        cout << "//// 1. Rectangle ////\n";
        cout << "//// 2. Half Pyramid ////\n";
        cout << "//// 3. Numbered Half Pyramid ////\n";
        cout << "//// 4. Reverse Half Pyramid ////\n";
        cout << "//// 5. Numbered Reverse Half Pyramid ////\n";
        cout << "//// 6. Hollow Pyramid ////\n";
        cout << "//// 7.  Pyramid ////\n";
        cout << "//// 8.  Reverse Pyramid ////\n";
        cout << "//// 9.  Kite ////\n";
        cout << "//// 10.  Half-Kite ////\n";
        cout << "//// 11.  Half-Pyramid with 0 & 1 ////\n";

        cout << "//// 99. Exit ////\n";

        int choice;
        cin >> choice;
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

        case 5:
            numbered_reverse_half_pyramid();
            break;

        case 6:
            hollow_pyramid();
            break;

        case 7:
            pyramid();
            break;

        case 8:
            rev_pyramid();
            break;

        case 9:
            kite();
            break;

        case 10:
            half_kite();
            break;

        case 11:
            half_pyramid_0_and_1();
            break;

        case 99:
            k = 0;
            break;

        default:
            cout << "Invalid choice \n";
            break;
        }
    }
    return 0;
}