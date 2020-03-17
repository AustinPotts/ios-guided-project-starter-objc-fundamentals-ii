//
//  LSITipController.m
//  Tips
//
//  Created by Austin Potts on 3/17/20.
//  Copyright © 2020 Lambda School. All rights reserved.
//


//.m Implementation Private
#import "LSITipController.h"
#import "LSITip.h"

// Class Extension (Private properties, instance varibales, methods)

@interface LSITipController () {
    //Private instance variables
    int _counter; //Private variable defaults to 0
}

//Private Property
@property NSMutableArray<LSITip *> *internalTips;

//Private methods

@end


@implementation LSITipController

//Init
- (instancetype) init {
    self = [super init];
    if (self) {
        
        
        //How do I initialize my internal Tips
        _internalTips = [[NSMutableArray alloc] init];
        
    }
    return self;
}

-(void)addTip:(LSITip *)tip {
    [self.internalTips addObject:tip];
}

//Computed Property
//Overriding a default value
- (NSArray<LSITip *> *)tips {
    
    return [self.internalTips copy]; //NSMutableArray -> NSArray
    
}

@end
