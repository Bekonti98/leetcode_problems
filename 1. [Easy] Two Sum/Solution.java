import java.util.HashMap;
import java.util.Map;

class Solution {
  public int[] twoSum(int[] nums, int target) {

    Map<Integer, Integer> complementMap = new HashMap<>();

    for (int i = 0; i < nums.length; i++) {
      int num = nums[i];
      int complement = target - num;

      if (complementMap.containsKey(num)) {
        return new int[] { complementMap.get(num), i };
      } else {
        complementMap.put(complement, i);
      }
    }

    throw new IllegalArgumentException("No Match Found!");
  }
}