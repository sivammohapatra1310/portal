# portal
vector<vector<int>> dp(4, vector<int>(3, 1));
dp[3][0]=0;
dp[3][2]=0;
if(n==1){
    return 10;
}

    for(int i=1;i<n;i++){
    for(int j=0;j<4;j++){
        for(int k=0;k<3;k++){
            long long ans=0;
            if(dp[i][j]==0) continue;
            if(j!=0){
                ans+=dp[j-1][k]
            }
            if(k!=0){
                ans+=dp[j][k-1]
            }
            if(j!=3){
                ans+=dp[j+1][k]
            }
            if(k!=2){
                ans+=dp[j][k+1]
            }
            dp[i][j]+=ans;
        }
    }
}
long long ans=0;
for(int i=0;i<4;i++){
    for(int j=0;j<3;j++){
        ans+=dp[i][j];
    }
}
return ans;
