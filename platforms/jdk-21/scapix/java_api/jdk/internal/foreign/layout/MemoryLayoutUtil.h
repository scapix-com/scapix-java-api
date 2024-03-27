// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_JDK_INTERNAL_FOREIGN_LAYOUT_MEMORYLAYOUTUTIL_FWD
#define SCAPIX_JAVA_API_JDK_INTERNAL_FOREIGN_LAYOUT_MEMORYLAYOUTUTIL_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::jdk::internal::foreign::layout { class MemoryLayoutUtil; }

template<>
struct scapix::jni::object_traits<scapix::java_api::jdk::internal::foreign::layout::MemoryLayoutUtil>
{
	static constexpr fixed_string class_name = "jdk/internal/foreign/layout/MemoryLayoutUtil";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JDK_INTERNAL_FOREIGN_LAYOUT_MEMORYLAYOUTUTIL_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JDK_INTERNAL_FOREIGN_LAYOUT_MEMORYLAYOUTUTIL)
#define SCAPIX_JAVA_API_JDK_INTERNAL_FOREIGN_LAYOUT_MEMORYLAYOUTUTIL

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class jdk::internal::foreign::layout::MemoryLayoutUtil : public jni::object_base<"jdk/internal/foreign/layout/MemoryLayoutUtil",
	java::lang::Object>
{
public:

	static jlong requireNonNegative(jlong value) { return call_static_method<"requireNonNegative", jlong>(value); }
	static jlong requireByteSizeValid(jlong byteSize, jboolean p2) { return call_static_method<"requireByteSizeValid", jlong>(byteSize, p2); }

protected:

	MemoryLayoutUtil(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JDK_INTERNAL_FOREIGN_LAYOUT_MEMORYLAYOUTUTIL
