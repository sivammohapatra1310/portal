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
JUN 2024 Intern ‐ Hyscaler On‐Site

• Developed a YouTube video validation and recommenda‐

tion component for an educational website using Python,

Google API, and pre‐trained language models (LLMs).

• Provides personalized video recommendations and en‐

sures content availability through keyword‐based searches

.

• GitHub Link ‐ YouTube‐Model

JUN 2024 ATMAN GYM WEBSITE github

• Developed a cutting‐edge gym management website that effi‐

ciently enables users to handle gym activities through a user‐

friendly interface.

• Gives personalized search results from a pool of exercises.

• Integrated RapidAPI for accurate Gym exercises and training

videos.

HTML, CSS, JAVASCRIPT, REACTJS, MATERIALUI, APIS
