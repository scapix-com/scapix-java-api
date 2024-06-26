// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_ORG_OMG_PORTABLEINTERCEPTOR_ACTIVE_FWD
#define SCAPIX_JAVA_API_ORG_OMG_PORTABLEINTERCEPTOR_ACTIVE_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::org::omg::PortableInterceptor { class ACTIVE; }

template<>
struct scapix::jni::object_traits<scapix::java_api::org::omg::PortableInterceptor::ACTIVE>
{
	static constexpr fixed_string class_name = "org/omg/PortableInterceptor/ACTIVE";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ORG_OMG_PORTABLEINTERCEPTOR_ACTIVE_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ORG_OMG_PORTABLEINTERCEPTOR_ACTIVE)
#define SCAPIX_JAVA_API_ORG_OMG_PORTABLEINTERCEPTOR_ACTIVE

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class org::omg::PortableInterceptor::ACTIVE : public jni::object_base<"org/omg/PortableInterceptor/ACTIVE",
	java::lang::Object>
{
public:

	static jshort value() { return get_static_field<"value", jshort>(); }


protected:

	ACTIVE(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ORG_OMG_PORTABLEINTERCEPTOR_ACTIVE
