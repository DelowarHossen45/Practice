#include<bits/stdc++.h>
using namespace std;
int factorial(int n)
{
	int i,sum=1;
	for(i=1;i<=n;i++)
	{
		sum=sum*i;
	}
	return sum;
}
void COLA()
{
    cout<<"Colaboration"<<endl;
}
int main()
{
	int a,b;
	cin>>a;
	b=factorial(a);
	cout<<b<<endl;
	COLA();
	cout<<"Welcome All friends in our program";
}
