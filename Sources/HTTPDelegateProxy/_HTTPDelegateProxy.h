//
//  _HTTPDelegateProxy.h
//  CocoaDebug
//
//  Created by zhaoguoqing on 2020/9/2.
//

#import <Foundation/Foundation.h>
@interface _HTTPDelegateProxy: NSObject
@end

@interface _URLSessionDelegateProxy : _HTTPDelegateProxy
+ (void)startNetworkMonitoring;
@end

@interface _URLConnectionDelegateProxy : _HTTPDelegateProxy
+ (void)startNetworkMonitoring;
@end
