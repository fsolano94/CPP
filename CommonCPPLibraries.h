#pragma once

////////////////////////////////////////////////////////
////////////////  UTILITIES LIBRARY ////////////////////
////////////////////////////////////////////////////////
/*
General purpose utilities: program control, dynamic memory allocation, random numbers, sort and search
*/
#include <cstdlib>

/*
Functions and macro constants for signal management
*/
#include <csignal>

/*
Macro (and function) that saves (and jumps) to an execution context
*/
#include <csetjmp>

/*
Handling of variable length argument lists
*/
#include <cstdarg>

/*
Runtime type information utilities
*/
#include <typeinfo>

/*
std::type_index
*/
#include <typeindex> // since c++11

/*
Compile-time type information
*/
#include <type_traits> // since c++11

/*
std::bitset class template
*/
#include <bitset>

/*
Function objects, Function invocations, Bind operations and Reference warppers
*/
#include <functional>

/*
Various utility components
*/
#include <utility>

/*
C-style time/date utilites
*/
#include <ctime>

/*
C++ time utilites
*/
#include <chrono>

/*
standard macros and typedefs
*/
#include <cstddef>

/*
std::initializer_list class template
*/
#include <initializer_list> // (since C++11)

/*
std::tuple class template
*/
#include <tuple> //(since C++11)

/*
std::any class
*/
//#include <any>// (since C++17)

/*
std::optional class template
*/
//#include <optional> //(since C++17)


/*
std::variant class template
*/
//#include <variant> //(since C++17)


////////////////////////////////////////////////////////
//////////  DYNAMIC MEMORY MANAGEMENT //////////////////
////////////////////////////////////////////////////////

/*
Low-level memory management utilities
*/
#include <new>

/*
Higher level memory management utilities
*/
#include <memory>

/*
Nested allocator class
*/
#include <scoped_allocator> // (since C++11)

/*
Polymorphic allocators and memory resources
*/
//#include <memory_resource> //(since C++17)


////////////////////////////////////////////////////////
//////////  NUMERIC LIMITS   ///////////////////////////
////////////////////////////////////////////////////////

/*
limits of integral types
*/
#include <climits>

/*
limits of float types
*/
#include <cfloat>

/*
fixed-size types and limits of other types
*/
#include <cstdint> //(since C++11)

/*
formatting macros , intmax_t and uintmax_t math and conversions
*/
#include <cinttypes>// (since C++11)

/*
standardized way to query properties of arithmetic types
*/
#include <limits>

////////////////////////////////////////////////////////
//////////  ERROR HANDLING   ///////////////////////////
////////////////////////////////////////////////////////

/*
Exception handling utilities
*/
#include <exception>

/*
Standard exception objects
*/
#include <stdexcept>

/*
Conditionally compiled macro that compares its argument to zero
*/
#include <cassert>

/*
defines std::error_code, a platform-dependent error code
*/
#include <system_error> //(since C++11)

/*
Macro containing the last error number
*/
#include <cerrno>

////////////////////////////////////////////////////////
//////////  STRINGS LIBRARY   //////////////////////////
////////////////////////////////////////////////////////

/*
Functions to determine the type contained in character data
*/
#include <cctype>

/*
Functions to determine the type contained in wide character data
*/
#include <cwctype>

/*
various narrow character string handling functions
*/
#include <cstring>

/*
various wide and multibyte string handling functions
*/
#include <cwchar>

/*
C-style Unicode character conversion functions
*/
#include <cuchar>// (since C++11)

/*
std::basic_string class template
*/
#include <string>

/*
std::basic_string_view class template
*/
//#include <string_view> //(since C++17)

/*
std::to_chars and std::from_chars
*/
//#include <charconv> //(since C++20)

////////////////////////////////////////////////////////
//////////  CONTAINERS LIBRARY   ///////////////////////
////////////////////////////////////////////////////////

/*
std::array container
*/
#include <array>// (since C++11)

/*
std::vector container
*/
#include <vector>

/*
std::deque container
*/
#include <deque>

/*
std::list container
*/
#include <list>

/*
std::forward_list container
*/
#include <forward_list> //(since C++11)

/*
std::set and std::multiset associative containers
*/
#include <set>

/*
std::map and std::multimap associative containers
*/
#include <map>

