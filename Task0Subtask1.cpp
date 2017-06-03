#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int n,c,q,i;
	cout<<"Enter number of curtains: ";
	cin>>n;
	int stack1[n], stack2[n], stack3[n];
	cout<<"Enter length of each curtain from top to bottom: \n";
	for(i=0;i<n;i++){
	    cin>>stack1[i];
	    stack2[i]=stack1[i];
	    stack3[i]=stack2[i];
	}
	cout<<"Enter number of queries: ";
	cin>>q;
	while(q--){
		int kmin=INT_MAX, flag2=0, max=stack3[0], pos;		
		cout<<"\nEnter required size of curtain piece: ";
	    	cin>>c;
		cout<<"Simulation 1\n";
	        for(i=0;i<n;i++){
	        	if(stack1[i]>=c){
	                	stack1[i]-=c;
	                        break;
	                 }
		}
	        if(i==n){
	       		cout<<"Unavailable\n";
		}
	        else{
	        	for(i=0;i<n;i++){
	                	cout<<stack1[i]<<" ";
	                 }
	        }
                cout<<"\nSimulation 2\n";
	        for(i=0;i<n;i++){
	        	if(stack2[i]>=c){
				flag2=1;
				if(stack2[i]<=kmin){
					kmin=stack2[i];
					pos=i;
	                	}	            
	                }
		}
		if(flag2==0){
	        	cout<<"Unavailable\n";
		}
	        else{
			stack2[pos]-=c;
			for(i=0;i<n;i++){
	                	cout<<stack2[i]<<" ";
	        	
	                }
		}
		cout<<"\nSimulation 3\n";
		pos=0;
	        for(i=0;i<n;i++){
	        	if(stack3[i]>=max){
				max=stack3[i];
				pos=i;
			}
		}		
	        if(max<c){
			cout<<"Unavailable\n";
		}
		else{
			stack3[pos]-=c;	
			for(i=0;i<n;i++){
	                    cout<<stack3[i]<<" ";
	                }
	        }
	cout<<"\n";
	}      
	return 0;
}

