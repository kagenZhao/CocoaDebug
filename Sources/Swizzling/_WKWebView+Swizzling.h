//
//  _WKWebView+Swizzling.h
//  CocoaDebug
//
//  Created by Kagen Zhao on 2021/4/29.
//

#import <Foundation/Foundation.h>
#import <WebKit/WebKit.h>

@interface WKWebView (_Swizzling)
+ (void)startWKWebViewMonitoring;
@end
