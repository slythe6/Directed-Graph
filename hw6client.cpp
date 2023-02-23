// CS311 Yoshii FALL21
// HW6 Client file 
// INSTRUCTION: Complete this file and comment using How to Comment file.
//---------------------------------------------

// ================================================
// HW#: HW6 dgraph client 
// Name: Simon Hausmaninger
// File type:  g++  (tester)
// ================================================

 // includes
#include "dgraph.h"
#include <cstdlib>
#include <iomanip>
using namespace std;

//** // comments
int main()
{ 
    char vertex = ' ';
    slist l1;
    //0.Declare dgraph object
    dgraph tableObj;
    //1.fillTable()
    tableObj.fillTable();
    //2.displayGraph()
    tableObj.displayGraph();
    //while (the user does not want to stop)
    //a.the user will specify which vertex     
    //b.findOutDegree of the vertex and display the result
    //b.findAdjacency of the vertex and display the result (see Hint)
    //c.catch exception to display error mesg but do not exit
    //end of while

    

    while(vertex != 'Z')
    {
      try{
      cout << "Specify Vertex to find Degree and Adjacency: (Enter 'Z' to quit): ";
      cin >> vertex;
      cout << tableObj.findOutDegree(vertex) << " edges come out to:" << endl;
      l1 = tableObj.findAdjacency(vertex);
      l1.displayAll();
      }catch(dgraph::BadVertex)
      {
        cerr << "Invalid Vertex\n";
      }
    }
}

/*
Hint:
  slist l1;
  l1 = G.findAdjacency('a');
  // how do you display l1?  Hint: it is an slist from HW3.

*/
