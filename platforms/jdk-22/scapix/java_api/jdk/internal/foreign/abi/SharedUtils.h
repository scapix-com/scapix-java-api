// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_JDK_INTERNAL_FOREIGN_ABI_SHAREDUTILS_FWD
#define SCAPIX_JAVA_API_JDK_INTERNAL_FOREIGN_ABI_SHAREDUTILS_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::jdk::internal::foreign::abi { class SharedUtils; }

template<>
struct scapix::jni::object_traits<scapix::java_api::jdk::internal::foreign::abi::SharedUtils>
{
	static constexpr fixed_string class_name = "jdk/internal/foreign/abi/SharedUtils";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JDK_INTERNAL_FOREIGN_ABI_SHAREDUTILS_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JDK_INTERNAL_FOREIGN_ABI_SHAREDUTILS)
#define SCAPIX_JAVA_API_JDK_INTERNAL_FOREIGN_ABI_SHAREDUTILS

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/Class.h>
#include <scapix/java_api/java/lang/Throwable.h>
#include <scapix/java_api/java/lang/foreign/AddressLayout.h>
#include <scapix/java_api/java/lang/foreign/Arena.h>
#include <scapix/java_api/java/lang/foreign/FunctionDescriptor.h>
#include <scapix/java_api/java/lang/foreign/Linker.h>
#include <scapix/java_api/java/lang/foreign/MemorySegment.h>
#include <scapix/java_api/java/lang/foreign/SegmentAllocator.h>
#include <scapix/java_api/java/lang/foreign/ValueLayout.h>
#include <scapix/java_api/java/lang/invoke/MethodHandle.h>
#include <scapix/java_api/java/lang/invoke/MethodType.h>
#include <scapix/java_api/java/util/Map.h>
#include <scapix/java_api/jdk/internal/foreign/abi/ABIDescriptor.h>
#include <scapix/java_api/jdk/internal/foreign/abi/AbstractLinker_UpcallStubFactory.h>
#include <scapix/java_api/jdk/internal/foreign/abi/CallingSequence.h>
#include <scapix/java_api/jdk/internal/foreign/abi/LinkerOptions.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class jdk::internal::foreign::abi::SharedUtils : public jni::object_base<"jdk/internal/foreign/abi/SharedUtils",
	java::lang::Object>
{
public:

	static jni::ref<java::lang::invoke::MethodHandle> MH_CHECK_SYMBOL() { return get_static_field<"MH_CHECK_SYMBOL", jni::ref<java::lang::invoke::MethodHandle>>(); }
	static jni::ref<java::lang::foreign::AddressLayout> C_POINTER() { return get_static_field<"C_POINTER", jni::ref<java::lang::foreign::AddressLayout>>(); }
	static jni::ref<java::lang::foreign::Arena> DUMMY_ARENA() { return get_static_field<"DUMMY_ARENA", jni::ref<java::lang::foreign::Arena>>(); }
	static jni::ref<java::lang::foreign::SegmentAllocator> THROWING_ALLOCATOR() { return get_static_field<"THROWING_ALLOCATOR", jni::ref<java::lang::foreign::SegmentAllocator>>(); }

	static jlong alignUp(jlong addr, jlong p2) { return call_static_method<"alignUp", jlong>(addr, p2); }
	static jlong remainsToAlignment(jlong addr, jlong p2) { return call_static_method<"remainsToAlignment", jlong>(addr, p2); }
	static jni::ref<java::lang::invoke::MethodHandle> adaptDowncallForIMR(jni::ref<java::lang::invoke::MethodHandle> handle, jni::ref<java::lang::foreign::FunctionDescriptor> cDesc, jni::ref<jdk::internal::foreign::abi::CallingSequence> sequence) { return call_static_method<"adaptDowncallForIMR", jni::ref<java::lang::invoke::MethodHandle>>(handle, cDesc, sequence); }
	static jni::ref<jdk::internal::foreign::abi::AbstractLinker_UpcallStubFactory> arrangeUpcallHelper(jni::ref<java::lang::invoke::MethodType> targetType, jboolean isInMemoryReturn, jboolean dropReturn, jni::ref<jdk::internal::foreign::abi::ABIDescriptor> abi, jni::ref<jdk::internal::foreign::abi::CallingSequence> callingSequence) { return call_static_method<"arrangeUpcallHelper", jni::ref<jdk::internal::foreign::abi::AbstractLinker_UpcallStubFactory>>(targetType, isInMemoryReturn, dropReturn, abi, callingSequence); }
	static jni::ref<java::lang::Class> primitiveCarrierForSize(jlong size, jboolean p2) { return call_static_method<"primitiveCarrierForSize", jni::ref<java::lang::Class>>(size, p2); }
	static jni::ref<java::lang::foreign::ValueLayout> primitiveLayoutForSize(jlong size, jboolean p2) { return call_static_method<"primitiveLayoutForSize", jni::ref<java::lang::foreign::ValueLayout>>(size, p2); }
	static jni::ref<java::lang::foreign::Linker> getSystemLinker() { return call_static_method<"getSystemLinker", jni::ref<java::lang::foreign::Linker>>(); }
	static jni::ref<java::lang::invoke::MethodHandle> swapArguments(jni::ref<java::lang::invoke::MethodHandle> mh, jint firstArg, jint secondArg) { return call_static_method<"swapArguments", jni::ref<java::lang::invoke::MethodHandle>>(mh, firstArg, secondArg); }
	static void handleUncaughtException(jni::ref<java::lang::Throwable> t) { return call_static_method<"handleUncaughtException", void>(t); }
	static void checkNative(jni::ref<java::lang::foreign::MemorySegment> segment) { return call_static_method<"checkNative", void>(segment); }
	static jlong unboxSegment(jni::ref<java::lang::foreign::MemorySegment> segment) { return call_static_method<"unboxSegment", jlong>(segment); }
	static void checkExceptions(jni::ref<java::lang::invoke::MethodHandle> target) { return call_static_method<"checkExceptions", void>(target); }
	static jni::ref<java::lang::invoke::MethodHandle> maybeInsertAllocator(jni::ref<java::lang::foreign::FunctionDescriptor> descriptor, jni::ref<java::lang::invoke::MethodHandle> handle) { return call_static_method<"maybeInsertAllocator", jni::ref<java::lang::invoke::MethodHandle>>(descriptor, handle); }
	static jni::ref<java::lang::invoke::MethodHandle> maybeCheckCaptureSegment(jni::ref<java::lang::invoke::MethodHandle> handle, jni::ref<jdk::internal::foreign::abi::LinkerOptions> options) { return call_static_method<"maybeCheckCaptureSegment", jni::ref<java::lang::invoke::MethodHandle>>(handle, options); }
	static jni::ref<java::lang::foreign::MemorySegment> checkCaptureSegment(jni::ref<java::lang::foreign::MemorySegment> captureSegment) { return call_static_method<"checkCaptureSegment", jni::ref<java::lang::foreign::MemorySegment>>(captureSegment); }
	static void checkSymbol(jni::ref<java::lang::foreign::MemorySegment> symbol) { return call_static_method<"checkSymbol", void>(symbol); }
	static jboolean isPowerOfTwo(jint width) { return call_static_method<"isPowerOfTwo", jboolean>(width); }
	static jni::ref<java::lang::foreign::Arena> newBoundedArena(jlong size) { return call_static_method<"newBoundedArena", jni::ref<java::lang::foreign::Arena>>(size); }
	static jni::ref<java::lang::foreign::Arena> newEmptyArena() { return call_static_method<"newEmptyArena", jni::ref<java::lang::foreign::Arena>>(); }
	static jni::ref<java::util::Map> canonicalLayouts(jni::ref<java::lang::foreign::ValueLayout> longLayout, jni::ref<java::lang::foreign::ValueLayout> sizetLayout, jni::ref<java::lang::foreign::ValueLayout> wchartLayout) { return call_static_method<"canonicalLayouts", jni::ref<java::util::Map>>(longLayout, sizetLayout, wchartLayout); }

protected:

	SharedUtils(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JDK_INTERNAL_FOREIGN_ABI_SHAREDUTILS
