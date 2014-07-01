#include "pipeline_data.h"

using namespace cv;
using namespace std;

PipelineData::PipelineData(Mat colorImage, Rect regionOfInterest, Config* config)
{
  this->colorImg = colorImage;
  cvtColor(this->colorImg, this->grayImg, CV_BGR2GRAY);
  
  this->regionOfInterest = regionOfInterest;
  this->config = config;
}

PipelineData::~PipelineData()
{
}