/*
std::unordered_set and std::unordered_multiset unordered associative containers
*/
#include <unordered_set> //(since C++11)

/*
std::unordered_map and std::unordered_multimap unordered associative containers
*/
#include <unordered_map> //(since C++11)

/*
std::stack container adaptor
*/
#include <stack>

/*
std::queue and std::priority_queue container adaptors
*/
#include <queue>

////////////////////////////////////////////////////////
//////////  ALGORITHMS LIBRARY   ///////////////////////
////////////////////////////////////////////////////////

/*
Algorithms that operate on containers
*/
#include <algorithm>

/*
Predefined execution policies for parallel versions of the algorithms
*/
//#include <execution> //(C++17)

////////////////////////////////////////////////////////
////////////  ITERATORS LIBRARY  ///////////////////////
////////////////////////////////////////////////////////

/*
Container iterators
*/
#include <iterator>


////////////////////////////////////////////////////////
////////////  NUMERICS LIBRARY  ////////////////////////
////////////////////////////////////////////////////////

/*
Common mathematics functions
*/
#include <cmath>

/*
Complex number type
*/
#include <complex>

/*
Class for representing and manipulating arrays of values
*/
#include <valarray>

/*
Random number generators and distributions
*/
#include <random> //(since C++11)

/*
Numeric operations on values in containers
*/
#include <numeric>

/*
Compile-time rational arithmetic
*/
#include <ratio> //(since C++11)	

/*
Floating-point environment access functions
*/
#include <cfenv> //(since C++11)

////////////////////////////////////////////////////////
///////////  INPUT/OUTPUT LIBRARY //////////////////////
////////////////////////////////////////////////////////

/*
forward declarations of all classes in the input/output library
*/
#include <iosfwd>

/*
std::ios_base class, std::basic_ios class template and several typedefs
*/
#include <ios>

/*
std::basic_istream class template and several typedefs
*/
#include <istream>	

/*
std::basic_ostream, std::basic_iostream class templates and several typedefs
*/
#include <ostream>

/*
several standard stream objects
*/
#include <iostream>

/*
std::basic_fstream, std::basic_ifstream, std::basic_ofstream class templates and several typedefs
*/
#include <fstream>

/*
std::basic_stringstream, std::basic_istringstream, std::basic_ostringstream class templates and several typedefs
*/
#include <sstream>

/*
std::strstream, std::istrstream, std::ostrstream
*/
#include <strstream> //(deprecated)

/*
Helper functions to control the format or input and output
*/
#include <iomanip>

/*
std::basic_streambuf class template
*/
#include <streambuf>

/*
C-style input-output functions
*/
#include <cstdio>

////////////////////////////////////////////////////////
///////////  LOCALIZATION LIBRARY //////////////////////
////////////////////////////////////////////////////////

/*
Localization utilities
*/
#include <locale>

/*
C localization utilities
*/
#include <clocale>

/*
Unicode conversion facilities
*/
#include <codecvt> //(since C++11) (deprecated in C++17)

////////////////////////////////////////////////////////
///////////  REGULAR EXPRESSIONS LIBRARY ///////////////
////////////////////////////////////////////////////////

/*
Classes, algorithms and iterators to support regular expression processing
*/
#include <regex> //(since C++11)

////////////////////////////////////////////////////////
///////////  ATOMIC OPERATIONS LIBRARY /////////////////
////////////////////////////////////////////////////////

/*
Atomic operations library
*/
#include <atomic> //(since C++11)


////////////////////////////////////////////////////////
///////////  THREAD SUPPORT LIBRARY ////////////////////
////////////////////////////////////////////////////////

/*
std::thread class and supporting functions
*/
#include <thread> //(since C++11)

/*
mutual exclusion primitives
*/
#include <mutex> //(since C++11)	

/*
shared mutual exclusion primitives
*/
#include <shared_mutex> //(since C++14)

/*
primitives for asynchronous computations
*/
#include <future> //(since C++11)

/*
thread waiting conditions
*/

#include <condition_variable> //(since C++11)

////////////////////////////////////////////////////////
///////////////  FILESYSTEM LIBRARY ////////////////////
////////////////////////////////////////////////////////
/*
std::path class and supporting functions
*/
//#include <filesystem> //(since C++17)


