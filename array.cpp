#include<iostream>
using namespace std;


int main(){
	int arr[100];
	int n,choice,value;
	int x;
	int pos;
	int y;
	
	do{
		cout<<"1.Create an array\n";
		cout<<"2. Display an array\n";
		cout<<"3.insert an element\n";
		cout<<"4.Delete an element\n";
		cout<<"5.Update an element\n";
		cout<<"6 Exit \n";
		cout<<"Enter the choice:";
		cin>>choice;
		
		switch(choice){
			case 1:
				cout<<"Enter the number of elements you want to create:";
				cin>>n;
				
				for(int i=0;i<n;i++){
					cout<<"Enter element "<<i+1<<" ";
					cin>>arr[i];
				}
				break;
			case 2:
				cout<<"Displaying the array!\n";
				for(int i=0;i<n;i++){
					cout<<arr[i]<<" ";
				}
				break;
				
			case 3:
				cout<<"Enter the element you want to insert:";
				cin>>x;
				
				cout<<"Enter the position:";
				cin>>pos;
				
				for(int i=n;i>=pos;i--){
					arr[i]=arr[i-1];
				}
				arr[pos-1]=x;
				n++;
				break;
			case 4:
				cout<<"Enter the position you want to delete:";
				cin>>pos;
				
				for(int i=pos;i<=n;i++){
					arr[i]=arr[i+1];
				}
				
				n--;
				break;
			case 5:
				cout<<"Enter the pos:";
				cin>>pos;
				
				cout<<"Enter the value to update: ";
				cin>>y;
				
				for(int i=0;i<n;i++){
					arr[pos]=y;
					
				}
				break;
				
				
			default:
				cout<<"Invalid choice!";
		}
		
		
	}while(choice!=7);
}
