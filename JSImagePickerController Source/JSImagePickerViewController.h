//
//  JSImagePickerViewController.h
//  iOS8Style-ImagePicker
//
//  Created by Jake Sieradzki on 09/01/2015.
//  Copyright (c) 2015 Jake Sieradzki. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <CoreLocation/CoreLocation.h>

@interface PhotoMetadata : NSObject

@property(nonatomic, strong) NSDate *date;
@property(nonatomic, strong) CLLocation *location;

@end

@class JSImagePickerViewController;
@protocol JSImagePickerViewControllerDelegate <NSObject>

- (void)imagePicker:(JSImagePickerViewController *)imagePicker didSelectImages:(NSArray *)images fromSource:(UIImagePickerControllerSourceType)source;

- (void)imagePicker:(JSImagePickerViewController *)imagePicker didSelectImages:(NSArray *)images metaData:(PhotoMetadata*)metadata fromSource:(UIImagePickerControllerSourceType)source;

@optional

- (void)imagePickerDidOpen;
- (void)imagePickerWillOpen;

- (void)imagePickerWillClose;
- (void)imagePickerDidClose;

- (void)imagePickerDidCancel;

@end

@interface JSImagePickerViewController : UIViewController {
    __unsafe_unretained id<JSImagePickerViewControllerDelegate> delegate;
}

@property(nonatomic, assign) id<JSImagePickerViewControllerDelegate> delegate;

@property bool isVisible;

@property(assign, nonatomic) NSUInteger tag;

- (void)showImagePickerInController:(UIViewController *)controller;

- (void)showImagePickerInController:(UIViewController *)controller animated:(BOOL)animated;

- (void)dismiss;

- (void)dismissAnimated:(BOOL)animated;

@end

@interface TransitionDelegate : NSObject <UIViewControllerTransitioningDelegate>

@end

@interface AnimatedTransitioning : NSObject <UIViewControllerAnimatedTransitioning>

@property(nonatomic, assign) BOOL isPresenting;

@end

@interface JSPhotoCell : UICollectionViewCell

@end

