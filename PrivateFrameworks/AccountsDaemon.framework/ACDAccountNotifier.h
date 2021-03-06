/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AccountsDaemon.framework/AccountsDaemon
 */

@class NSSet;

@interface ACDAccountNotifier : NSObject {
    NSSet *_notificationPlugins;
}

@property(readonly) NSSet * notificationPlugins;

+ (id)sharedAccountNotifier;

- (void).cxx_destruct;
- (void)_faultInNotificationPlugins;
- (id)notificationPlugins;
- (void)postDidChangeNotificationForType:(int)arg1 inStore:(id)arg2 newAccount:(id)arg3 oldAccount:(id)arg4;
- (BOOL)postWillChangeNotificationForType:(int)arg1 inStore:(id)arg2 newAccount:(id)arg3 oldAccount:(id)arg4;

@end
