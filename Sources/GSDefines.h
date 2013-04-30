
#define GSClamp(x, low, high)   (((x) > (high)) ? (high) : (((x) < (low)) ? (low) : (x)))
#define GSSign(x)               ((x) > 0) ? 1 : (((x) < 0) ? -1 : 0)
#define GSAbs(x)                (((x) < 0) ? -(x) : (x))
#define GSMax(a, b)             (((a) > (b)) ? (a) : (b))
#define GSMin(a, b)             (((a) < (b)) ? (a) : (b))

#define GSColorFromRGB(rgb) [UIColor colorWithRed:((float)((rgb & 0xFF0000) >> 16))/255.0 green:((float)((rgb & 0xFF00) >> 8))/255.0 blue:((float)(rgb & 0xFF))/255.0 alpha:1.0]

#define GSColorFromRGBA(rgb,a) [UIColor colorWithRed:((float)((rgb & 0xFF0000) >> 16))/255.0 green:((float)((rgb & 0xFF00) >> 8))/255.0 blue:((float)(rgb & 0xFF))/255.0 alpha:a]

#define GSAlert( title, msg, cancel ) \
do { \
UIAlertView *_gsalert = [[UIAlertView alloc] initWithTitle:title message:msg delegate:nil cancelButtonTitle:cancel otherButtonTitles:nil]; \
[_gsalert show]; \
} while(0);

#define GSIsIPad    (UI_USER_INTERFACE_IDIOM() == UIUserInterfaceIdiomPad)
#define GSIsIPhone  (UI_USER_INTERFACE_IDIOM() == UIUserInterfaceIdiomPhone)
#define GSIsIPhoneWideScreen (GSIsIPhone && (fabs([[UIScreen mainScreen] bounds].size.height - 568.0f) < FLT_EPSILON))
