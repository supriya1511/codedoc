namespace bar {

/*
 * 'bar_void_function()' - Do foo with bar.
 *
 * Use the @link bar_float_function@ or @link bar_int_function@ functions
 * instead.  Pass @code NULL@ for "three" then there is no string to print.
 *
 * - List item 1
 * - List item 2 is longer and spans
 *   two lines.
 * - List item 3
 *
 * This is a code example:
 *
 * ```
 * | bar_void_function(1, 2.0f, "3");
 * |
 * | if (bar)
 * |   bar_void_function(2, 4.0f, "6");
 * ```
 *
 * This is a paragraph following the code example with `code`, *emphasized*,
 * and **strongly emphasized** text.
 *
 * <https://www.msweet.org/codedoc> is the home page.
 *
 * File bugs [here](https://github.com/michaelrsweet/codedoc/issues).
 *
 * @deprecated@
 */

void
bar_void_function(int        one,	/* I - Integer */
                  float      *two,	/* O - Real number */
                  const char *three)	/* I - String */
{
  if (one)
  {
    puts("Hello, World!");
  }
  else
    puts(three);

  *two = 2.0f;
}


/*
 * 'bar_float_function()' - Do foo with bar.
 *
 * @since 1.2@
 */

float					/* O - Real number */
bar_float_function(int        one,	/* I - Integer */
                   const char *two)	/* I - String */
{
  if (one)
  {
    puts("Hello, World!");
  }
  else
    puts(two);

  return (2.0f);
}


/*
 * 'bar_default_string()' - Do something with a defaulted string arg.
 */

int					/* O - Integer value */
bar_default_string(int one,		/* I - Integer */
                   const char *two = "2")
					/* I - String */
{
  if (one)
  {
    puts("Hello, World!");
  }
  else
    puts(two);

  return (2);
}


/*
 * 'bar_default_int()' - Do something with a defaulted int arg.
 */

int					/* O - Integer value */
bar_default_int(int one,		/* I - Integer */
                int two = 2)		/* I - Integer */
{
  if (one)
  {
    puts("Hello, World!");
  }
  else
    puts(two);

  return (2);
}


/*
 * 'bar_void_func()' - Function taking no arguments.
 */

void
bar_void_func(void)
{
  puts("bar_void_func()");
}


/*
 * 'bar_private_func()' - Private function.
 *
 * @private@
 */

void
bar_private_func(void)
{
  puts("bar_private_func()");
}

}
