#include <iostream>
#include <cmath>
using namespace std;
int SumArmstrong(int a,int b){
	int sum,orignalsum,num,remainder,n;
	sum=0;

	if (a<b){
		for (int i=a;i<=b;i++){
			num=0;
			n=0;
			orignalsum=i;
			while (orignalsum!=0){
				orignalsum/=10;
				n++;
			}
			orignalsum=i;
			while(orignalsum!=0){
				remainder=orignalsum%10;
				num+=pow(remainder,n);
				orignalsum/=10;
			}
			if(num==i){
				cout<<num<<" ";
			 sum+=num;	
			}
			
		}
    
	
	}
   return sum;
}
int main(){
	cout<<"the sum is "<<endl;
	int res=SumArmstrong(1,9474);
	cout<<res;
    return 0;	
}
