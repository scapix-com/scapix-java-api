// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/lang/annotation/Annotation.h>

#ifndef SCAPIX_JAVA_API_JAVA_BEANS_TRANSIENT_FWD
#define SCAPIX_JAVA_API_JAVA_BEANS_TRANSIENT_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::beans { class Transient; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::beans::Transient>
{
	static constexpr fixed_string class_name = "java/beans/Transient";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::java::lang::annotation::Annotation>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_BEANS_TRANSIENT_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_BEANS_TRANSIENT)
#define SCAPIX_JAVA_API_JAVA_BEANS_TRANSIENT

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class java::beans::Transient : public jni::object_base<"java/beans/Transient",
	java::lang::Object,
	java::lang::annotation::Annotation>
{
public:

	jboolean value() { return call_method<"value", jboolean>(); }

protected:

	Transient(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_BEANS_TRANSIENT