class Solution {
    public int minimumBoxes(int[] apple, int[] capacity) {
        Arrays.sort(capacity);
        int sum =0;
        for(int i=0; i<apple.length; i++){
            sum += apple[i];
        }
        int count =0;int s =0;
        for(int i=capacity.length-1; i>=0; i--){
            s = s + capacity[i];
            if(!(s>=sum)){
                count++;
            }
        }
        return count+1;
    }
}