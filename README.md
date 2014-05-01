dev exercices
=============

Differents development exercies from the book cracking the coding interview

Requirements
------------

* Autoconf
* Automake
* Libtool


Compilation
-----------
```
$ ./autogen.sh
$ ./configure
$ make
```

Build and run unit-test
-----------------------
```
$ make check
```


Tips
----

* Use coverage reporting

You can use coverage reporting feature if lcov is installed in your environment.

```
$ ./configure --enable-coverage
$ make coverage
...
Successfully created coverage reports into ./coverage directory.
```

Please check "./coverage/index.html".

By default, source codes will be complied with no-optimization(-O0 option) to get more precise results.

If you would like to get coverage reports with optimization, please use COVERAGE_OPTIMIZATION_FLAGS variables like this.

```
$ make coverage COVERAGE_OPTIMIZATION_FLAGS="-O2"
```

Please take care that coverage reports with optimization results in unexpected one.

* Use coding style checks

You can use coding style checker(cpplint) if python is installed in your environment.

```
$ make check-style
```

If you would like to check coding style with cpplint's options, please use CPPLINT_OPTIONS variables like this.

```
$ make check-style CPPLINT_OPTIONS="--verbose=4"
```

* Use advanced gtest options

You can use advanced gtest options via environment variables(GTEST_xxx).

For example, you can filter test cases as follows.

```
$ GTEST_FILTER="square.*" make check
```

For more information about advanced options, please see the following page.

http://code.google.com/p/googletest/wiki/V1_6_AdvancedGuide#Running_Test_Programs:_Advanced_Options

