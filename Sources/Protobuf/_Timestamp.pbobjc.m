//
//  Example
//  man.li
//
//  Created by man.li on 11/11/2018.
//  Copyright © 2020 man.li. All rights reserved.
//

#if !defined(_GPB_USE_PROTOBUF_FRAMEWORK_IMPORTS)
 #define _GPB_USE_PROTOBUF_FRAMEWORK_IMPORTS 0
#endif

#if _GPB_USE_PROTOBUF_FRAMEWORK_IMPORTS
 #import <protobuf/_GPBProtocolBuffers_RuntimeSupport.h>
#else
 #import "_GPBProtocolBuffers_RuntimeSupport.h"
#endif

#if _GPB_USE_PROTOBUF_FRAMEWORK_IMPORTS
 #import <protobuf/Timestamp.pbobjc.h>
#else
 #import "_Timestamp.pbobjc.h"
#endif
// @@protoc_insertion_point(imports)

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdeprecated-declarations"

#pragma mark - _GPBTimestampRoot

@implementation _GPBTimestampRoot

// No extensions in the file and no imports, so no need to generate
// +extensionRegistry.

@end

#pragma mark - _GPBTimestampRoot_FileDescriptor

static _GPBFileDescriptor *_GPBTimestampRoot_FileDescriptor(void) {
  // This is called by +initialize so there is no need to worry
  // about thread safety of the singleton.
  static _GPBFileDescriptor *descriptor = NULL;
  if (!descriptor) {
    _GPB_DEBUG_CHECK_RUNTIME_VERSIONS();
    descriptor = [[_GPBFileDescriptor alloc] initWithPackage:@"google.protobuf"
                                                 objcPrefix:@"_GPB"
                                                     syntax:_GPBFileSyntaxProto3];
  }
  return descriptor;
}

#pragma mark - _GPBTimestamp

@implementation _GPBTimestamp

@dynamic seconds;
@dynamic nanos;

typedef struct _GPBTimestamp__storage_ {
  uint32_t _has_storage_[1];
  int32_t nanos;
  int64_t seconds;
} _GPBTimestamp__storage_;

// This method is threadsafe because it is initially called
// in +initialize for each subclass.
+ (_GPBDescriptor *)descriptor {
  static _GPBDescriptor *descriptor = nil;
  if (!descriptor) {
    static _GPBMessageFieldDescription fields[] = {
      {
        .name = "seconds",
        .dataTypeSpecific.className = NULL,
        .number = _GPBTimestamp_FieldNumber_Seconds,
        .hasIndex = 0,
        .offset = (uint32_t)offsetof(_GPBTimestamp__storage_, seconds),
        .flags = _GPBFieldOptional,
        .dataType = _GPBDataTypeInt64,
      },
      {
        .name = "nanos",
        .dataTypeSpecific.className = NULL,
        .number = _GPBTimestamp_FieldNumber_Nanos,
        .hasIndex = 1,
        .offset = (uint32_t)offsetof(_GPBTimestamp__storage_, nanos),
        .flags = _GPBFieldOptional,
        .dataType = _GPBDataTypeInt32,
      },
    };
    _GPBDescriptor *localDescriptor =
        [_GPBDescriptor allocDescriptorForClass:[_GPBTimestamp class]
                                     rootClass:[_GPBTimestampRoot class]
                                          file:_GPBTimestampRoot_FileDescriptor()
                                        fields:fields
                                    fieldCount:(uint32_t)(sizeof(fields) / sizeof(_GPBMessageFieldDescription))
                                   storageSize:sizeof(_GPBTimestamp__storage_)
                                         flags:_GPBDescriptorInitializationFlag_None];
    #if defined(DEBUG) && DEBUG
      NSAssert(descriptor == nil, @"Startup recursed!");
    #endif  // DEBUG
    descriptor = localDescriptor;
  }
  return descriptor;
}

@end


#pragma clang diagnostic pop

// @@protoc_insertion_point(global_scope)
