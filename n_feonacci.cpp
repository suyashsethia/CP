#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
         
   
    int ladderLength(string beginWord, string endWord, vector<string>& wordList) {
        int n = wordList.size() ; 
        int flag = 1 ; 
        map<string , int> ref ;
        for(int i =0 ; i<n ; i++)
        {
            if(wordList[i]==beginWord)
            {
                flag = 0 ; 
            }
            ref[wordList[i]] = i ; 
        }
        if(flag)
        {
            ref[beginWord] = n ;
            n=n+1 ;
            wordList.push_back(beginWord) ;
        }
        vector<int>adj[n] ;
        for(int i =0 ; i<n ; i++)
        {
            for (int j = 0 ; j<n ; j++)
            {
                if(i!=j &&wordList[i].length()==beginWord.length() &&wordList[j].length()==beginWord.length())
                {
                    int count = 0 ; 
                    for(int o = 0 ; o<beginWord.length();o++)
                    {
                        if(wordList[i][o]!=wordList[j][o])
                        {
                            count ++  ;
                        }
                    }
                    if(count ==1)
                    {
                        adj[ref[wordList[i]]].push_back(ref[wordList[j]]);
                    }
                }
                
            }
        }
        vector<int>vis(n+1 , 0) ; 
        queue<pair<int , int>>q ;
        q.push({ref[beginWord] , 1}) ;
        vis[ref[beginWord]] = 1 ;
        while(!q.empty())
        {
            int node = q.front().first ;
            int level = q.front().second ;
            q.pop() ;
            if(wordList[node]==endWord)
            {
                return level ;
            }
            for(int i = 0 ; i<adj[node].size() ; i++)
            {
                if(vis[adj[node][i]]==0)
                {
                    vis[adj[node][i]] = 1 ;
                    q.push({adj[node][i] , level+1}) ;
                }
            }
        }
        return 0 ;
    }
};
int main()
{
    int t = 1;
    // cin >> t;
    while (t--)
    {
        string beginWord = "hit";
        string endWord = "cog";
        vector<string> wordList = {"hot", "dot", "dog", "lot", "log", "cog"};
        Solution obj;
        cout << obj.ladderLength(beginWord, endWord, wordList);
    }
}