/**
 * The MIT License (MIT)
 *
 * Copyright © 2018-2020 Ruben Van Boxem
 *
 * Permission is hereby granted, free of charge, to any person obtaining a copy
 * of this software and associated documentation files (the "Software"), to deal
 * in the Software without restriction, including without limitation the rights
 * to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 * copies of the Software, and to permit persons to whom the Software is
 * furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in
 * all copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 * OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
 * THE SOFTWARE.
 **/

#include "css/test_rule.h++"

#include <css/grammar/quoted_string.h++>

namespace
{
  using skui::core::string;

  const string good = "\"this is a \' quoted _string\"";
  const string bad = "this is not a quoted string";
  const string unterminated = "\"when will it end?";
  const string continues = "\"here\" or not?\"";
}

int main()
{
  using skui::test::check_rule_success;
  using skui::test::check_rule_failure;

  using skui::css::grammar::quoted_string;
  check_rule_success(quoted_string, good, "this is a \' quoted _string");
  check_rule_failure(quoted_string, bad);
  check_rule_failure(quoted_string, unterminated);
  check_rule_failure(quoted_string, continues);

  return skui::test::exit_code;
}
