class Solution {
    public long numberOfPairs(int[] nums1, int[] nums2, int k) {
        Map<Integer, Integer> map =  new HashMap<>();
        long pairs =0 ;
        for (int i:nums2){
            map.put(i,map.getOrDefault(i,0)+1);

        }
        for(int i:nums1){
            if(i% k ==0){
                int temp = i/k;
                for(int j=1; j*j<=temp; j++){
                    if(temp %j == 0){
                        pairs += (long)map.getOrDefault(j,0);
                        if(j != temp/j){
                            pairs += (long)map.getOrDefault(temp/j,0);
                        }
                    }
                }
            }
        }
        return pairs;
        
    }
}