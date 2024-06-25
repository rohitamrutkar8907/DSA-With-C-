public long pickGifts(int[] gifts, int k) {
        
        
        long sum  = 0;
        for(int i = 0; i < k ; i++){
                int largest = Integer.MIN_VALUE;
                int index = -1;
                for(int j = 0; j < gifts.length; j++){
                       if(gifts[j] > largest){
                           largest = gifts[j];
                           index = j;
                       }
                }
                
                //System.out.print("lar: "+large
gifts[index] = (int) Math.sqrt(largest); 
        }
        for(int i = 0; i < gifts.length; i++)
            sum+=gifts[I];
        
        return sum;
    }





class Solution {
public:
    long long pickGifts(vector<int>& gifts, int k) {
        int maxno=INT_MIN;
        int sum=0;
        for(int i=0;i<k;i++)
        {
            for(int i=0;i<gifts.size();i++)
            {
                maxno=max(maxno,gifts[i]);
                int sq=sqrt(maxno);
                auto itPos = gifts.begin() + i;
                auto newIt = gifts.insert(itPos, sq);
            }
            
            
        }
        for(int i = 0; i <gifts.size(); i++)
        {
            sum+=gifts[i];  
        }
            
        return sum; 
        
    }
};