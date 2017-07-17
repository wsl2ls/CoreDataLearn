//
//  Student+CoreDataProperties.m
//  CoreDataLearn
//
//  Created by 王双龙 on 2017/7/6.
//  Copyright © 2017年 王双龙. All rights reserved.
//

#import "Student+CoreDataProperties.h"

@implementation Student (CoreDataProperties)

+ (NSFetchRequest<Student *> *)fetchRequest {
	return [[NSFetchRequest alloc] initWithEntityName:@"Student"];
}

@dynamic name;
@dynamic sex;
@dynamic age;
@dynamic height;
@dynamic number;

@end
