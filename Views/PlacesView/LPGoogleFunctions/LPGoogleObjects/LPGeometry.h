//
//  doctor
//
//  Created by Thomas.Woodfin on 8/12/15.
//  Copyright (c) 2015 Thomas. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "LPLocation.h"
#import "LPBounds.h"


@interface LPGeometry : NSObject <NSCoding>

@property (nonatomic, strong) LPLocation *location;
@property (nonatomic, strong) LPBounds *viewport;

+ (id)geometryWithObjects:(NSDictionary *)dictionary;

- (NSDictionary *)dictionary;

- (id)copyWithZone:(NSZone *)zone;

@end