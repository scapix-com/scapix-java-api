// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_JAVA_LANG_FOREIGN_MEMORYLAYOUT_FWD
#define SCAPIX_JAVA_API_JAVA_LANG_FOREIGN_MEMORYLAYOUT_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::lang::foreign { class MemoryLayout; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::lang::foreign::MemoryLayout>
{
	static constexpr fixed_string class_name = "java/lang/foreign/MemoryLayout";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_LANG_FOREIGN_MEMORYLAYOUT_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_LANG_FOREIGN_MEMORYLAYOUT)
#define SCAPIX_JAVA_API_JAVA_LANG_FOREIGN_MEMORYLAYOUT

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/lang/foreign/MemoryLayout_PathElement.h>
#include <scapix/java_api/java/lang/foreign/PaddingLayout.h>
#include <scapix/java_api/java/lang/foreign/SequenceLayout.h>
#include <scapix/java_api/java/lang/foreign/StructLayout.h>
#include <scapix/java_api/java/lang/foreign/UnionLayout.h>
#include <scapix/java_api/java/lang/invoke/MethodHandle.h>
#include <scapix/java_api/java/lang/invoke/VarHandle.h>
#include <scapix/java_api/java/util/Optional.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class java::lang::foreign::MemoryLayout : public jni::object_base<"java/lang/foreign/MemoryLayout",
	java::lang::Object>
{
public:

	using PathElement = MemoryLayout_PathElement;

	jlong byteSize() { return call_method<"byteSize", jlong>(); }
	jni::ref<java::util::Optional> name() { return call_method<"name", jni::ref<java::util::Optional>>(); }
	jni::ref<java::lang::foreign::MemoryLayout> withName(jni::ref<java::lang::String> p1) { return call_method<"withName", jni::ref<java::lang::foreign::MemoryLayout>>(p1); }
	jni::ref<java::lang::foreign::MemoryLayout> withoutName() { return call_method<"withoutName", jni::ref<java::lang::foreign::MemoryLayout>>(); }
	jlong byteAlignment() { return call_method<"byteAlignment", jlong>(); }
	jni::ref<java::lang::foreign::MemoryLayout> withByteAlignment(jlong p1) { return call_method<"withByteAlignment", jni::ref<java::lang::foreign::MemoryLayout>>(p1); }
	jlong scale(jlong p1, jlong p2) { return call_method<"scale", jlong>(p1, p2); }
	jni::ref<java::lang::invoke::MethodHandle> scaleHandle() { return call_method<"scaleHandle", jni::ref<java::lang::invoke::MethodHandle>>(); }
	jlong byteOffset(jni::ref<jni::array<java::lang::foreign::MemoryLayout_PathElement>> p1) { return call_method<"byteOffset", jlong>(p1); }
	jni::ref<java::lang::invoke::MethodHandle> byteOffsetHandle(jni::ref<jni::array<java::lang::foreign::MemoryLayout_PathElement>> p1) { return call_method<"byteOffsetHandle", jni::ref<java::lang::invoke::MethodHandle>>(p1); }
	jni::ref<java::lang::invoke::VarHandle> varHandle(jni::ref<jni::array<java::lang::foreign::MemoryLayout_PathElement>> p1) { return call_method<"varHandle", jni::ref<java::lang::invoke::VarHandle>>(p1); }
	jni::ref<java::lang::invoke::VarHandle> arrayElementVarHandle(jni::ref<jni::array<java::lang::foreign::MemoryLayout_PathElement>> p1) { return call_method<"arrayElementVarHandle", jni::ref<java::lang::invoke::VarHandle>>(p1); }
	jni::ref<java::lang::invoke::MethodHandle> sliceHandle(jni::ref<jni::array<java::lang::foreign::MemoryLayout_PathElement>> p1) { return call_method<"sliceHandle", jni::ref<java::lang::invoke::MethodHandle>>(p1); }
	jni::ref<java::lang::foreign::MemoryLayout> select(jni::ref<jni::array<java::lang::foreign::MemoryLayout_PathElement>> p1) { return call_method<"select", jni::ref<java::lang::foreign::MemoryLayout>>(p1); }
	jboolean equals(jni::ref<java::lang::Object> p1) { return call_method<"equals", jboolean>(p1); }
	jint hashCode() { return call_method<"hashCode", jint>(); }
	jni::ref<java::lang::String> toString() { return call_method<"toString", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::foreign::PaddingLayout> paddingLayout(jlong byteSize) { return call_static_method<"paddingLayout", jni::ref<java::lang::foreign::PaddingLayout>>(byteSize); }
	static jni::ref<java::lang::foreign::SequenceLayout> sequenceLayout(jlong elementCount, jni::ref<java::lang::foreign::MemoryLayout> p2) { return call_static_method<"sequenceLayout", jni::ref<java::lang::foreign::SequenceLayout>>(elementCount, p2); }
	static jni::ref<java::lang::foreign::StructLayout> structLayout(jni::ref<jni::array<java::lang::foreign::MemoryLayout>> elements) { return call_static_method<"structLayout", jni::ref<java::lang::foreign::StructLayout>>(elements); }
	static jni::ref<java::lang::foreign::UnionLayout> unionLayout(jni::ref<jni::array<java::lang::foreign::MemoryLayout>> elements) { return call_static_method<"unionLayout", jni::ref<java::lang::foreign::UnionLayout>>(elements); }

protected:

	MemoryLayout(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_LANG_FOREIGN_MEMORYLAYOUT
