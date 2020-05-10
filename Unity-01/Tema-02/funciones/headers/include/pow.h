
int pow(int number, int limit)
{
  for (int i = 1; i < limit; i++)
    number *= number;

  return number;
}