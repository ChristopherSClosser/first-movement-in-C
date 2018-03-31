function isDivisible(n){

  for (var i = 0; i < arguments.length; i++) {

    if (n % arguments[i] !== 0){
      return false
    }
  }
  return true
}

isDivisible(3,3,4)
for (var i = 0; i < array.length; i++) {
  array[i]
}

// creates a list of dictionaries
function wordsToObject(input) {
  if (input.length === 0){
    return '[]'
  }
  input = input.split(' ')
  console.log(input)
  let res = '['
  let names = []
  let ids = []
  for (var i = 0; i < input.length; i++) {
    if (i % 2 === 0){
      names.push(input[i])
    } else {
      ids.push(input[i])
    }
  }

  for (var i = 0; i < names.length; i++) {
    var dict = "{name : '" + names[i] + "', id : '" + ids[i] + "'}, "
    res += dict
  }
  res = res.slice(0, -2)
  res += ']'
  return res
}

// increment numbers in a string
function incrementString (str) {
//   console.log(str)
  var res = ''
  try {
//   this keeps leading 0's
    var numeric = str.match(/\d+$/)[0];
    var size = numeric.length

  } catch (e) {
//     no numbers
    res += str + '1'
  }

  if (numeric && str.length > 0) {
    var prefix = str.split(numeric)[0];

    function increment_string_num(num){
      var inc = String(parseInt(num)+1);
      var comp = num.slice(0, size-inc.length)+inc
      if (comp.length > size) {
        console.log(comp, comp.length, size, inc)

        return inc
      } else if (comp.length < size) {

      } else {
        return num.slice(0, size-inc.length)+inc;
      }
    }
    var res = prefix+increment_string_num(numeric)
  } else {
//     res = prefix + res
  }

//   return prefix+increment_string_num(numeric);
//   console.log(numeric)
  return res
}
