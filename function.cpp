#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void print(const vector<int> list)
{
  cout << "Printing list" << endl;
  cout << "=============" << endl;
  if (list.empty())
    cout << "List is empty" << endl;

  for (auto l : list)
  {
    cout << l << endl;
  }
  cout << "=============" << endl;
  cout << endl;
}

void add(vector<int> &list, int num)
{
  cout << "Adding to the List" << endl;
  cout << "=============" << endl;
  if (num)
  {
    list.push_back(num);
    cout << "Added " << num << " successfully" << endl;
  }
  else
  {
    cout << "num is empty" << endl;
  }
  cout << "=============" << endl;
  cout << endl;
}

void mean(const vector<int> list)
{
  cout << "Finding the mean" << endl;
  cout << "=============" << endl;
  int result{};
  for (auto l : list)
  {
    result += l;
  }
  cout << "The mean is: " << result / list.size() << endl;
  cout << "=============" << endl;
}

void smallest(const vector<int> list)
{
  cout << "=============" << endl;
  cout << "Smallest value in List: " << *min_element(list.begin(), list.end()) << endl;
  cout << "=============" << endl;
  cout << endl;
}

void largest(const vector<int> list)
{
  cout << "=============" << endl;
  int large{};
  for (auto i = 0; i < list.size(); i++)
  {
    if (list.at(i) > large)
    {
      large = list.at(i);
    }
  }
  cout << "The Largest value in List: " << large << endl;
  cout << "=============" << endl;
  cout << endl;
}

void display(vector<int> &list)
{
  char input{};

  do
  {
    cout << "P. print numbers" << endl;
    cout << "A. add a number" << endl;
    cout << "M. display mean of the numbers" << endl;
    cout << "S. smallest number" << endl;
    cout << "L. largest number" << endl;
    cout << "Q. quit" << endl;
    cout << "Enter your choice: ";
    cin >> input;
    cout << endl;
    if (input != 'P' && input != 'A' && input != 'M' && input != 'S' && input != 'L' && input != 'Q' && input != 'p' && input != 'a' && input != 'm' && input != 's' && input != 'l' && input != 'q')
    {
      cout << "==================================" << endl;
      cout << "Unkown Selection, Please try again" << endl;
      cout << "==================================" << endl;
    }

    if (input == 'P' || input == 'p')
    {
      print(list);
    }
    if (input == 'A' || input == 'a')
    {
      int num{};
      cout << "Enter a number to Add: ";
      cin >> num;
      add(list, num);
    }
    if (input == 'M' || input == 'm')
    {
      mean(list);
    }
    if (input == 'S' || input == 's')
    {
      smallest(list);
    }
    if (input == 'L' || input == 'l')
    {
      largest(list);
    }

  } while (input != 'Q' && input != 'q');
  cout << "Goodbye" << endl;
}

int main()
{
  vector<int> list{};
  display(list);

  return 0;
}