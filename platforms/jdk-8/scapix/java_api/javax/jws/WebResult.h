// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/lang/annotation/Annotation.h>

#ifndef SCAPIX_JAVA_API_JAVAX_JWS_WEBRESULT_FWD
#define SCAPIX_JAVA_API_JAVAX_JWS_WEBRESULT_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::javax::jws { class WebResult; }

template<>
struct scapix::jni::object_traits<scapix::java_api::javax::jws::WebResult>
{
	static constexpr fixed_string class_name = "javax/jws/WebResult";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::java::lang::annotation::Annotation>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_JWS_WEBRESULT_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVAX_JWS_WEBRESULT)
#define SCAPIX_JAVA_API_JAVAX_JWS_WEBRESULT

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class javax::jws::WebResult : public jni::object_base<"javax/jws/WebResult",
	java::lang::Object,
	java::lang::annotation::Annotation>
{
public:

	jni::ref<java::lang::String> name() { return call_method<"name", jni::ref<java::lang::String>>(); }
	jni::ref<java::lang::String> partName() { return call_method<"partName", jni::ref<java::lang::String>>(); }
	jni::ref<java::lang::String> targetNamespace() { return call_method<"targetNamespace", jni::ref<java::lang::String>>(); }
	jboolean header() { return call_method<"header", jboolean>(); }

protected:

	WebResult(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_JWS_WEBRESULT
