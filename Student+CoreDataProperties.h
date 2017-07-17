//
//  Student+CoreDataProperties.h
//  CoreDataLearn
//
//  Created by 王双龙 on 2017/7/6.
//  Copyright © 2017年 王双龙. All rights reserved.
//

#import "Student+CoreDataClass.h"


NS_ASSUME_NONNULL_BEGIN

@interface Student (CoreDataProperties)

+ (NSFetchRequest<Student *> *)fetchRequest;

@property (nullable, nonatomic, copy) NSString *name;
@property (nullable, nonatomic, copy) NSString *sex;
@property (nonatomic) int16_t age;
@property (nonatomic) int16_t height;
@property (nonatomic) int16_t number;

@end

NS_ASSUME_NONNULL_END
