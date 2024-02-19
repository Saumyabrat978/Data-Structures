<<<<<<< HEAD
class Solution {
public:
    string removeOccurrences(string s, string part) {
          while(s.length()!=0 && s.find(part) < s.length()) {
            s.erase(s.find(part), part.length());
        }
        return s;
    }
    
=======
class Solution {
public:
    string removeOccurrences(string s, string part) {
          while(s.length()!=0 && s.find(part) < s.length()) {
            s.erase(s.find(part), part.length());
        }
        return s;
    }
    
>>>>>>> 910b4b5bd767c05d4ab0dfbc9920d5efb3421c48
};