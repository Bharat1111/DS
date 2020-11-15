#include<iostream>
using namespace std;

class LA
{
private:
    int n, A[];

public:

    LA(int n); // Constructor Declared
    ~LA(); // Destructor called

   bool isFull(int arr[]){
       for (int i = 0; i < n; i++)
       {
           if (A[i]=-1)
           {
               return false;
           }
           else
           {
               return true;
           }
       }
   };

   bool isEmpty(int arr[]){
       int j = 1;
       for (int i = 0; i < n; i++)
       {
           if (A[i]=-1)
           {
               j++;
           }
        }
        if (j==n)
           {
               return true;
           }
           else
           {
               return false;
           }
   };

   void Print(LA arr[]){
       for (int i = 0; i < n; i++)
       {
           cout << i + 1 << ".  " << A[i]<<endl;
       }
    };

   void Insert(int a){
       int i;
       cout << "Enter a position no. or enter -1 to insert at end" << endl;
       cin >> i;
       if (i==-1)
       {
           for
       }
       
   };

   void Delete(LA arr[]){
       if (isEmpty(arr[]))
       {
           /* code */
       }
       else
       {
           /* code */
       }
       
       int i;
       cout << "Enter the position number to delete (start from 0)" << endl;
       cin >> i;
       cout << A[i] << " from postion " << i << " in the array is deleted" << endl;
       A[i] = -1;
   };

   int Peek(){
       int i;
       cout << "Enter the position no. to peek at" << endl;
       cin >> i;
       cout << A[i];
   };

};

// Constructor Defined Outside
LA::LA(int n)
{
    cout << "Enter the size of the array" << endl;
    cin >> n;
    A[n];
    for (int i = 0; i < n; i++)
    {
        A[i] = -1;
    }
}
// Destructor
LA::~LA()
{
}



int main()
{

}