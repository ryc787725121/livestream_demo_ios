#import "UCloudGPUImageFilter.h"

@interface UCloudGPUImageGammaFilter : UCloudGPUImageFilter
{
    GLint gammaUniform;
}

// Gamma ranges from 0.0 to 3.0, with 1.0 as the normal level
@property(readwrite, nonatomic) CGFloat gamma; 

@end
