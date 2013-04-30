
#import "UIImage+GSSolidColor.h"

@implementation UIImage (GSSolidColor)

+ (instancetype)imageWithSolidColor:(UIColor *)color size:(CGSize)size
{
    UIGraphicsBeginImageContext( size );
    CGContextRef ctx = UIGraphicsGetCurrentContext();
    CGRect r = CGRectMake( 0.0f, 0.0f, size.width, size.height );
    CGContextSetFillColorWithColor( ctx, color.CGColor );
    CGContextFillRect( ctx, r );
    UIImage *image = UIGraphicsGetImageFromCurrentImageContext();
    UIGraphicsEndImageContext();

    return image;
}

@end
