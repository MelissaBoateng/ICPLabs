//Names: Melissa Boateng And Bright Okrah 
//Student IDs: 18962022, 08262022



#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

// Create a 2D-array of size 101 by 101.
// 0 represents all undefined values as stated in the question
int A[101][101]{
    int Arr=new int*[size];
    for(int i=0;i<size;++i){
         Arr[i]=new int[size];
        for(int j=0;j<size;++j){
            Arr[i][j]=0;
        }
    }
    return A;
}


//fill the array with random values 
int** populateArray(int N){
    int** Arr= A(N);
        for(int k=0;k<2000;++k){
            int i = rand() % N;
            int j = rand() % N;
            if(arr[i][j]==0){
                arr[i][j]=1;
            }else{
                array[i][j]+=1;
            }
        }
        return populateArray;
}
    
    

//output function  

void output(int A[101][101])
{
    int sum;

    for (int i = 0; i < row; i++)
    {
        sum = 0;

        cout << "The sum of row" << i << " elements {" << A[i][0];
        for (int j = 1; j < col; j++)
        {
            sum += A[i][j];
            cout << " + " << A[i][j];
        }
        cout << "} is " << sum << endl;
    }

}
//Searchvalid entries
void searchValidEntries(int N, int XL,int YL,int XH,int YH){
    int** arr=populateArray(N);
    for(int i=x_1;i<=x_2;++i){
        for(int j=y_1;j<=y_2;++j){
            if(arr[i][j]>0){
                cout<<"("<<i<<","<<j<<")"<<" :"<<arr[i][j]<<endl;
            }
             
        }
       
    }
}


int main()
{
    /* read the values of 5 bounding boxes, one line at a time */
    cout<<"\n Output for bx 1"<<endl<<endl;
    searchValidEntries(101,80,1,100,10);

    cout<<"\n output 2"<<endl<<endl;
    searchValidEntries(101,10,20,40,79);

    cout<<"\n output 3"<<endl<<endl;
    searchValidEntries(101,1,90,100,100);

    cout<<"\n output 4"<<endl<<endl;
    searchValidEntries(101,40,30,70,60);

    cout<<" \n output 5"<<endl<<endl;
    searchValidEntries(101,50,50,70,70);

    
    return 0;
}