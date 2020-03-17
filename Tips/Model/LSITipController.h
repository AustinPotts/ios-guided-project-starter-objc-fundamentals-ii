//
//  LSITipController.h
//  Tips
//
//  Created by Austin Potts on 3/17/20.
//  Copyright © 2020 Lambda School. All rights reserved.
//


// .h header public
#import <Foundation/Foundation.h>


// Class forward Declaration
@class LSITip;

NS_ASSUME_NONNULL_BEGIN

@interface LSITipController : NSObject

// Immuatble (read only) must use addTip
@property (readonly, nonatomic) NSArray<LSITip *> *tips;

// Property Attributes
// readonly, readwrite* default
// atomic* defualt, non atomic

// Use default init from NSOBJECT (dont need to redeclare it)
//-(instancetype)init

-(void)addTip:(LSITip *)tip;

@end

NS_ASSUME_NONNULL_END
