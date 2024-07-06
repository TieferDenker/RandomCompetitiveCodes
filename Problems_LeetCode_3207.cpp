// Problem link: https://leetcode.com/problems/maximum-points-after-enemy-battles/description/

class Solution {
public:
    long long maximumPoints(vector<int>& enemyEnergies, int currentEnergy) {
        sort(enemyEnergies.begin(),enemyEnergies.end());
        if(enemyEnergies[0]>currentEnergy) 
            return 0;
        long long int maxpoints=0;
        int n=enemyEnergies.size();
        int i=0,j=n-1;
        while(i<=j)
        {
            if(currentEnergy>=enemyEnergies[i])
            {
                int x = currentEnergy/enemyEnergies[i];
                currentEnergy -= x*enemyEnergies[i];
                maxpoints += x;
            }
            else
            {
                if(maxpoints>0)
                {
                    currentEnergy += enemyEnergies[j];
                    j--;
                }
            }
        }
        return maxpoints;
    }
};