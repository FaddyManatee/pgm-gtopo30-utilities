typedef struct comment pgmComment;
typedef struct image pgmImage;

pgmImage* createImage();
pgmImage* createEmptyImage(int imageWidth, int imageHeight, int maxGray, int rawOrAscii);
int determineFormat(pgmImage *image);
char* getComment(pgmImage *image, int lineNo);
int getCommentExists(pgmImage *image, int lineNo);
unsigned short getMagicNumber(pgmImage *image);
int getWidth(pgmImage *image);
int getHeight(pgmImage *image);
int getMaxGrayValue(pgmImage *image);
unsigned char** getRaster(pgmImage *image);
unsigned char getPixel(pgmImage *image, int row, int column);
char* setComment(pgmImage *image, int lineNo);
void initImageRaster(pgmImage *image);
void setMagicNumber(pgmImage *image, unsigned short magicNo, int rawOrAscii);
void setDimensions(pgmImage *image, int width, int height);
void setMaxGrayValue(pgmImage *image, int maxGray);
void setPixel(pgmImage *image, unsigned char value, int row, int column);
void freeImage(pgmImage *image);