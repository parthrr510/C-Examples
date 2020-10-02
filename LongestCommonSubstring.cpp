#include<bits/stdc++.h>
using namespace std;

int lcs(string s1,string s2)
{
	int m=s1.size();
	int n=s2.size();
	cout<<m<<" "<<n<<endl;
	int** dp = new int*[m+1];
	for(int i=0;i<m+1;i++)
	{
		dp[i] = new int[n+1];
	}
	for(int i=0;i<=m;i++)
	{
		dp[i][0]=0;
	}
	for(int j=0;j<=n;j++)
	{
		dp[0][j]=0;
	}
	for(int i=1;i<=m;i++)
	{
		for(int j=1;j<=n;j++)
		{	
			if(s1[i-1]==s2[j-1])
			{
				dp[i][j]=dp[i-1][j-1]+1;
			}
			else
			{
			dp[i][j]=max(dp[i-1][j],dp[i][j-1]);	
			}
			
			
		}
	}
	for(int i=0;i<=m;i++)
	{
		for(int j=0;j<=n;j++)
		{
			cout<<dp[i][j]<<" ";
		}
		cout<<endl;
	}
	return dp[m][n];
}

int main()
{
	string s1="zxabcdezy";
	string s2="yzabcdezx";
	int ans=lcs(s1,s2);
	cout<<ans;
	return 0;
}

