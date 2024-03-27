// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_JDK_INTERNAL_UTIL_PRECONDITIONS_FWD
#define SCAPIX_JAVA_API_JDK_INTERNAL_UTIL_PRECONDITIONS_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::jdk::internal::util { class Preconditions; }

template<>
struct scapix::jni::object_traits<scapix::java_api::jdk::internal::util::Preconditions>
{
	static constexpr fixed_string class_name = "jdk/internal/util/Preconditions";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JDK_INTERNAL_UTIL_PRECONDITIONS_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JDK_INTERNAL_UTIL_PRECONDITIONS)
#define SCAPIX_JAVA_API_JDK_INTERNAL_UTIL_PRECONDITIONS

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/util/function/BiFunction.h>
#include <scapix/java_api/java/util/function/Function.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class jdk::internal::util::Preconditions : public jni::object_base<"jdk/internal/util/Preconditions",
	java::lang::Object>
{
public:

	static jni::ref<jdk::internal::util::Preconditions> new_object() { return base_::new_object(); }
	static jni::ref<java::util::function::BiFunction> outOfBoundsExceptionFormatter(jni::ref<java::util::function::Function> f) { return call_static_method<"outOfBoundsExceptionFormatter", jni::ref<java::util::function::BiFunction>>(f); }
	static jint checkIndex(jint index, jint length, jni::ref<java::util::function::BiFunction> oobef) { return call_static_method<"checkIndex", jint>(index, length, oobef); }
	static jint checkFromToIndex(jint fromIndex, jint toIndex, jint length, jni::ref<java::util::function::BiFunction> oobef) { return call_static_method<"checkFromToIndex", jint>(fromIndex, toIndex, length, oobef); }
	static jint checkFromIndexSize(jint fromIndex, jint size, jint length, jni::ref<java::util::function::BiFunction> oobef) { return call_static_method<"checkFromIndexSize", jint>(fromIndex, size, length, oobef); }

protected:

	Preconditions(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JDK_INTERNAL_UTIL_PRECONDITIONS
