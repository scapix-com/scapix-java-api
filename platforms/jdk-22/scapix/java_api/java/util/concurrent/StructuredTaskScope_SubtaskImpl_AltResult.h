// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Record.h>

#ifndef SCAPIX_JAVA_API_JAVA_UTIL_CONCURRENT_STRUCTUREDTASKSCOPE_SUBTASKIMPL_ALTRESULT_FWD
#define SCAPIX_JAVA_API_JAVA_UTIL_CONCURRENT_STRUCTUREDTASKSCOPE_SUBTASKIMPL_ALTRESULT_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::util::concurrent { class StructuredTaskScope_SubtaskImpl_AltResult; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::util::concurrent::StructuredTaskScope_SubtaskImpl_AltResult>
{
	static constexpr fixed_string class_name = "java/util/concurrent/StructuredTaskScope$SubtaskImpl$AltResult";
	using base_classes = std::tuple<scapix::java_api::java::lang::Record>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_UTIL_CONCURRENT_STRUCTUREDTASKSCOPE_SUBTASKIMPL_ALTRESULT_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_UTIL_CONCURRENT_STRUCTUREDTASKSCOPE_SUBTASKIMPL_ALTRESULT)
#define SCAPIX_JAVA_API_JAVA_UTIL_CONCURRENT_STRUCTUREDTASKSCOPE_SUBTASKIMPL_ALTRESULT

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/lang/Throwable.h>
#include <scapix/java_api/java/util/concurrent/StructuredTaskScope_Subtask_State.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class java::util::concurrent::StructuredTaskScope_SubtaskImpl_AltResult : public jni::object_base<"java/util/concurrent/StructuredTaskScope$SubtaskImpl$AltResult",
	java::lang::Record>
{
public:

	jni::ref<java::lang::String> toString() { return call_method<"toString", jni::ref<java::lang::String>>(); }
	jint hashCode() { return call_method<"hashCode", jint>(); }
	jboolean equals(jni::ref<java::lang::Object> o) { return call_method<"equals", jboolean>(o); }
	jni::ref<java::util::concurrent::StructuredTaskScope_Subtask_State> state() { return call_method<"state", jni::ref<java::util::concurrent::StructuredTaskScope_Subtask_State>>(); }
	jni::ref<java::lang::Throwable> exception() { return call_method<"exception", jni::ref<java::lang::Throwable>>(); }

protected:

	StructuredTaskScope_SubtaskImpl_AltResult(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_UTIL_CONCURRENT_STRUCTUREDTASKSCOPE_SUBTASKIMPL_ALTRESULT
