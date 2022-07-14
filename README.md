# getint
free-format input conversion to one integer per call. Section 5.2 of The C Programming Language.

## About the project:
- `getint` performs free-format input conversion by breaking a stream of characters into integer values, one integer per call.
- Returns the value it found and also signal end of file when there is no more input.
- These values have to be passed back by separate paths, for no matter what value is used for EOF, that could also be the value of an input integer.
- In this example, getint return the end of file status as its function value, while using a pointer argument to store the converted integer back in the calling function.

## What did I learn from this:
- 
