#include <iostream>
#include "process.h"
using std::cout, std::endl;

void process::planProcess()
{
 cout << "this is planningprocess" << endl;
 my_map.mapInfo();
 cout << "planning success" << endl;
}