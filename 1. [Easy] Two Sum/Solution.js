var twoSum = function (nums, target) {

  var complementMap = {};

  for (var i = 0; i < nums.length; i++) {
    var num = nums[i];
    var complement = target - num;

    if (complementMap[num] !== undefined) {
      return [complementMap[num], i];
    } else {
      complementMap[complement] = i;
    }
  }
};