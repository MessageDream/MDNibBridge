// MDNibBridge.h
// Version 2.1
//
// Copyright (c) 2015 MessageDream ( http://github.com/MessageDream )
//
// Permission is hereby granted, free of charge, to any person obtaining a copy
// of this software and associated documentation files (the "Software"), to deal
// in the Software without restriction, including without limitation the rights
// to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
// copies of the Software, and to permit persons to whom the Software is
// furnished to do so, subject to the following conditions:
//
// The above copyright notice and this permission notice shall be included in
// all copies or substantial portions of the Software.
//
// THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
// IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
// FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
// AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
// LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
// OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
// THE SOFTWARE.

@import UIKit;

@interface NSObject (MDNibConvention)

/// For convinent, using class name for identifier in IB.
/// etc. cell reuse id, storyboard id
+ (NSString *)md_nibID;

/// UINib object with same name from main bundle
+ (UINib *)md_nib;

@end

@interface UIView (MDNibConvention)

/// Specific "class name" as xib file name, in main bundle, with nil owner
///
/// Required:
///   FooView.h, FooView.m, FooView.xib
/// Usage:
///   FooView *view = [FooView md_instantiateFromNib];
///
+ (id)md_instantiateFromNib;

/// Specific "class name" as xib file name
/// See above
+ (id)md_instantiateFromNibInBundle:(NSBundle *)bundle owner:(id)owner;

@end

@interface UIViewController (MDNibConvention)

/// Specific "class name" as view controller's "storyboard identifier"
+ (id)md_instantiateFromStoryboardNamed:(NSString *)name;

@end

@interface NSObject (MDNibConventionDeprecated)

/// Load object of this class from IB file with SAME name
+ (id)md_loadFromNib
__attribute__((deprecated("Use + md_instantiateFromNib instead")));
+ (id)md_loadFromNibWithOwner:(id)owner
__attribute__((deprecated("Use + md_instantiateFromNibInBundle:owner: instead")));

/// Load UIViewController of this class from given storyboard name
+ (id/*UIViewController*/)md_loadFromStoryboardNamed:(NSString *)name
__attribute__((deprecated("Use + md_instantiateFromStoryboardNamed: instead")));

@end
