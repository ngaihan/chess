#include <iostream>
#include <string>

using namespace std;

class chessPiece{
private:
    int row; //row number it is located in
    int col; //col number it is located in
public:
    chessPiece(int newRow, int newCol);

    int getRow();
    void setRow(int newRow);
    
    int getCol();
    void setRow(int newRow);
    
    virtual ~chessPiece() = 0;
};