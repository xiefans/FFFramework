//
//  FansFormView.h
//  FansFormFramework
//
//  Created by fans on 2019/7/22.
//  Copyright © 2019 glority-fans. All rights reserved.
//

#import "FansFormProtocol.h"

NS_ASSUME_NONNULL_BEGIN

@interface FansFormView : UIView<FansFormContainerInterface>

+ (instancetype)formView;

- (instancetype)initWithManager:(id<FansFormManagerInterface>)manager;

@end

NS_ASSUME_NONNULL_END
