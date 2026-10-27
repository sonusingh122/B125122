#include <iostream>
using namespace std;

class Compressor
{
public:
    virtual void compress(double fileSize)
    {
        cout << "Compressing file..." << endl;
    }
};

class TextCompressor : public Compressor
{
public:
    void compress(double fileSize) override
    {
        double compressedSize = fileSize * 0.40;

        cout << "Text File:" << endl;
        cout << "Original Size: " << fileSize << " MB" << endl;
        cout << "Compressed Size: " << compressedSize << " MB" << endl;
    }
};

class ImageCompressor : public Compressor
{
public:
    void compress(double fileSize) override
    {
        double compressedSize = fileSize * 0.70;

        cout << "Image File:" << endl;
        cout << "Original Size: " << fileSize << " MB" << endl;
        cout << "Compressed Size: " << compressedSize << " MB" << endl;
    }
};

int main()
{
    TextCompressor text;
    ImageCompressor image;

    text.compress(100);
    cout << endl;
    image.compress(100);

    return 0;
}