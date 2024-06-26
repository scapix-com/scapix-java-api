// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/jdk/internal/foreign/layout/AbstractLayout.h>
#include <scapix/java_api/java/lang/foreign/SequenceLayout.h>

#ifndef SCAPIX_JAVA_API_JDK_INTERNAL_FOREIGN_LAYOUT_SEQUENCELAYOUTIMPL_FWD
#define SCAPIX_JAVA_API_JDK_INTERNAL_FOREIGN_LAYOUT_SEQUENCELAYOUTIMPL_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::jdk::internal::foreign::layout { class SequenceLayoutImpl; }

template<>
struct scapix::jni::object_traits<scapix::java_api::jdk::internal::foreign::layout::SequenceLayoutImpl>
{
	static constexpr fixed_string class_name = "jdk/internal/foreign/layout/SequenceLayoutImpl";
	using base_classes = std::tuple<scapix::java_api::jdk::internal::foreign::layout::AbstractLayout, scapix::java_api::java::lang::foreign::SequenceLayout>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JDK_INTERNAL_FOREIGN_LAYOUT_SEQUENCELAYOUTIMPL_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JDK_INTERNAL_FOREIGN_LAYOUT_SEQUENCELAYOUTIMPL)
#define SCAPIX_JAVA_API_JDK_INTERNAL_FOREIGN_LAYOUT_SEQUENCELAYOUTIMPL

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/lang/foreign/MemoryLayout.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class jdk::internal::foreign::layout::SequenceLayoutImpl : public jni::object_base<"jdk/internal/foreign/layout/SequenceLayoutImpl",
	jdk::internal::foreign::layout::AbstractLayout,
	java::lang::foreign::SequenceLayout>
{
public:

	jni::ref<java::lang::foreign::MemoryLayout> elementLayout() { return call_method<"elementLayout", jni::ref<java::lang::foreign::MemoryLayout>>(); }
	jlong elementCount() { return call_method<"elementCount", jlong>(); }
	jni::ref<java::lang::foreign::SequenceLayout> withElementCount(jlong elementCount) { return call_method<"withElementCount", jni::ref<java::lang::foreign::SequenceLayout>>(elementCount); }
	jni::ref<java::lang::foreign::SequenceLayout> reshape(jni::ref<jni::array<jlong>> elementCounts) { return call_method<"reshape", jni::ref<java::lang::foreign::SequenceLayout>>(elementCounts); }
	jni::ref<java::lang::foreign::SequenceLayout> flatten() { return call_method<"flatten", jni::ref<java::lang::foreign::SequenceLayout>>(); }
	jni::ref<java::lang::String> toString() { return call_method<"toString", jni::ref<java::lang::String>>(); }
	jboolean equals(jni::ref<java::lang::Object> other) { return call_method<"equals", jboolean>(other); }
	jint hashCode() { return call_method<"hashCode", jint>(); }
	jni::ref<jdk::internal::foreign::layout::SequenceLayoutImpl> withByteAlignment(jlong byteAlignment) { return call_method<"withByteAlignment", jni::ref<jdk::internal::foreign::layout::SequenceLayoutImpl>>(byteAlignment); }
	jboolean hasNaturalAlignment() { return call_method<"hasNaturalAlignment", jboolean>(); }
	static jni::ref<java::lang::foreign::SequenceLayout> of(jlong elementCount, jni::ref<java::lang::foreign::MemoryLayout> p2) { return call_static_method<"of", jni::ref<java::lang::foreign::SequenceLayout>>(elementCount, p2); }

protected:

	SequenceLayoutImpl(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JDK_INTERNAL_FOREIGN_LAYOUT_SEQUENCELAYOUTIMPL
