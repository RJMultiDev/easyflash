#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
    //load arg
    string fn = "main.ef";
    if (argc == 2) fn = *argv[1];
    int err = do_script(fn);
    return err;
}

int do_script(string file)
{
    ifstream Script(file);
    return 0;
}