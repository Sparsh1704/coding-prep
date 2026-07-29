#include<bits/stdc++.h>
#define SIZE 5
using namespace std;
void insert(int n);
void traverse();
void delet();

int arr[SIZE];
int front = -1;
int rear = -1;

int main(){
    insert(10);
    insert(11);
    insert(13);
    insert(15);    
    insert(17);
    delet();
    delet();
    traverse();
    return 0;
}

void insert (int n){
    if(rear == SIZE-1){
        cout<<"Queue is full"<<endl;
    }else{
        if(front==-1) front++;
        rear++;
        arr[rear] = n;
    }
}
void traverse(){
    if(front == -1){
    cout<<"Queue is empty"<<endl;
    return ;
    }
    for(int i = front;i<=rear;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

void delet() {
    if (front == -1) {
        cout << "Queue is empty" << endl;
        return;
    }

    cout << "Deleted element: " << arr[front] << endl;

    // If there was only one element
    if (front == rear) {
        front = rear = -1;
    } else {
        front++;
    }
}  