template <typename Callback>
void some_function(int, int, int, Callback) {}

int main(int, char **)
{
  int a_really_long_name;
  int another_long_name;
  int a_third_long_name;
  some_function(
    a_really_long_name,
    another_long_name,
    a_third_long_name,
    [&](LineCallback line_callback) {
      int a;
      int b;
    });
  return 0;
}
