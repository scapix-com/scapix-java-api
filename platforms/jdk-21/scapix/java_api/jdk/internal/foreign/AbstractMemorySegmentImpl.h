// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/lang/foreign/MemorySegment.h>
#include <scapix/java_api/java/lang/foreign/SegmentAllocator.h>
#include <scapix/java_api/java/util/function/BiFunction.h>

#ifndef SCAPIX_JAVA_API_JDK_INTERNAL_FOREIGN_ABSTRACTMEMORYSEGMENTIMPL_FWD
#define SCAPIX_JAVA_API_JDK_INTERNAL_FOREIGN_ABSTRACTMEMORYSEGMENTIMPL_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::jdk::internal::foreign { class AbstractMemorySegmentImpl; }

template<>
struct scapix::jni::object_traits<scapix::java_api::jdk::internal::foreign::AbstractMemorySegmentImpl>
{
	static constexpr fixed_string class_name = "jdk/internal/foreign/AbstractMemorySegmentImpl";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::java::lang::foreign::MemorySegment, scapix::java_api::java::lang::foreign::SegmentAllocator, scapix::java_api::java::util::function::BiFunction>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JDK_INTERNAL_FOREIGN_ABSTRACTMEMORYSEGMENTIMPL_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JDK_INTERNAL_FOREIGN_ABSTRACTMEMORYSEGMENTIMPL)
