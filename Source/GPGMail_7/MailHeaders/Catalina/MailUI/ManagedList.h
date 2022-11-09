//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

//#import <objc/NSObject.h>

@class NSMutableArray, NSMutableIndexSet, NSPredicate;
@protocol ManagedListSortInfo;

@interface ManagedList : NSObject
{
    NSMutableArray *_orderedObjects;
    NSMutableIndexSet *_unfilteredIndexes;
//    CDUnknownBlockType _comparator;
    NSPredicate *_filterPredicate;
    id /*<ManagedListSortInfo>*/ _sortInfo;
}

@property(retain, nonatomic) id /*<ManagedListSortInfo>*/ sortInfo; // @synthesize sortInfo=_sortInfo;
@property(retain, nonatomic) NSPredicate *filterPredicate; // @synthesize filterPredicate=_filterPredicate;
//@property(copy, nonatomic) CDUnknownBlockType comparator; // @synthesize comparator=_comparator;
//- (void).cxx_destruct;
//- (unsigned long long)_removeObjectIfPresent:(id)arg1 fromArray:(id)arg2 inSortedRange:(struct _NSRange)arg3 usingComparator:(CDUnknownBlockType)arg4 didRemove:(char *)arg5;
//- (unsigned long long)_insertObjectIfAbsent:(id)arg1 intoArray:(id)arg2 inSortedRange:(struct _NSRange)arg3 usingComparator:(CDUnknownBlockType)arg4 didInsert:(char *)arg5;
- (unsigned long long)_removeObject:(id)arg1 inSortedRange:(struct _NSRange)arg2 didRemove:(char *)arg3;
- (id)mutableCopyOfOrderedObjects;
- (id)copyOfOrderedObjects;
- (unsigned long long)indexOfOrderedObject:(id)arg1;
//- (void)enumerateOrderedObjectsUsingBlock:(CDUnknownBlockType)arg1;
@property(readonly, nonatomic) unsigned long long orderedObjectsCount;
- (unsigned long long)_unadjustedIndexForAdjustedIndex:(unsigned long long)arg1;
- (id)orderedObjectsAtIndexes:(id)arg1;
- (void)setOrderedObject:(id)arg1 atIndex:(unsigned long long)arg2;
- (id)orderedObjectAtIndex:(unsigned long long)arg1;
- (unsigned long long)removeObject:(id)arg1;
- (id)removeObjects:(id)arg1;
- (unsigned long long)mergeObject:(id)arg1;
- (id)mergeObjects:(id)arg1;
- (void)applyFilterReturningAddedIndexes:(id *)arg1 removedIndexes:(id *)arg2;
- (void)invert;
- (void)resort;
- (id)init;

@end

