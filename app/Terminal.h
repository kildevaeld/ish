//
//  Terminal.h
//  iSH
//
//  Created by Theodore Dubois on 10/18/17.
//

#import <UIKit/UIKit.h>
#import <WebKit/WebKit.h>

@interface Terminal : NSObject

+ (Terminal *)terminalWithType:(int)type number:(int)number;

- (size_t)write:(const void *)buf length:(size_t)len;
- (void)sendInput:(const char *)buf length:(size_t)len;

@property (readonly) WKWebView *webView;

@end

extern struct tty_driver ios_tty_driver;
