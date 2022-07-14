# getint
free-format input conversion to one integer per call. Section 5.2 of The C Programming Language.

## About the project:
- `getint` performs free-format input conversion by breaking a stream of characters into integer values, one integer per call.
- Returns the value it found and also signal end of file when there is no more input.
- These values have to be passed back by separate paths, for no matter what value is used for EOF, that could also be the value of an input integer.
- In this example, getint return the end of file status as its function value, while using a pointer argument to store the converted integer back in the calling function.

## getint results:
- getint can be run with the following ways to enter inputs:
  - Sequentially:<br/>
![image](https://user-images.githubusercontent.com/92950538/178994951-7d65c670-f9a1-40e3-9659-a79c957abd6f.png)
  - OR one a time: <br/>
![image](https://user-images.githubusercontent.com/92950538/178994982-f6d6be5d-3942-4775-87c0-bbd04cf30222.png)

- Last thing the function prints is the array of size `SIZE` (`SIZE` = 10 in this example)

## What did I learn from this:
- 
