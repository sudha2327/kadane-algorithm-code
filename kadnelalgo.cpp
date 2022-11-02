#include<iostream>
#include<algorithm>
using namespace std;

int kad(int a[],int s){
	
	int max_so_for=INT_MIN,max_ending_here=0;
	
	for(int i=0;i<s;i++){
		max_ending_here=max_ending_here+a[i];
		
		if(max_so_for<max_ending_here){
			max_so_for=max_ending_here;
		}
		if(max_ending_here < 0){
			max_ending_here=0;
		}
	}
	
	return max_so_for;
}

int main(){
	
//int a[] = {-2,1,-3,4,-1,2,1,-5,4};
int a[] = {1};

int size=sizeof(a)/sizeof(a[0]);

int res=kad(a,size);
	
cout<<"output of subarray "<<res<<endl;
	
	return 0;
}
