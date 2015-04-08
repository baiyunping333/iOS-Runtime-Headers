/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@class CKDCancelTokenGroup, CKDMMCSItem, CKDMMCSRequestOptions, CKDProgressTracker, CKPackage, NSArray, NSError, NSObject<OS_dispatch_group>;

@interface CKPackageUploadTask : NSObject <CKDCancelling> {
    CKDMMCSItem *_MMCSManifestItem;
    CKDMMCSRequestOptions *_MMCSRequestOptions;
    NSArray *_MMCSSectionItems;
    CKDCancelTokenGroup *_cancelTokens;
    NSError *_error;
    NSObject<OS_dispatch_group> *_group;
    CKPackage *_package;
    CKDProgressTracker *_progressTracker;
}

@property(retain) CKDMMCSItem * MMCSManifestItem;
@property(retain) CKDMMCSRequestOptions * MMCSRequestOptions;
@property(retain) NSArray * MMCSSectionItems;
@property(retain) CKDCancelTokenGroup * cancelTokens;
@property(retain) NSError * error;
@property(retain) NSObject<OS_dispatch_group> * group;
@property(readonly) CKPackage * package;
@property(retain) CKDProgressTracker * progressTracker;

- (void).cxx_destruct;
- (id)MMCSManifestItem;
- (id)MMCSRequestOptions;
- (id)MMCSSectionItems;
- (void)cancel;
- (id)cancelTokens;
- (id)error;
- (id)group;
- (id)initWithPackage:(id)arg1 trackProgress:(BOOL)arg2;
- (id)package;
- (id)progressTracker;
- (void)setCancelTokens:(id)arg1;
- (void)setError:(id)arg1;
- (void)setGroup:(id)arg1;
- (void)setMMCSManifestItem:(id)arg1;
- (void)setMMCSRequestOptions:(id)arg1;
- (void)setMMCSSectionItems:(id)arg1;
- (void)setProgressTracker:(id)arg1;

@end