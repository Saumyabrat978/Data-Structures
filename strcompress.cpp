<<<<<<< HEAD
class Solution {
public:
    int compress(vector<char>& chars) {
        int i=0;
        int ansindex=0;
        int n=chars.size();
        while(i<n){
            int j=i+1;
            while(j<n && chars[i]==chars[j]){
                j++;
            }
            chars[ansindex++]=chars[i];
            int count=j-i;
            if(count>1){
                string cnt=to_string(count);
                for(char ch:cnt){
                    chars[ansindex++]=ch;
                }
            }
            i=j;
        }
        return ansindex;
    }
=======
class Solution {
public:
    int compress(vector<char>& chars) {
        int i=0;
        int ansindex=0;
        int n=chars.size();
        while(i<n){
            int j=i+1;
            while(j<n && chars[i]==chars[j]){
                j++;
            }
            chars[ansindex++]=chars[i];
            int count=j-i;
            if(count>1){
                string cnt=to_string(count);
                for(char ch:cnt){
                    chars[ansindex++]=ch;
                }
            }
            i=j;
        }
        return ansindex;
    }
>>>>>>> 910b4b5bd767c05d4ab0dfbc9920d5efb3421c48
};