#define SCAPIX_JAVA_API_JDK_INTERNAL_FOREIGN_ABSTRACTMEMORYSEGMENTIMPL

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/Class.h>
#include <scapix/java_api/java/lang/RuntimeException.h>
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/lang/Thread.h>
#include <scapix/java_api/java/lang/foreign/Arena.h>
#include <scapix/java_api/java/lang/foreign/MemoryLayout.h>
#include <scapix/java_api/java/lang/foreign/MemorySegment_Scope.h>
#include <scapix/java_api/java/lang/foreign/ValueLayout.h>
#include <scapix/java_api/java/lang/foreign/ValueLayout_OfByte.h>
#include <scapix/java_api/java/lang/foreign/ValueLayout_OfChar.h>
#include <scapix/java_api/java/lang/foreign/ValueLayout_OfDouble.h>
#include <scapix/java_api/java/lang/foreign/ValueLayout_OfFloat.h>
#include <scapix/java_api/java/lang/foreign/ValueLayout_OfInt.h>
#include <scapix/java_api/java/lang/foreign/ValueLayout_OfLong.h>
#include <scapix/java_api/java/lang/foreign/ValueLayout_OfShort.h>
#include <scapix/java_api/java/nio/Buffer.h>
#include <scapix/java_api/java/nio/ByteBuffer.h>
#include <scapix/java_api/java/util/List.h>
#include <scapix/java_api/java/util/Optional.h>
#include <scapix/java_api/java/util/Spliterator.h>
#include <scapix/java_api/java/util/function/Consumer.h>
#include <scapix/java_api/java/util/stream/Stream.h>
#include <scapix/java_api/jdk/internal/foreign/MemorySessionImpl.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class jdk::internal::foreign::AbstractMemorySegmentImpl : public jni::object_base<"jdk/internal/foreign/AbstractMemorySegmentImpl",
	java::lang::Object,
	java::lang::foreign::MemorySegment,
	java::lang::foreign::SegmentAllocator,
	java::util::function::BiFunction>
{
public:

	jni::ref<jdk::internal::foreign::AbstractMemorySegmentImpl> asReadOnly() { return call_method<"asReadOnly", jni::ref<jdk::internal::foreign::AbstractMemorySegmentImpl>>(); }
	jboolean isReadOnly() { return call_method<"isReadOnly", jboolean>(); }
	jni::ref<jdk::internal::foreign::AbstractMemorySegmentImpl> asSlice(jlong offset, jlong p2) { return call_method<"asSlice", jni::ref<jdk::internal::foreign::AbstractMemorySegmentImpl>>(offset, p2); }
	jni::ref<jdk::internal::foreign::AbstractMemorySegmentImpl> asSlice(jlong offset) { return call_method<"asSlice", jni::ref<jdk::internal::foreign::AbstractMemorySegmentImpl>>(offset); }
	jni::ref<java::lang::foreign::MemorySegment> asSlice(jlong offset, jlong p2, jlong newSize) { return call_method<"asSlice", jni::ref<java::lang::foreign::MemorySegment>>(offset, p2, newSize); }
	jni::ref<java::lang::foreign::MemorySegment> reinterpret(jlong newSize, jni::ref<java::lang::foreign::Arena> p2, jni::ref<java::util::function::Consumer> arena) { return call_method<"reinterpret", jni::ref<java::lang::foreign::MemorySegment>>(newSize, p2, arena); }
	jni::ref<java::lang::foreign::MemorySegment> reinterpret(jlong newSize) { return call_method<"reinterpret", jni::ref<java::lang::foreign::MemorySegment>>(newSize); }
	jni::ref<java::lang::foreign::MemorySegment> reinterpret(jni::ref<java::lang::foreign::Arena> arena, jni::ref<java::util::function::Consumer> cleanup) { return call_method<"reinterpret", jni::ref<java::lang::foreign::MemorySegment>>(arena, cleanup); }
	jni::ref<java::lang::foreign::MemorySegment> reinterpretInternal(jni::ref<java::lang::Class> callerClass, jlong newSize, jni::ref<java::lang::foreign::MemorySegment_Scope> p3, jni::ref<java::util::function::Consumer> scope) { return call_method<"reinterpretInternal", jni::ref<java::lang::foreign::MemorySegment>>(callerClass, newSize, p3, scope); }
	jni::ref<java::util::Spliterator> spliterator(jni::ref<java::lang::foreign::MemoryLayout> elementLayout) { return call_method<"spliterator", jni::ref<java::util::Spliterator>>(elementLayout); }
	jni::ref<java::util::stream::Stream> elements(jni::ref<java::lang::foreign::MemoryLayout> elementLayout) { return call_method<"elements", jni::ref<java::util::stream::Stream>>(elementLayout); }
	jni::ref<java::lang::foreign::MemorySegment> fill(jbyte value) { return call_method<"fill", jni::ref<java::lang::foreign::MemorySegment>>(value); }
	jni::ref<java::lang::foreign::MemorySegment> allocate(jlong byteSize, jlong p2) { return call_method<"allocate", jni::ref<java::lang::foreign::MemorySegment>>(byteSize, p2); }
	static jlong vectorizedMismatchLargeForBytes(jni::ref<jdk::internal::foreign::MemorySessionImpl> aSession, jni::ref<jdk::internal::foreign::MemorySessionImpl> bSession, jni::ref<java::lang::Object> a, jlong aOffset, jni::ref<java::lang::Object> p5, jlong b, jlong bOffset) { return call_static_method<"vectorizedMismatchLargeForBytes", jlong>(aSession, bSession, a, aOffset, p5, b, bOffset); }
	jni::ref<java::nio::ByteBuffer> asByteBuffer() { return call_method<"asByteBuffer", jni::ref<java::nio::ByteBuffer>>(); }
	jlong byteSize() { return call_method<"byteSize", jlong>(); }
	jboolean isMapped() { return call_method<"isMapped", jboolean>(); }
	jboolean isNative() { return call_method<"isNative", jboolean>(); }
	jni::ref<java::util::Optional> asOverlappingSlice(jni::ref<java::lang::foreign::MemorySegment> other) { return call_method<"asOverlappingSlice", jni::ref<java::util::Optional>>(other); }
	jlong segmentOffset(jni::ref<java::lang::foreign::MemorySegment> other) { return call_method<"segmentOffset", jlong>(other); }
	void load() { return call_method<"load", void>(); }
	void unload() { return call_method<"unload", void>(); }
	jboolean isLoaded() { return call_method<"isLoaded", jboolean>(); }
	void force() { return call_method<"force", void>(); }
	jni::ref<jni::array<jbyte>> toArray(jni::ref<java::lang::foreign::ValueLayout_OfByte> elementLayout) { return call_method<"toArray", jni::ref<jni::array<jbyte>>>(elementLayout); }
	jni::ref<jni::array<jshort>> toArray(jni::ref<java::lang::foreign::ValueLayout_OfShort> elementLayout) { return call_method<"toArray", jni::ref<jni::array<jshort>>>(elementLayout); }
	jni::ref<jni::array<jchar>> toArray(jni::ref<java::lang::foreign::ValueLayout_OfChar> elementLayout) { return call_method<"toArray", jni::ref<jni::array<jchar>>>(elementLayout); }
	jni::ref<jni::array<jint>> toArray(jni::ref<java::lang::foreign::ValueLayout_OfInt> elementLayout) { return call_method<"toArray", jni::ref<jni::array<jint>>>(elementLayout); }
	jni::ref<jni::array<jfloat>> toArray(jni::ref<java::lang::foreign::ValueLayout_OfFloat> elementLayout) { return call_method<"toArray", jni::ref<jni::array<jfloat>>>(elementLayout); }
	jni::ref<jni::array<jlong>> toArray(jni::ref<java::lang::foreign::ValueLayout_OfLong> elementLayout) { return call_method<"toArray", jni::ref<jni::array<jlong>>>(elementLayout); }
	jni::ref<jni::array<jdouble>> toArray(jni::ref<java::lang::foreign::ValueLayout_OfDouble> elementLayout) { return call_method<"toArray", jni::ref<jni::array<jdouble>>>(elementLayout); }
	void checkAccess(jlong offset, jlong p2, jboolean length) { return call_method<"checkAccess", void>(offset, p2, length); }
	void checkValidState() { return call_method<"checkValidState", void>(); }
	jlong unsafeGetOffset() { return call_method<"unsafeGetOffset", jlong>(); }
	jni::ref<java::lang::Object> unsafeGetBase() { return call_method<"unsafeGetBase", jni::ref<java::lang::Object>>(); }
	jlong maxAlignMask() { return call_method<"maxAlignMask", jlong>(); }
	jboolean isAlignedForElement(jlong offset, jni::ref<java::lang::foreign::MemoryLayout> p2) { return call_method<"isAlignedForElement", jboolean>(offset, p2); }
	jboolean isAlignedForElement(jlong offset, jlong p2) { return call_method<"isAlignedForElement", jboolean>(offset, p2); }
	jni::ref<java::lang::RuntimeException> apply(jni::ref<java::lang::String> s, jni::ref<java::util::List> numbers) { return call_method<"apply", jni::ref<java::lang::RuntimeException>>(s, numbers); }
	jni::ref<java::lang::foreign::MemorySegment_Scope> scope() { return call_method<"scope", jni::ref<java::lang::foreign::MemorySegment_Scope>>(); }
	jboolean isAccessibleBy(jni::ref<java::lang::Thread> thread) { return call_method<"isAccessibleBy", jboolean>(thread); }
	jni::ref<jdk::internal::foreign::MemorySessionImpl> sessionImpl() { return call_method<"sessionImpl", jni::ref<jdk::internal::foreign::MemorySessionImpl>>(); }
	jni::ref<java::lang::String> toString() { return call_method<"toString", jni::ref<java::lang::String>>(); }
	jboolean equals(jni::ref<java::lang::Object> o) { return call_method<"equals", jboolean>(o); }
	jint hashCode() { return call_method<"hashCode", jint>(); }
	static jni::ref<jdk::internal::foreign::AbstractMemorySegmentImpl> ofBuffer(jni::ref<java::nio::Buffer> bb) { return call_static_method<"ofBuffer", jni::ref<jdk::internal::foreign::AbstractMemorySegmentImpl>>(bb); }
	static void copy(jni::ref<java::lang::foreign::MemorySegment> srcSegment, jni::ref<java::lang::foreign::ValueLayout> srcElementLayout, jlong srcOffset, jni::ref<java::lang::foreign::MemorySegment> p4, jni::ref<java::lang::foreign::ValueLayout> dstSegment, jlong dstElementLayout, jlong dstOffset) { return call_static_method<"copy", void>(srcSegment, srcElementLayout, srcOffset, p4, dstSegment, dstElementLayout, dstOffset); }
	static void copy(jni::ref<java::lang::foreign::MemorySegment> srcSegment, jni::ref<java::lang::foreign::ValueLayout> srcLayout, jlong srcOffset, jni::ref<java::lang::Object> p4, jint dstArray, jint dstIndex) { return call_static_method<"copy", void>(srcSegment, srcLayout, srcOffset, p4, dstArray, dstIndex); }
	static void copy(jni::ref<java::lang::Object> srcArray, jint srcIndex, jni::ref<java::lang::foreign::MemorySegment> dstSegment, jni::ref<java::lang::foreign::ValueLayout> dstLayout, jlong dstOffset, jint p6) { return call_static_method<"copy", void>(srcArray, srcIndex, dstSegment, dstLayout, dstOffset, p6); }
	static jlong mismatch(jni::ref<java::lang::foreign::MemorySegment> srcSegment, jlong srcFromOffset, jlong p3, jni::ref<java::lang::foreign::MemorySegment> srcToOffset, jlong p5, jlong dstSegment) { return call_static_method<"mismatch", jlong>(srcSegment, srcFromOffset, p3, srcToOffset, p5, dstSegment); }

protected:

	AbstractMemorySegmentImpl(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JDK_INTERNAL_FOREIGN_ABSTRACTMEMORYSEGMENTIMPL
