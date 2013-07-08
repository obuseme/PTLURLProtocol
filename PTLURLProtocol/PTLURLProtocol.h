//
//  PTLURLProtocol.h
//  PTLURLProtocol
//
//  Created by Brian Partridge on 7/7/13.
//  Copyright (c) 2013 Brian Partridge. All rights reserved.
//

#import <Foundation/Foundation.h>

#pragma mark - Error Definitions

typedef NS_ENUM(NSInteger, PTLURLProtocolError) {
    PTLURLProtocolErrorUnableToCreateResponse,
    PTLURLProtocolErrorUnknown,
};

extern NSString * const PTLURLProtocolErrorDomain;

/// UserInfo key containing the original request that caused the error.
extern NSString * const kPTLURLProtocolErrorOriginalRequest;

#pragma mark - PTLURLProtocol

/// Helper class to envelope much of the boilerplate required to create an NSURLProtocol subclass
@interface PTLURLProtocol : NSURLProtocol

#pragma mark - Registration Helpers

/// Register this protocol.
+ (void)registerProtocol;

/// Unregister this protocol.
+ (void)unregisterProtocol;

#pragma mark - Required Subclass Overrides

/// From NSURLProtocol
+ (BOOL)canInitWithRequest:(NSURLRequest *)request;

/// Generate and return a response for the given request.
+ (NSURLResponse *)responseForRequest:(NSURLRequest *)request;

/// Generate and return data (if any) for the given request.
+ (NSData *)dataForRequest:(NSURLRequest *)request;

@end
