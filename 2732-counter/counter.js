/**
 * @param {number} n
 * @return {Function} counter
 */
// var createCounter = function(n) {
//     let currCount = n-1;
//     return function() {
//         currCount += 1;
//         return currCount;
//     };
// };

var createCounter = function(n) {
  return function() {
    return n++;      
  };
};

/** 
 * const counter = createCounter(10)
 * counter() // 10
 * counter() // 11
 * counter() // 12
 */