
#ifndef TREE_LIBRARY_H
#define TREE_LIBRARY_H
struct BookNode {

    int	 id;
    BookNode *left;
    BookNode *right;

};
class library{
private:
    BookNode *root;
    BookNode* insert(BookNode* root, int data);
    void clear(BookNode*node);
    int subtreeRootIDSearch(BookNode * book, int id1, int id2);
public:
    library();



    void insert(int data);

    void clear();

    void subtreeRootIDSearch(int id1, int id2);


};
#endif //TREE_LIBRARY_H
