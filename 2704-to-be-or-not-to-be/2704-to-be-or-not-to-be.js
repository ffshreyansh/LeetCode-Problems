/**
 * @param {string} val
 * @return {Object}
 */
var expect = function(val) {
    
  return { 
      toBe:(b)=>{
        if(val !== b) throw new Error("Not Equal");
        else return true
    },
    notToBe:(c)=>{
        if(val === c) throw new Error("Equal");
        else return true
    }
    }
    
   
};


/**
 * expect(5).toBe(5); // true
 * expect(5).notToBe(5); // throws "Equal"
 */