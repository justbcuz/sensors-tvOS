//
//  Use this file to import your target's public headers that you would like to expose to Swift.
//

#include <Foundation/Foundation.h>
#include <CoreFoundation/CoreFoundation.h>
//#include <IOKit/hidsystem/IOHIDEventSystemClient.h>

typedef void * IOHIDEventSystemClientRef;

//typedef void * _IOHIDServiceClientCopyEvent;
//typedef void * _IOHIDServiceClientCopyProperty;
//typedef void * _IOHIDEventGetFloatValue;
//typedef void * _IOHIDEventSystemClientSetMatching;
//typedef void * _IOHIDEventSystemClientCreate;
//typedef void * _IOHIDEventSystemClientCopyServices;

//void *_IOHIDServiceClientCopyEvent(void *);
//void *_IOHIDServiceClientCopyProperty(void *);
//void *_IOHIDEventGetFloatValue(void *);
//void *_IOHIDEventSystemClientSetMatching(void *);
//void *_IOHIDEventSystemClientCreate(void *);
//void *_IOHIDEventSystemClientCopyServices(void *);


extern CFDictionaryRef matching(int page, int usage);
extern IOHIDEventSystemClientRef IOHIDEventSystemClientCreate(CFAllocatorRef allocator);

extern NSArray* currentArray();
extern NSArray* voltageArray();
extern NSArray* thermalArray();

extern NSArray* returnCurrentValues();
extern NSArray* returnVoltageValues();
extern NSArray* returnThermalValues();
