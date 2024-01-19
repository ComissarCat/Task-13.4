#include <iostream>
#include <vector>

using namespace std;

class Multiplication_table
{
private:
    vector <vector <int>> table;
public:
    Multiplication_table()
    {
        vector<int> line;
        for (int i = 1; i <= 10; i++)
        {
            line.clear();
            for (int j = 1; j <= 10; j++)
            {
                line.push_back(i * j);
            }
            table.push_back(line);
        }
    }
    friend ostream& operator<<(ostream& out, Multiplication_table& multiplication_table)
    {
        for (vector <vector <int>>::iterator line = multiplication_table.table.begin(); line != multiplication_table.table.end(); line++)
        {
            for (vector<int>::iterator number = line->begin(); number != line->end(); number++)
            {
                out << *number << "\t";
            }
            out << "\n";
        }
        return out;
    }
};

int main()
{
    setlocale(LC_ALL, "Russian");

    Multiplication_table multiplication_table;
    cout << multiplication_table;

    return 0;
}