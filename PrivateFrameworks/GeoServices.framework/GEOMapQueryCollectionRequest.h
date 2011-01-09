/* Generated by RuntimeBrowser on iPhone OS 4.1
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@class NSMutableArray;



@interface GEOMapQueryCollectionRequest : PBRequest 
{
    NSMutableArray *_requestElementss;
}

@property(readonly) NSInteger requestElementssCount;
@property(retain) NSMutableArray *requestElementss;


- (BOOL)readFrom:(id)arg1;
- (id)description;
- (id)init;
- (void)dealloc;
- (NSInteger)requestElementssCount;
- (void)setRequestElements:(id)arg1 atIndex:(NSUInteger)arg2;
- (id)requestElementsAtIndex:(NSUInteger)arg1;
- (void)addRequestElements:(id)arg1;
- (id)requestElementss;
- (void)setRequestElementss:(id)arg1;
- (Class)responseClass;
- (void)writeTo:(id)arg1;
- (NSUInteger)requestTypeCode;

@end