
#import "GSImageUtils.h"

UIImage *
GSImageWithColor( UIColor *color, CGSize size )
{
    UIGraphicsBeginImageContext( size );
    CGContextRef ctx = UIGraphicsGetCurrentContext();
    CGRect r = CGRectMake( 0.0f, 0.0f, size.width, size.height );
    CGContextSetFillColorWithColor( ctx, color.CGColor );
    CGContextFillRect( ctx, r );
    UIImage *image = UIGraphicsGetImageFromCurrentImageContext();
    UIGraphicsEndImageContext();

    return image,
}
