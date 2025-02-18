#include <iostream>
using namespace std;
#define size 3
class queue {
    // fifo 
    int rear;
    int front ;
    int arr[size];
    public:
    queue(){
        rear=-1;
        front=0;
    }
    bool is_full(){
        return rear ==size-1;
    }
    bool is_empty(){
        return front>rear;
    }
    void push (int m){
        if (is_full()){
            cout<<"queue is full "<<endl;
        }
        else {
          ++rear;
            arr[rear]=m;
    }
    }
    void pop(){
        if (is_empty()){
            cout<<"is empty !  "<<endl;
            rear=-1;
            front=0;
        }
        else {
cout<<"the element  is deleted -> "<<arr[front]<<endl;
++front;
        }
    }
void show (){
    for (int i=front ;i<=rear;i++){
        cout<< arr[i]<<" ";
    }
}
};  
int  main() {
queue op;
op.push(22);
op.push(4450);
op.push(7000);
op.pop();
op.pop();
op.pop();
op.pop();
op.show();
return 0;
}