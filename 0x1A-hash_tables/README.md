0x1A. C - Hash tables
C Algorithm Data Structure
Note:
Python Dictionaries
Python dictionaries are implemented using hash tables. When you will be done with this project, you will be able to better understand the power and simplicity of Python dictionaries. So much is actually happening when you type d = {'a': 1, 'b': 2}, but everything looks so simple for the user. Python doesn’t use the exact same implementation than the one you will work on today though. If you are curious on how it works under the hood, here is a good blog post about how dictionaries are implemented in Python 2.7 (not mandatory).

Note that all dictionaries are not implemented using hash tables and there is a difference between a dictionary and a hash table. Read more here (not mandatory).

0. >>> ht = {}
Wrote a function that creates a hash table.
1. djb2
File 1-djb2.c contains a hash function that is implementing the djb2 algorithim to generate its hash code
2. key -> index
Wrote a function that gives you the index of a key passed to the "hash_dbj" function, the index is computed by finding the mod(%) of the hash_function and the size of the array of the hashtable when computed together i.e(hash_dbj2(key) % size).
3. >>> ht['betty'] = 'cool'
Function that adds an element to the hash table.
