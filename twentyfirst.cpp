int s=0;
for(int i=0;i<customers.size(),i++){
    if(grumpy[i] == 1){
        continue;
    }
    else{
        s+=customers[i];
        customers[i]=0;
    }
}
//max subarray of size=k
int mx=INT_MIN;
for(int i=0;i<k;i++){
    s1+=customers[i];
}
mx=max(s1,mx);
for(int i=k;i<customers.size();i++){
    s1=s1-customers[i-k]+customers[i];
    mx=max(s1, mx);
}
return mx+s1;
