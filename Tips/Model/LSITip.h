//
//  LSITip.h
//  Tips
//
//  Created by Austin Potts on 3/17/20.
//  Copyright © 2020 Lambda School. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN



//swift
//class Tip {
//    let tipPercentage: Double
//    let splitCount: Int
//    let name: String
//    let subTotal: Double
//
//    init(tipPercentage: Double, splitCount: Int, name: String, subTotal: Double) {
//
//    }
//}

// An interface feels like a protocol

@interface LSITip : NSObject
//Properties create three things under the hood
//1. Setter (setting the property) setName

//2. Getter

//3. Instance Variable (_name )

//What information do you want to store
//tip total
//amount fo people
//tip percentage
//name


// Properties

@property NSString *name;
@property double subTotal;
@property double tipPercentage;
@property int splitCount;


// Methods (init )
// - = instance method (actual object)
// + = class method (blueprint)

- (instancetype)initWithName:(NSString *)name
                    subTotal:(double)subTotal
               tipPercentage:(double)tipPercentage
                  splitCount:(int)splitCount;




@end

NS_ASSUME_NONNULL_END
