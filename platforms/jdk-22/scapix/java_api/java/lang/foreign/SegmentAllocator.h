// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_JAVA_LANG_FOREIGN_SEGMENTALLOCATOR_FWD
#define SCAPIX_JAVA_API_JAVA_LANG_FOREIGN_SEGMENTALLOCATOR_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::lang::foreign { class SegmentAllocator; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::lang::foreign::SegmentAllocator>
{
	static constexpr fixed_string class_name = "java/lang/foreign/SegmentAllocator";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_LANG_FOREIGN_SEGMENTALLOCATOR_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_LANG_FOREIGN_SEGMENTALLOCATOR)
#define SCAPIX_JAVA_API_JAVA_LANG_FOREIGN_SEGMENTALLOCATOR

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/lang/foreign/AddressLayout.h>
#include <scapix/java_api/java/lang/foreign/MemoryLayout.h>
#include <scapix/java_api/java/lang/foreign/MemorySegment.h>
#include <scapix/java_api/java/lang/foreign/ValueLayout.h>
#include <scapix/java_api/java/lang/foreign/ValueLayout_OfByte.h>
#include <scapix/java_api/java/lang/foreign/ValueLayout_OfChar.h>
#include <scapix/java_api/java/lang/foreign/ValueLayout_OfDouble.h>
#include <scapix/java_api/java/lang/foreign/ValueLayout_OfFloat.h>
#include <scapix/java_api/java/lang/foreign/ValueLayout_OfInt.h>
#include <scapix/java_api/java/lang/foreign/ValueLayout_OfLong.h>
#include <scapix/java_api/java/lang/foreign/ValueLayout_OfShort.h>
#include <scapix/java_api/java/nio/charset/Charset.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class java::lang::foreign::SegmentAllocator : public jni::object_base<"java/lang/foreign/SegmentAllocator",
	java::lang::Object>
{
public:

	jni::ref<java::lang::foreign::MemorySegment> allocateFrom(jni::ref<java::lang::String> str) { return call_method<"allocateFrom", jni::ref<java::lang::foreign::MemorySegment>>(str); }
	jni::ref<java::lang::foreign::MemorySegment> allocateFrom(jni::ref<java::lang::String> str, jni::ref<java::nio::charset::Charset> charset) { return call_method<"allocateFrom", jni::ref<java::lang::foreign::MemorySegment>>(str, charset); }
	jni::ref<java::lang::foreign::MemorySegment> allocateFrom(jni::ref<java::lang::foreign::ValueLayout_OfByte> layout, jbyte value) { return call_method<"allocateFrom", jni::ref<java::lang::foreign::MemorySegment>>(layout, value); }
	jni::ref<java::lang::foreign::MemorySegment> allocateFrom(jni::ref<java::lang::foreign::ValueLayout_OfChar> layout, jchar value) { return call_method<"allocateFrom", jni::ref<java::lang::foreign::MemorySegment>>(layout, value); }
	jni::ref<java::lang::foreign::MemorySegment> allocateFrom(jni::ref<java::lang::foreign::ValueLayout_OfShort> layout, jshort value) { return call_method<"allocateFrom", jni::ref<java::lang::foreign::MemorySegment>>(layout, value); }
	jni::ref<java::lang::foreign::MemorySegment> allocateFrom(jni::ref<java::lang::foreign::ValueLayout_OfInt> layout, jint value) { return call_method<"allocateFrom", jni::ref<java::lang::foreign::MemorySegment>>(layout, value); }
	jni::ref<java::lang::foreign::MemorySegment> allocateFrom(jni::ref<java::lang::foreign::ValueLayout_OfFloat> layout, jfloat value) { return call_method<"allocateFrom", jni::ref<java::lang::foreign::MemorySegment>>(layout, value); }
	jni::ref<java::lang::foreign::MemorySegment> allocateFrom(jni::ref<java::lang::foreign::ValueLayout_OfLong> layout, jlong value) { return call_method<"allocateFrom", jni::ref<java::lang::foreign::MemorySegment>>(layout, value); }
	jni::ref<java::lang::foreign::MemorySegment> allocateFrom(jni::ref<java::lang::foreign::ValueLayout_OfDouble> layout, jdouble value) { return call_method<"allocateFrom", jni::ref<java::lang::foreign::MemorySegment>>(layout, value); }
	jni::ref<java::lang::foreign::MemorySegment> allocateFrom(jni::ref<java::lang::foreign::AddressLayout> layout, jni::ref<java::lang::foreign::MemorySegment> value) { return call_method<"allocateFrom", jni::ref<java::lang::foreign::MemorySegment>>(layout, value); }
	jni::ref<java::lang::foreign::MemorySegment> allocateFrom(jni::ref<java::lang::foreign::ValueLayout> elementLayout, jni::ref<java::lang::foreign::MemorySegment> source, jni::ref<java::lang::foreign::ValueLayout> sourceElementLayout, jlong sourceOffset, jlong p5) { return call_method<"allocateFrom", jni::ref<java::lang::foreign::MemorySegment>>(elementLayout, source, sourceElementLayout, sourceOffset, p5); }
	jni::ref<java::lang::foreign::MemorySegment> allocateFrom(jni::ref<java::lang::foreign::ValueLayout_OfByte> elementLayout, jni::ref<jni::array<jbyte>> elements) { return call_method<"allocateFrom", jni::ref<java::lang::foreign::MemorySegment>>(elementLayout, elements); }
	jni::ref<java::lang::foreign::MemorySegment> allocateFrom(jni::ref<java::lang::foreign::ValueLayout_OfShort> elementLayout, jni::ref<jni::array<jshort>> elements) { return call_method<"allocateFrom", jni::ref<java::lang::foreign::MemorySegment>>(elementLayout, elements); }
	jni::ref<java::lang::foreign::MemorySegment> allocateFrom(jni::ref<java::lang::foreign::ValueLayout_OfChar> elementLayout, jni::ref<jni::array<jchar>> elements) { return call_method<"allocateFrom", jni::ref<java::lang::foreign::MemorySegment>>(elementLayout, elements); }
	jni::ref<java::lang::foreign::MemorySegment> allocateFrom(jni::ref<java::lang::foreign::ValueLayout_OfInt> elementLayout, jni::ref<jni::array<jint>> elements) { return call_method<"allocateFrom", jni::ref<java::lang::foreign::MemorySegment>>(elementLayout, elements); }
	jni::ref<java::lang::foreign::MemorySegment> allocateFrom(jni::ref<java::lang::foreign::ValueLayout_OfFloat> elementLayout, jni::ref<jni::array<jfloat>> elements) { return call_method<"allocateFrom", jni::ref<java::lang::foreign::MemorySegment>>(elementLayout, elements); }
	jni::ref<java::lang::foreign::MemorySegment> allocateFrom(jni::ref<java::lang::foreign::ValueLayout_OfLong> elementLayout, jni::ref<jni::array<jlong>> elements) { return call_method<"allocateFrom", jni::ref<java::lang::foreign::MemorySegment>>(elementLayout, elements); }
	jni::ref<java::lang::foreign::MemorySegment> allocateFrom(jni::ref<java::lang::foreign::ValueLayout_OfDouble> elementLayout, jni::ref<jni::array<jdouble>> elements) { return call_method<"allocateFrom", jni::ref<java::lang::foreign::MemorySegment>>(elementLayout, elements); }
	jni::ref<java::lang::foreign::MemorySegment> allocate(jni::ref<java::lang::foreign::MemoryLayout> layout) { return call_method<"allocate", jni::ref<java::lang::foreign::MemorySegment>>(layout); }
	jni::ref<java::lang::foreign::MemorySegment> allocate(jni::ref<java::lang::foreign::MemoryLayout> elementLayout, jlong count) { return call_method<"allocate", jni::ref<java::lang::foreign::MemorySegment>>(elementLayout, count); }
	jni::ref<java::lang::foreign::MemorySegment> allocate(jlong byteSize) { return call_method<"allocate", jni::ref<java::lang::foreign::MemorySegment>>(byteSize); }
	jni::ref<java::lang::foreign::MemorySegment> allocate(jlong p1, jlong p2) { return call_method<"allocate", jni::ref<java::lang::foreign::MemorySegment>>(p1, p2); }
	static jni::ref<java::lang::foreign::SegmentAllocator> slicingAllocator(jni::ref<java::lang::foreign::MemorySegment> segment) { return call_static_method<"slicingAllocator", jni::ref<java::lang::foreign::SegmentAllocator>>(segment); }
	static jni::ref<java::lang::foreign::SegmentAllocator> prefixAllocator(jni::ref<java::lang::foreign::MemorySegment> segment) { return call_static_method<"prefixAllocator", jni::ref<java::lang::foreign::SegmentAllocator>>(segment); }

protected:

	SegmentAllocator(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_LANG_FOREIGN_SEGMENTALLOCATOR
