// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_ORG_OMG_PORTABLEINTERCEPTOR_INTERCEPTOROPERATIONS_FWD
#define SCAPIX_JAVA_API_ORG_OMG_PORTABLEINTERCEPTOR_INTERCEPTOROPERATIONS_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::org::omg::PortableInterceptor { class InterceptorOperations; }

template<>
struct scapix::jni::object_traits<scapix::java_api::org::omg::PortableInterceptor::InterceptorOperations>
{
	static constexpr fixed_string class_name = "org/omg/PortableInterceptor/InterceptorOperations";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ORG_OMG_PORTABLEINTERCEPTOR_INTERCEPTOROPERATIONS_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ORG_OMG_PORTABLEINTERCEPTOR_INTERCEPTOROPERATIONS)
#define SCAPIX_JAVA_API_ORG_OMG_PORTABLEINTERCEPTOR_INTERCEPTOROPERATIONS

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class org::omg::PortableInterceptor::InterceptorOperations : public jni::object_base<"org/omg/PortableInterceptor/InterceptorOperations",
	java::lang::Object>
{
public:

	jni::ref<java::lang::String> name() { return call_method<"name", jni::ref<java::lang::String>>(); }
	void destroy() { return call_method<"destroy", void>(); }

protected:

	InterceptorOperations(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ORG_OMG_PORTABLEINTERCEPTOR_INTERCEPTOROPERATIONS
