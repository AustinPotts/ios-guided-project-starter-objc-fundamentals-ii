//
//  LSITip.m
//  Tips
//
//  Created by Austin Potts on 3/17/20.
//  Copyright © 2020 Lambda School. All rights reserved.
//

#import "LSITip.h"

@implementation LSITip

- (instancetype)initWithName:(NSString *)name
                    subTotal:(double)subTotal
               tipPercentage:(double)tipPercentage
                  splitCount:(int)splitCount {
    
    self = [super init]; //NSObject Init
    
    if (self) { // if self is not equal to nil
        _name = name;
        _subTotal = subTotal;
        _tipPercentage = tipPercentage;
        _splitCount = splitCount;
    }
    
    return self;
    //Init Rule: Always set your instance varaibles (_name),
   // dont use property syntax i.e (self.name) it can have side effects
    
    
}

@end
