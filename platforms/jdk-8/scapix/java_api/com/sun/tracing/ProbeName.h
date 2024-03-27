// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/lang/annotation/Annotation.h>

#ifndef SCAPIX_JAVA_API_COM_SUN_TRACING_PROBENAME_FWD
#define SCAPIX_JAVA_API_COM_SUN_TRACING_PROBENAME_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::com::sun::tracing { class ProbeName; }

template<>
struct scapix::jni::object_traits<scapix::java_api::com::sun::tracing::ProbeName>
{
	static constexpr fixed_string class_name = "com/sun/tracing/ProbeName";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::java::lang::annotation::Annotation>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_TRACING_PROBENAME_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_COM_SUN_TRACING_PROBENAME)
#define SCAPIX_JAVA_API_COM_SUN_TRACING_PROBENAME

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class com::sun::tracing::ProbeName : public jni::object_base<"com/sun/tracing/ProbeName",
	java::lang::Object,
	java::lang::annotation::Annotation>
{
public:

	jni::ref<java::lang::String> value() { return call_method<"value", jni::ref<java::lang::String>>(); }

protected:

	ProbeName(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_TRACING_PROBENAME
