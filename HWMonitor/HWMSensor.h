//
//  HWMSensor.h
//  HWMonitor
//
//  Created by Kozlek on 15/11/13.
//  Copyright (c) 2013 kozlek. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CoreData/CoreData.h>

#import "HWMItem.h"

typedef enum {
    kHWMSensorLevelUnused                = 0,
    kHWMSensorLevelDisabled              = 1,
    kHWMSensorLevelNormal                = 2,
    kHWMSensorLevelModerate              = 3,
    kHWMSensorLevelHigh                  = 4,
    kHWMSensorLevelExceeded              = 1000,
} HWMSensorLevel;

@class HWMSensorsGroup, HWMGraph;

@interface HWMSensor : HWMItem

@property (nonatomic, retain) NSNumber * level;
@property (nonatomic, retain) NSNumber * service;
@property (nonatomic, retain) NSNumber * selector;
@property (nonatomic, retain) NSString * type;
@property (nonatomic, retain) NSNumber * value;
@property (nonatomic, retain) HWMSensorsGroup * group;
@property (nonatomic, retain) HWMGraph *graph;

@property (readonly) NSString * formattedValue;

- (void)doUpdateValue;

@end
