// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_JDK_INTERNAL_FOREIGN_ABI_BINDING_FWD
#define SCAPIX_JAVA_API_JDK_INTERNAL_FOREIGN_ABI_BINDING_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::jdk::internal::foreign::abi { class Binding; }

template<>
struct scapix::jni::object_traits<scapix::java_api::jdk::internal::foreign::abi::Binding>
{
	static constexpr fixed_string class_name = "jdk/internal/foreign/abi/Binding";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JDK_INTERNAL_FOREIGN_ABI_BINDING_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JDK_INTERNAL_FOREIGN_ABI_BINDING)
#define SCAPIX_JAVA_API_JDK_INTERNAL_FOREIGN_ABI_BINDING

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/Class.h>
#include <scapix/java_api/java/lang/foreign/MemoryLayout.h>
#include <scapix/java_api/java/lang/foreign/SegmentAllocator.h>
#include <scapix/java_api/java/util/Deque.h>
#include <scapix/java_api/jdk/internal/foreign/abi/Binding_Allocate.h>
#include <scapix/java_api/jdk/internal/foreign/abi/Binding_BoxAddress.h>
#include <scapix/java_api/jdk/internal/foreign/abi/Binding_BufferLoad.h>
#include <scapix/java_api/jdk/internal/foreign/abi/Binding_BufferStore.h>
#include <scapix/java_api/jdk/internal/foreign/abi/Binding_Builder.h>
#include <scapix/java_api/jdk/internal/foreign/abi/Binding_Copy.h>
#include <scapix/java_api/jdk/internal/foreign/abi/Binding_Dup.h>
#include <scapix/java_api/jdk/internal/foreign/abi/Binding_SegmentBase.h>
#include <scapix/java_api/jdk/internal/foreign/abi/Binding_SegmentOffset.h>
#include <scapix/java_api/jdk/internal/foreign/abi/Binding_ShiftLeft.h>
#include <scapix/java_api/jdk/internal/foreign/abi/Binding_ShiftRight.h>
#include <scapix/java_api/jdk/internal/foreign/abi/Binding_VMLoad.h>
#include <scapix/java_api/jdk/internal/foreign/abi/Binding_VMStore.h>
#include <scapix/java_api/jdk/internal/foreign/abi/BindingInterpreter_LoadFunc.h>
#include <scapix/java_api/jdk/internal/foreign/abi/BindingInterpreter_StoreFunc.h>
#include <scapix/java_api/jdk/internal/foreign/abi/VMStorage.h>
#include <scapix/java_api/jdk/internal/foreign/abi/Binding_Cast.h>
#include <scapix/java_api/jdk/internal/foreign/abi/Binding_Dereference.h>
#include <scapix/java_api/jdk/internal/foreign/abi/Binding_Move.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class jdk::internal::foreign::abi::Binding : public jni::object_base<"jdk/internal/foreign/abi/Binding",
	java::lang::Object>
{
public:

	using VMStore = Binding_VMStore;
	using VMLoad = Binding_VMLoad;
	using BufferStore = Binding_BufferStore;
	using BufferLoad = Binding_BufferLoad;
	using Copy = Binding_Copy;
	using Allocate = Binding_Allocate;
	using BoxAddress = Binding_BoxAddress;
	using SegmentOffset = Binding_SegmentOffset;
	using SegmentBase = Binding_SegmentBase;
	using Dup = Binding_Dup;
	using ShiftLeft = Binding_ShiftLeft;
	using ShiftRight = Binding_ShiftRight;
	using Cast = Binding_Cast;
	using Builder = Binding_Builder;
	using Dereference = Binding_Dereference;
	using Move = Binding_Move;

	void verify(jni::ref<java::util::Deque> p1) { return call_method<"verify", void>(p1); }
	void interpret(jni::ref<java::util::Deque> p1, jni::ref<jdk::internal::foreign::abi::BindingInterpreter_StoreFunc> p2, jni::ref<jdk::internal::foreign::abi::BindingInterpreter_LoadFunc> p3, jni::ref<java::lang::foreign::SegmentAllocator> p4) { return call_method<"interpret", void>(p1, p2, p3, p4); }
	static jni::ref<jdk::internal::foreign::abi::Binding_VMStore> vmStore(jni::ref<jdk::internal::foreign::abi::VMStorage> storage, jni::ref<java::lang::Class> type) { return call_static_method<"vmStore", jni::ref<jdk::internal::foreign::abi::Binding_VMStore>>(storage, type); }
	static jni::ref<jdk::internal::foreign::abi::Binding_VMLoad> vmLoad(jni::ref<jdk::internal::foreign::abi::VMStorage> storage, jni::ref<java::lang::Class> type) { return call_static_method<"vmLoad", jni::ref<jdk::internal::foreign::abi::Binding_VMLoad>>(storage, type); }
	static jni::ref<jdk::internal::foreign::abi::Binding_BufferStore> bufferStore(jlong offset, jni::ref<java::lang::Class> p2) { return call_static_method<"bufferStore", jni::ref<jdk::internal::foreign::abi::Binding_BufferStore>>(offset, p2); }
	static jni::ref<jdk::internal::foreign::abi::Binding_BufferStore> bufferStore(jlong offset, jni::ref<java::lang::Class> p2, jint type) { return call_static_method<"bufferStore", jni::ref<jdk::internal::foreign::abi::Binding_BufferStore>>(offset, p2, type); }
	static jni::ref<jdk::internal::foreign::abi::Binding_BufferLoad> bufferLoad(jlong offset, jni::ref<java::lang::Class> p2) { return call_static_method<"bufferLoad", jni::ref<jdk::internal::foreign::abi::Binding_BufferLoad>>(offset, p2); }
	static jni::ref<jdk::internal::foreign::abi::Binding_BufferLoad> bufferLoad(jlong offset, jni::ref<java::lang::Class> p2, jint type) { return call_static_method<"bufferLoad", jni::ref<jdk::internal::foreign::abi::Binding_BufferLoad>>(offset, p2, type); }
	static jni::ref<jdk::internal::foreign::abi::Binding_Copy> copy(jni::ref<java::lang::foreign::MemoryLayout> layout) { return call_static_method<"copy", jni::ref<jdk::internal::foreign::abi::Binding_Copy>>(layout); }
	static jni::ref<jdk::internal::foreign::abi::Binding_Allocate> allocate(jni::ref<java::lang::foreign::MemoryLayout> layout) { return call_static_method<"allocate", jni::ref<jdk::internal::foreign::abi::Binding_Allocate>>(layout); }
	static jni::ref<jdk::internal::foreign::abi::Binding_BoxAddress> boxAddressRaw(jlong size, jlong p2) { return call_static_method<"boxAddressRaw", jni::ref<jdk::internal::foreign::abi::Binding_BoxAddress>>(size, p2); }
	static jni::ref<jdk::internal::foreign::abi::Binding_BoxAddress> boxAddress(jni::ref<java::lang::foreign::MemoryLayout> layout) { return call_static_method<"boxAddress", jni::ref<jdk::internal::foreign::abi::Binding_BoxAddress>>(layout); }
	static jni::ref<jdk::internal::foreign::abi::Binding_BoxAddress> boxAddress(jlong byteSize) { return call_static_method<"boxAddress", jni::ref<jdk::internal::foreign::abi::Binding_BoxAddress>>(byteSize); }
	static jni::ref<jdk::internal::foreign::abi::Binding_SegmentOffset> unboxAddress() { return call_static_method<"unboxAddress", jni::ref<jdk::internal::foreign::abi::Binding_SegmentOffset>>(); }
	static jni::ref<jdk::internal::foreign::abi::Binding_SegmentBase> segmentBase() { return call_static_method<"segmentBase", jni::ref<jdk::internal::foreign::abi::Binding_SegmentBase>>(); }
	static jni::ref<jdk::internal::foreign::abi::Binding_SegmentOffset> segmentOffsetAllowHeap() { return call_static_method<"segmentOffsetAllowHeap", jni::ref<jdk::internal::foreign::abi::Binding_SegmentOffset>>(); }
	static jni::ref<jdk::internal::foreign::abi::Binding_SegmentOffset> segmentOffsetNoAllowHeap() { return call_static_method<"segmentOffsetNoAllowHeap", jni::ref<jdk::internal::foreign::abi::Binding_SegmentOffset>>(); }
	static jni::ref<jdk::internal::foreign::abi::Binding_Dup> dup() { return call_static_method<"dup", jni::ref<jdk::internal::foreign::abi::Binding_Dup>>(); }
	static jni::ref<jdk::internal::foreign::abi::Binding_ShiftLeft> shiftLeft(jint shiftAmount) { return call_static_method<"shiftLeft", jni::ref<jdk::internal::foreign::abi::Binding_ShiftLeft>>(shiftAmount); }
	static jni::ref<jdk::internal::foreign::abi::Binding_ShiftRight> shiftRight(jint shiftAmount) { return call_static_method<"shiftRight", jni::ref<jdk::internal::foreign::abi::Binding_ShiftRight>>(shiftAmount); }
	static jni::ref<jdk::internal::foreign::abi::Binding> cast(jni::ref<java::lang::Class> fromType, jni::ref<java::lang::Class> toType) { return call_static_method<"cast", jni::ref<jdk::internal::foreign::abi::Binding>>(fromType, toType); }
	static jni::ref<jdk::internal::foreign::abi::Binding_Builder> builder() { return call_static_method<"builder", jni::ref<jdk::internal::foreign::abi::Binding_Builder>>(); }

protected:

	Binding(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JDK_INTERNAL_FOREIGN_ABI_BINDING