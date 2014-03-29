Design
======


Overview
--------

This application will accept data from a file, calculate statistics upon that data, and output
its results to a second file.

The calculations to be performed upon the data are as follows:

* Minimum

* Maximum

* Average

* Standard deviation


Input
-----

The application will accept input from an arbitrary file. The file will be in the following form:

```
foo
bar
baz
.
.
.
```

Where `foo`, `bar`, `baz`, and the following values are integers.


Output
------

The application will output a standardized header followed by the calculated statistics, one value
per line. This will appear in the following format:

```
Statistics Calculator v.A.B.C by Mason Fabel
  minimum: <value>
  maximum: <value>
  average: <value>
  std dev: <value>
```


Data Structures
---------------

The primary data structure for this project will be a linked list of `int`s. This list will contain the
values read in from the input file, and will be global to the entire project.


Functions
---------

This project will require several main functions:

* `average()` - calculates and prints the average value of the data list.

* `minimum()` - finds and prints the minimum value in the data list.

* `maximum()` - finds and prints the maximum value in the data list.

* `stddev()` - calculates and prints the standard deviation of the values in the data list.

* `fileOut()` - appends to the output file.
