// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: google/protobuf/struct.proto

#import "_GPBDescriptor.h"
#import "_GPBMessage.h"
#import "_GPBRootObject.h"

#if GOOGLE_PROTOBUF_OBJC_VERSION < 30002
#error This file was generated by a newer version of protoc which is incompatible with your Protocol Buffer library sources.
#endif
#if 30002 < GOOGLE_PROTOBUF_OBJC_MIN_SUPPORTED_VERSION
#error This file was generated by an older version of protoc which is incompatible with your Protocol Buffer library sources.
#endif

// @@protoc_insertion_point(imports)

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdeprecated-declarations"

CF_EXTERN_C_BEGIN

@class _GPBListValue;
@class _GPBStruct;
@class _GPBValue;

NS_ASSUME_NONNULL_BEGIN

#pragma mark - Enum _GPBNullValue

/**
 * `NullValue` is a singleton enumeration to represent the null value for the
 * `Value` type union.
 *
 *  The JSON representation for `NullValue` is JSON `null`.
 **/
typedef _GPB_ENUM(_GPBNullValue) {
  /**
   * Value used if any message's field encounters a value that is not defined
   * by this enum. The message will also have C functions to get/set the rawValue
   * of the field.
   **/
  _GPBNullValue__GPBUnrecognizedEnumeratorValue = k_GPBUnrecognizedEnumeratorValue,
  /** Null value. */
  _GPBNullValue_NullValue = 0,
};

_GPBEnumDescriptor *_GPBNullValue_EnumDescriptor(void);

/**
 * Checks to see if the given value is defined by the enum or was not known at
 * the time this source was generated.
 **/
BOOL _GPBNullValue_IsValidValue(int32_t value);

#pragma mark - _GPBStructRoot

/**
 * Exposes the extension registry for this file.
 *
 * The base class provides:
 * @code
 *   + (_GPBExtensionRegistry *)extensionRegistry;
 * @endcode
 * which is a @c _GPBExtensionRegistry that includes all the extensions defined by
 * this file and all files that it depends on.
 **/
@interface _GPBStructRoot : _GPBRootObject
@end

#pragma mark - _GPBStruct

typedef _GPB_ENUM(_GPBStruct_FieldNumber) {
  _GPBStruct_FieldNumber_Fields = 1,
};

/**
 * `Struct` represents a structured data value, consisting of fields
 * which map to dynamically typed values. In some languages, `Struct`
 * might be supported by a native representation. For example, in
 * scripting languages like JS a struct is represented as an
 * object. The details of that representation are described together
 * with the proto support for the language.
 *
 * The JSON representation for `Struct` is JSON object.
 **/
@interface _GPBStruct : _GPBMessage

/** Unordered map of dynamically typed values. */
@property(nonatomic, readwrite, strong, null_resettable) NSMutableDictionary<NSString*, _GPBValue*> *fields;
/** The number of items in @c fields without causing the array to be created. */
@property(nonatomic, readonly) NSUInteger fields_Count;

@end

#pragma mark - _GPBValue

typedef _GPB_ENUM(_GPBValue_FieldNumber) {
  _GPBValue_FieldNumber_NullValue = 1,
  _GPBValue_FieldNumber_NumberValue = 2,
  _GPBValue_FieldNumber_StringValue = 3,
  _GPBValue_FieldNumber_BoolValue = 4,
  _GPBValue_FieldNumber_StructValue = 5,
  _GPBValue_FieldNumber_ListValue = 6,
};

typedef _GPB_ENUM(_GPBValue_Kind_OneOfCase) {
  _GPBValue_Kind_OneOfCase__GPBUnsetOneOfCase = 0,
  _GPBValue_Kind_OneOfCase_NullValue = 1,
  _GPBValue_Kind_OneOfCase_NumberValue = 2,
  _GPBValue_Kind_OneOfCase_StringValue = 3,
  _GPBValue_Kind_OneOfCase_BoolValue = 4,
  _GPBValue_Kind_OneOfCase_StructValue = 5,
  _GPBValue_Kind_OneOfCase_ListValue = 6,
};

/**
 * `Value` represents a dynamically typed value which can be either
 * null, a number, a string, a boolean, a recursive struct value, or a
 * list of values. A producer of value is expected to set one of that
 * variants, absence of any variant indicates an error.
 *
 * The JSON representation for `Value` is JSON value.
 **/
@interface _GPBValue : _GPBMessage

/** The kind of value. */
@property(nonatomic, readonly) _GPBValue_Kind_OneOfCase kindOneOfCase;

/** Represents a null value. */
@property(nonatomic, readwrite) _GPBNullValue nullValue;

/** Represents a double value. */
@property(nonatomic, readwrite) double numberValue;

/** Represents a string value. */
@property(nonatomic, readwrite, copy, null_resettable) NSString *stringValue;

/** Represents a boolean value. */
@property(nonatomic, readwrite) BOOL boolValue;

/** Represents a structured value. */
@property(nonatomic, readwrite, strong, null_resettable) _GPBStruct *structValue;

/** Represents a repeated `Value`. */
@property(nonatomic, readwrite, strong, null_resettable) _GPBListValue *listValue;

@end

/**
 * Fetches the raw value of a @c _GPBValue's @c nullValue property, even
 * if the value was not defined by the enum at the time the code was generated.
 **/
int32_t _GPBValue_NullValue_RawValue(_GPBValue *message);
/**
 * Sets the raw value of an @c _GPBValue's @c nullValue property, allowing
 * it to be set to a value that was not defined by the enum at the time the code
 * was generated.
 **/
void Set_GPBValue_NullValue_RawValue(_GPBValue *message, int32_t value);

/**
 * Clears whatever value was set for the oneof 'kind'.
 **/
void _GPBValue_ClearKindOneOfCase(_GPBValue *message);

#pragma mark - _GPBListValue

typedef _GPB_ENUM(_GPBListValue_FieldNumber) {
  _GPBListValue_FieldNumber_ValuesArray = 1,
};

/**
 * `ListValue` is a wrapper around a repeated field of values.
 *
 * The JSON representation for `ListValue` is JSON array.
 **/
@interface _GPBListValue : _GPBMessage

/** Repeated field of dynamically typed values. */
@property(nonatomic, readwrite, strong, null_resettable) NSMutableArray<_GPBValue*> *valuesArray;
/** The number of items in @c valuesArray without causing the array to be created. */
@property(nonatomic, readonly) NSUInteger valuesArray_Count;

@end

NS_ASSUME_NONNULL_END

CF_EXTERN_C_END

#pragma clang diagnostic pop

// @@protoc_insertion_point(global_scope)
