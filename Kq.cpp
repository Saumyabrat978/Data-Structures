deque<long long int>dq;
vector<long long>ans;
for (int i=0;i<k;i++){
    if(A[i]<0){
        dq.push_back(i);
    }

    if(dq.size>0){
        ans.push_back(A[dq.front()]);
    }
    else{
        ans.push_back(0);
    }
}
for(int i=k;i<n;i++){
    if(!dq.empty()&&(i-dq.front())>=k){
        dq.pop_front();
    }
     if(dq.size>0){
        ans.push_back(A[dq.front()]);
    }
    if(A[i]<0)
    dq.push_back(i);
    else{
        ans.push_back(0);
    }
}

