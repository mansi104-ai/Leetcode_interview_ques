class Solution{
    public long  numberOfPairs(int[] nums1, int[] nums2, int k){
        Map<integer,integer> map = new HashMap<>();
        long pairs =0;
        for(int i:nums2){
            map.put(i, getOrDefault(i,0)+1);
        }

        for(int i:nums1){
            if(i%k ==0){
                int temp = i/k;
                for(int j=0; j*j <=temp;j++){
                    
                }
            }
        }

    }
}