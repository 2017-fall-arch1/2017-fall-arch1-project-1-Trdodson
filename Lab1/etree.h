#ifndef etree_included /*Prevent multiple inclusion. From DEMO code in llist.h*/
#define etree_included

/*a leaf in a tree.*/
typedef struct ELeaf {
  struct ELeaf *left;
  struct Elead *right;
  string *name;
}

  typedef struct {
    ELeaf *root;
  } ETree;

/*Create a new tree.*/
ETree *etAlloc();

/*Free up memory associated with a tree.*/
void etFree(ETree *lp);

/*Add the given string to the tree.*/
void etAdd(ETree *tree, string *s);

/*Print the tree. Default message if null.*/
void etPrint(ETree *tree, string *msg);

#endif
