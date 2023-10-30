#include<bits/stdc++.h>
using namespace std;

class polynomial{
    int*arr;
   int cap;
    public:
    polynomial(){
        arr=new int[10];
       
       cap=10;
        
    }
    polynomial(polynomial const &p1)
    {
            int *te=new int[p1.cap];
            for(int i=0;i<p1.cap;i++)
            {
                te[i]=p1.arr[i];
            }
            this->cap=p1.cap;
            this->arr=te;
    }
    void operator=(polynomial const&p1)
    {
         int *te=new int[p1.cap];
            for(int i=0;i<p1.cap;i++)
            {
                te[i]=p1.arr[i];
            }
            this->cap=p1.cap;
            this->arr=te;
    }
    
    // void operator+(polynomial const&p1)
    // {
    //     this->cap=max(this->cap,p1.cap);
    //      int *te=new int[this->cap];
    //      int i=0;
    //         for(;i<p1.cap&& i<this->cap;i++)
    //         {
    //             te[i]=p1.arr[i]+this->arr[i];
    //         }
    //         while(i<p1.cap){
    //             te[i++]=p1.arr[i];
    //         }
    //         while(i<this->cap){
    //             te[i++]=this->arr[i];
    //         }
    //         // this->cap=p1.cap;
    //         this->arr=te;
    // }
    void operator+=(polynomial const&p1)
    {
         this->cap=max(this->cap,p1.cap) ;
         int *te=new int[this->cap];
          int i=0;
            for(;i<p1.cap&& i<this->cap;i++)
            {
                te[i]=p1.arr[i]+this->arr[i];
            }
            while(i<p1.cap){
                te[i++]=p1.arr[i];
            }
            while(i<this->cap){
                te[i++]=this->arr[i];
            }
            // this->cap=p1.cap;
            this->arr=te;
    }
    
     polynomial operator+(polynomial const&p1) const
    {
        polynomial p3;
        p3.cap=max(this->cap,p1.cap);
         int *te=new int[p3.cap];
         int i=0;
            for(;i<p1.cap&& i<this->cap;i++)
            {
                te[i]=p1.arr[i]+this->arr[i];
            }
            while(i<p1.cap){
                te[i++]=p1.arr[i];
            }
            while(i<this->cap){
                te[i++]=this->arr[i];
            }
            // this->cap=p1.cap;
            p3.arr=te;
            
            return p3;
    }
    // post
    void operator++(int){
        for(int i=0;i<cap;i++){
            if(arr[i]!=0) arr[i]++;
        }
    }
    // pre for return type
     polynomial& operator++(){
        for(int i=0;i<cap;i++){
            if(arr[i]!=0) arr[i]++;
        }
        return *this;
    }
    //  void operator++(){
    //     for(int i=0;i<cap;i++){
    //         if(arr[i]!=0) arr[i]++;
    //     }
    // }
    
     
    
    void set(int p,int co) {
        if(p>=cap){
            int *temp=new int[2*cap];
            for(int i=0;i<cap;i++) temp[i]=arr[i];
            this->arr=temp;
            cap*=2;
            
        }
        arr[p]=co;
        
    }
    void print(){
        for(int i=cap-1;i>=0;i--){
            if(arr[i]!=0 && i!=0){
                cout<<arr[i]<<"x^"<<i;
                 if(arr[i-1]>=0)
            cout<<"+";
            else if(arr[i-1]<0)
            continue;
            }
           
            else if(arr[i]!=0 && i==0)  cout<<arr[i]<<endl;
        }
    }

    
    
};

int main(){
    
    polynomial p;
    p.set(2,3);
      polynomial pp=++(++p);
    p.print();
    cout<<endl;
     p++;
    pp.print();
    
    
    // polynomial p1;
    // p1.set(4,2);
    // polynomial p2;
    // p2.set(3,4);
    // p1+=p2;
    // p1.print();
   
   
    
    // polynomial p;
    // p.set(2,-3);
    // polynomial pp;
    // pp.set(2,4);
    // pp.print();
    // cout<<endl;
    // p.print();
    // polynomial px=p+pp;
    // cout<<endl;
    // p.print();
    
    // polynomial p3;
    // p3=p+pp;
    // cout<<endl;
    // p3.print();
    // cout<<endl;
    // p3.set(2,2);
    // p3.print();
    // px.print();
    
    
    // p.set(2,-3);
    //  p.set(0,3);
    //  p.set(1,-4);
    // p.print();
    // polynomial pp(p);
    // pp.print();
    // p.set(0,2);
    // p.print();
    // polynomial p2=pp;
    // pp.print();
    // p2.print();
    // pp.set(1,1);
    // p2.print();
    // pp.print();
}
