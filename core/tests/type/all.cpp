// Copyright (c) 2008-2010 Kent State University
// Copyright (c) 2011-2012 Texas A&M University
//
// This file is distributed under the MIT License. See the accompanying file
// LICENSE.txt or http://www.opensource.org/licenses/mit-license.php for terms
// and conditions.

#include <origin/type.hpp>

using namespace std;
using namespace origin;


int main()
{
  static_assert(All(), "");
  static_assert(All(true), "");
  static_assert(All(true, true, true), "");

  static_assert(!All(false), "");
  static_assert(!All(true, true, false), "");
}
