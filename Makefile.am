# For using custom m4 macros.
ACLOCAL_AMFLAGS = -I m4

# Nonstandard package files for distribution.
EXTRA_DIST = \
  autogen.sh \
  scripts/change_package_name.sh \
  scripts/cpplint.py \
  $(DX_DOCDIR)

AM_CPPFLAGS = \
  -I$(top_srcdir)/src

# Build rules for testing framework.
check_LTLIBRARIES = \
  lib/gmock/libgmock.la \
  lib/gmock/libgmock_main.la

lib_gmock_libgmock_la_SOURCES = \
  lib/gmock/gmock/gmock.h \
  lib/gmock/gtest/gtest.h \
  lib/gmock/gmock-gtest-all.cc
lib_gmock_libgmock_la_CPPFLAGS = $(GTEST_CPPFLAGS)
lib_gmock_libgmock_la_CXXFLAGS = $(GTEST_CXXFLAGS)
lib_gmock_libgmock_la_LDFLAGS = $(GTEST_LDFLAGS)
lib_gmock_libgmock_la_LIBADD = $(GTEST_LIBS)

lib_gmock_libgmock_main_la_SOURCES = \
  lib/gmock/gmock/gmock.h \
  lib/gmock/gtest/gtest.h \
  lib/gmock/gmock_main.cc
lib_gmock_libgmock_main_la_CPPFLAGS = $(GTEST_CPPFLAGS)
lib_gmock_libgmock_main_la_CXXFLAGS = $(GTEST_CXXFLAGS)
lib_gmock_libgmock_main_la_LDFLAGS = $(GTEST_LDFLAGS)
lib_gmock_libgmock_main_la_LIBADD = \
  $(GTEST_LIBS) \
  lib/gmock/libgmock.la

# Build rules for libraries.
pkginclude_HEADERS = \
  src/dev_exercices/exercice.h \
  src/dev_exercices/Node.h \
  src/dev_exercices/Stack.h \
  src/dev_exercices/Queue.h \
  src/dev_exercices/SetOfStacks.h 

lib_LTLIBRARIES = \
  src/dev_exercices/libsample.la

src_dev_exercices_libsample_la_SOURCES = \
  src/dev_exercices/exercice.h \
  src/dev_exercices/exercice.cpp \
  src/dev_exercices/Node.h \
  src/dev_exercices/Node.cpp \
  src/dev_exercices/Stack.h \
  src/dev_exercices/Stack.cpp \
  src/dev_exercices/Queue.h \
  src/dev_exercices/Queue.cpp \
  src/dev_exercices/SetOfStacks.h \
  src/dev_exercices/SetOfStacks.cpp

# Build rules for tests.
# TESTS_ENVIRONMENT: Set environment variables for the test run
# TESTS: Define programs run automatically by "make check"
# UNIT_TESTS: Define programs run automatically by "make check-unit-tests"
# check_PROGRAMS: Define programs built by "make check" but not necessarily run
TESTS_ENVIRONMENT=
TESTS=
UNIT_TESTS=
check_PROGRAMS=

# Define unit tests with gtest
UNIT_TESTS += test/exercice_test
check_PROGRAMS += test/exercice_test
test_exercice_test_SOURCES = test/exercice_test.cpp
test_exercice_test_CPPFLAGS = -I$(top_srcdir)/src $(GTEST_CPPFLAGS)
test_exercice_test_CXXFLAGS = $(GTEST_CXXFLAGS)
test_exercice_test_LDFLAGS = $(GTEST_LDFLAGS)
test_exercice_test_LDADD = $(top_builddir)/src/dev_exercices/libsample.la \
                         $(GTEST_LIBS) \
                         $(top_builddir)/lib/gmock/libgmock_main.la \
                         $(top_builddir)/lib/gmock/libgmock.la

TESTS += $(UNIT_TESTS)

TESTS_ENVIRONMENT_WITH_VALGRIND="libtool --mode=execute valgrind --leak-check=full"

.PHONY: check-with-valgrind
check-with-valgrind:
	$(MAKE) $(AM_MAKEFLAGS) check TESTS_ENVIRONMENT=$(TESTS_ENVIRONMENT_WITH_VALGRIND)

.PHONY: check-unit-tests
check-unit-tests:
	$(MAKE) $(AM_MAKEFLAGS) check TESTS=$(UNIT_TESTS)

.PHONY: check-unit-tests-with-valgrind
check-unit-tests-with-valgrind:
	$(MAKE) $(AM_MAKEFLAGS) check TESTS=$(UNIT_TESTS) TESTS_ENVIRONMENT=$(TESTS_ENVIRONMENT_WITH_VALGRIND)

include Makefile.am.coverage
include Makefile.am.checkstyle
include Makefile.am.doxygen
