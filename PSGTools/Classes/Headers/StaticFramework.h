//
//  StaticFramework.h
//  StaticFramework
//
//  Created by 元和 on 2021/6/22.
//  Copyright © 2021 hahaha. All rights reserved.
//

#import <Foundation/Foundation.h>

//! Project version number for StaticFramework.
FOUNDATION_EXPORT double StaticFrameworkVersionNumber;

//! Project version string for StaticFramework.
FOUNDATION_EXPORT const unsigned char StaticFrameworkVersionString[];

// In this header, you should import all the public headers of your framework using statements like #import <StaticFramework/PublicHeader.h>

@interface StaticFramework : NSObject

- (void)log;

@end
