//Find subarray with given sum (positive no)
//time complexity O(n)
#include<iostream>
using namespace std;

void checkSum(int a[],int n,int s)
{
int start=0;
int g=0;
int sum=a[0];
int t=0;
while(t!=1 && g<n)
    {
	if(sum==s)
	{
	t=1;
	break;
}
	else if(sum<s)
	{
	
	sum=sum+ a[++g];
	//cout<<sum<<" g and start of "<<g<<" "<<start<<endl;
     } 
	else if(sum>s)
	{
	sum=sum-a[start++];
//cout<<sum<<" g and start is "<<g<<start<<endl;
     } 

	}
	if(t==1)
	cout<<++start<<" "<<++g<<endl;
	else
	cout<<"-1"<<endl;	
}

int main()
{
int t,n,s,i,j;
cin>>t;
for(i=0;i<t;i++)
{
cin>>n>>s;
int a[n];
for(j=0;j<n;j++)
{
	cin>>a[j];
}
checkSum(a,n,s);
}
}
