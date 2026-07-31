class Solution {
public:
    int minimumPushes(string word) {
       vector <int> mp(26);
       for(char c : word){
           mp[c-'a']++;
       } 
       sort(mp.rbegin(),mp.rend());
       int cost = 0;
       for(int i=0;i<26;i++){
            int f = mp[i];
            int press = i/8 + 1;
            cost += f*press;
       }
       return cost;
    }
};