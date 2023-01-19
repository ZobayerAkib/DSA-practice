#include <bits/stdc++.h>

using namespace std;

int i=0;
int maX=100;
   
int checkEmpty(int stk[])
  {
      int j=sizeof(stk);
      if(j==0)
      {
          return 1;
      }
       else return 0;
    }
int checkFull(int stk[])
    {
      int j=sizeof(stk);
      if(j==maX-1)
      {
          return 1;
      }
      else return 0;
    }
void push(int stk[],int k)
{   

    if(checkFull(stk)==1)
    {
        cout<<"Stack full"<<endl;
    }
    else 
    {
        stk[i++]=k;
        
       
    }
}
void pop(int stk[],int k)
{   
   
    if(checkEmpty(stk)==1)
    {
        cout<<"No item left"<<endl;
    }
    else 
    {
        stk[i--];
    }
}
void print(int stk[])
{
    cout<<"Stack: "<<endl;
    for(int j=0;j<i;j++)
    {
        cout<<stk[j]<<endl;
    }
}
int main()
{
 
    int stk[maX];

    //pushing 1 2 3 4 5
    push(stk,1);
    push(stk,2);
    push(stk,3);
    push(stk,4);
    push(stk,5);
    
    //poping 5
    pop(stk,5);
    
    print(stk);
    //after popping 1,2,3,4 is in stack
    
    
    
    
}