#include <opencv2/opencv.hpp>
using namespace cv;
    int main( int argc, char** argv ) {
Mat img = imread( argv[1], -1 );
if( img.empty() ) return -1;
namedWindow( "Example2", 0);
imshow( "Example2", img );
waitKey(33);
destroyWindow( "Example2" );
}
