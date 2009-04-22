//
//  SpriteMath.h
//  iMurphy
//
//  Created by Dave Peck on 4/21/09.
//  Copyright 2009 Code Orange. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <OpenGLES/EAGL.h>
#import <OpenGLES/ES1/gl.h>
#import <OpenGLES/ES1/glext.h>

#define LINEAR_MAP(value,valueLow,valueHigh,targetLow,targetHigh) (((value - valueLow) * ((targetHigh - targetLow) / (valueHigh - valueLow))) + valueLow)

/*
@interface SpriteMath : NSObject {}

@end
*/