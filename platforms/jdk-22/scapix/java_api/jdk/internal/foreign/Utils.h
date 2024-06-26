// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_JDK_INTERNAL_FOREIGN_UTILS_FWD
#define SCAPIX_JAVA_API_JDK_INTERNAL_FOREIGN_UTILS_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::jdk::internal::foreign { class Utils; }

template<>
struct scapix::jni::object_traits<scapix::java_api::jdk::internal::foreign::Utils>
{
	static constexpr fixed_string class_name = "jdk/internal/foreign/Utils";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JDK_INTERNAL_FOREIGN_UTILS_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JDK_INTERNAL_FOREIGN_UTILS)
#define SCAPIX_JAVA_API_JDK_INTERNAL_FOREIGN_UTILS

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/Class.h>
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/lang/foreign/AddressLayout.h>
#include <scapix/java_api/java/lang/foreign/MemoryLayout.h>
#include <scapix/java_api/java/lang/foreign/MemorySegment.h>
#include <scapix/java_api/java/lang/foreign/StructLayout.h>
#include <scapix/java_api/java/lang/foreign/ValueLayout.h>
#include <scapix/java_api/java/lang/invoke/VarHandle.h>
#include <scapix/java_api/java/util/function/Supplier.h>
#include <scapix/java_api/jdk/internal/foreign/MemorySessionImpl.h>
#include <scapix/java_api/jdk/internal/foreign/Utils_BaseAndScale.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class jdk::internal::foreign::Utils : public jni::object_base<"jdk/internal/foreign/Utils",
	java::lang::Object>
{
public:

	using BaseAndScale = Utils_BaseAndScale;

	static jboolean IS_WINDOWS() { return get_static_field<"IS_WINDOWS", jboolean>(); }

	static jlong alignUp(jlong n, jlong p2) { return call_static_method<"alignUp", jlong>(n, p2); }
	static jni::ref<java::lang::foreign::MemorySegment> alignUp(jni::ref<java::lang::foreign::MemorySegment> ms, jlong alignment) { return call_static_method<"alignUp", jni::ref<java::lang::foreign::MemorySegment>>(ms, alignment); }
	static jni::ref<java::lang::invoke::VarHandle> makeSegmentViewVarHandle(jni::ref<java::lang::foreign::ValueLayout> layout) { return call_static_method<"makeSegmentViewVarHandle", jni::ref<java::lang::invoke::VarHandle>>(layout); }
	static jboolean byteToBoolean(jbyte b) { return call_static_method<"byteToBoolean", jboolean>(b); }
	static jni::ref<java::lang::foreign::MemorySegment> longToAddress(jlong addr, jlong p2, jlong size) { return call_static_method<"longToAddress", jni::ref<java::lang::foreign::MemorySegment>>(addr, p2, size); }
	static jni::ref<java::lang::foreign::MemorySegment> longToAddress(jlong addr, jlong p2, jlong size, jni::ref<jdk::internal::foreign::MemorySessionImpl> p4) { return call_static_method<"longToAddress", jni::ref<java::lang::foreign::MemorySegment>>(addr, p2, size, p4); }
	static jboolean isAligned(jlong offset, jlong p2) { return call_static_method<"isAligned", jboolean>(offset, p2); }
	static jboolean isElementAligned(jni::ref<java::lang::foreign::ValueLayout> layout) { return call_static_method<"isElementAligned", jboolean>(layout); }
	static void checkElementAlignment(jni::ref<java::lang::foreign::ValueLayout> layout, jni::ref<java::lang::String> msg) { return call_static_method<"checkElementAlignment", void>(layout, msg); }
	static void checkElementAlignment(jni::ref<java::lang::foreign::MemoryLayout> layout, jni::ref<java::lang::String> msg) { return call_static_method<"checkElementAlignment", void>(layout, msg); }
	static jlong pointeeByteSize(jni::ref<java::lang::foreign::AddressLayout> addressLayout) { return call_static_method<"pointeeByteSize", jlong>(addressLayout); }
	static jlong pointeeByteAlign(jni::ref<java::lang::foreign::AddressLayout> addressLayout) { return call_static_method<"pointeeByteAlign", jlong>(addressLayout); }
	static void checkAllocationSizeAndAlign(jlong byteSize, jlong p2) { return call_static_method<"checkAllocationSizeAndAlign", void>(byteSize, p2); }
	static void checkAlign(jlong byteAlignment) { return call_static_method<"checkAlign", void>(byteAlignment); }
	static void checkNonNegativeArgument(jlong value, jni::ref<java::lang::String> p2) { return call_static_method<"checkNonNegativeArgument", void>(value, p2); }
	static void checkNonNegativeIndex(jlong value, jni::ref<java::lang::String> p2) { return call_static_method<"checkNonNegativeIndex", void>(value, p2); }
	static jni::ref<java::lang::foreign::StructLayout> computePaddedStructLayout(jni::ref<jni::array<java::lang::foreign::MemoryLayout>> elements) { return call_static_method<"computePaddedStructLayout", jni::ref<java::lang::foreign::StructLayout>>(elements); }
	static jint byteWidthOfPrimitive(jni::ref<java::lang::Class> primitive) { return call_static_method<"byteWidthOfPrimitive", jint>(primitive); }
	static jboolean isPowerOfTwo(jlong value) { return call_static_method<"isPowerOfTwo", jboolean>(value); }
	static jni::ref<java::lang::foreign::MemoryLayout> wrapOverflow(jni::ref<java::util::function::Supplier> layoutSupplier) { return call_static_method<"wrapOverflow", jni::ref<java::lang::foreign::MemoryLayout>>(layoutSupplier); }
	static jboolean containsNullChars(jni::ref<java::lang::String> s) { return call_static_method<"containsNullChars", jboolean>(s); }
	static jni::ref<java::lang::String> toHexString(jlong value) { return call_static_method<"toHexString", jni::ref<java::lang::String>>(value); }

protected:

	Utils(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JDK_INTERNAL_FOREIGN_UTILS
