function isDivisible(n){

  for (var i = 0; i < arguments.length; i++) {

    if (n % arguments[i] !== 0){
      return false
    }
  }
  return true
}

isDivisible(3,3,4)
