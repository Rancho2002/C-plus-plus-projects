#include <iostream>
using namespace std;

int main()
{
    int row=5, col=5, space=3;
    // cin >> row >> col >> space;

    for (int i = 1; i <= row; i++)
    {
        // A
        for (int j = 1; j <= col; j++)
        {
            if(i==1 || j==1 || j==col || i==3){
                cout<<"* ";
            }
            else{
                cout<<"  ";
            }
        }
        for (int k = 0; k < space; k++)
        {
            cout<<"  ";
        }
        //R

        for (int j = 1; j <= col; j++)
        {
            if(i==1|| j==1 || i==3 || (i==2 && j==col)|| (i==j && i!=2)){
                cout<<"* ";
            }
            else{
                cout<<"  ";
            }
        }
        for (int k = 0; k < space; k++)
        {
            cout<<"  ";
        }
        //I
        for (int j = 1; j <= col; j++)
        {
            if(i==1 || i==row || j==3){
                cout<<"* ";
            }
            else{
                cout<<"  ";
            }
        }
        for (int k = 0; k < space; k++)
        {
            cout<<"  ";
        }
        //J
        for (int j = 1; j <= col; j++)
        {
            if(i==1 || i==row || j==col || (i==4 && j==1))
            {
                cout<<"* ";
            }
            else{
                cout<<"  ";
            }
        }
        for (int k = 0; k < space; k++)
        {
            cout<<"  ";
        }
        //I
        for (int j = 1; j <= col; j++)
        {
            if(i==1 || i==row || j==3){
                cout<<"* ";
            }
            else{
                cout<<"  ";
            }
        }
        for (int k = 0; k < space; k++)
        {
            cout<<"  ";
        }
        //T
        for (int j = 1; j <= col; j++)
        {
            if(i==1 || j==3){
                cout<<"* ";
            }
            else{
                cout<<"  ";
            }
        }
        for (int k = 0; k < space; k++)
        {
            cout<<"  ";
        }
        
        cout << endl;
    }
    cout<<endl<<endl;
    for (int i = 1; i <= row; i++)
    {
        for (int i = 0; i < space; i++)
        {
            cout<<"  ";
        }
        
        // G
        for (int j = 1; j <= col; j++)
        {
            if(i==1|| (i==row && j!=4) || j==1 ||(i==3 && j!=2)|| (j==5 && i!=2) || (j==3 && i!=2)){
                cout<<"* ";
            }
            else{
                cout<<"  ";
            }
        }
        for (int k = 0; k < space; k++)
        {
            cout<<"  ";
        }
        //H
        for (int j = 1; j <= col; j++)
        {
            if(j==1 || j==col || i==3){
                cout<<"* ";
            }
            else{
                cout<<"  ";
            }
        }
        for (int k = 0; k < space; k++)
        {
            cout<<"  ";
        }
        //O
        for (int j = 1; j <= col; j++)
        {
            if(i==1 || i==row || j==1 || j==col){
                cout<<"* ";
            }
            else{
                cout<<"  ";
            }
        }
        for (int k = 0; k < space; k++)
        {
            cout<<"  ";
        }
        //S
        for (int j = 1; j <= col; j++)
        {
            if(i==1 || (j==1 && i!=4) || i==3 || (j==col && i!=2) || i==row){
                cout<<"* ";
            }
            else{
                cout<<"  ";
            }
        }
        for (int k = 0; k < space; k++)
        {
            cout<<"  ";
        }
        //H
        for (int j = 1; j <= col; j++)
        {
            if(j==1 || j==col || i==3){
                cout<<"* ";
            }
            else{
                cout<<"  ";
            }
        }
        for (int k = 0; k < space; k++)
        {
            cout<<"  ";
        }
        //
       
        cout << endl;
    }


    return 0;
}
