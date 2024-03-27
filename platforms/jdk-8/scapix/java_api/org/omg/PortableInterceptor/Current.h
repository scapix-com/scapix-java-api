// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/org/omg/PortableInterceptor/CurrentOperations.h>
#include <scapix/java_api/org/omg/CORBA/Current.h>
#include <scapix/java_api/org/omg/CORBA/portable/IDLEntity.h>

#ifndef SCAPIX_JAVA_API_ORG_OMG_PORTABLEINTERCEPTOR_CURRENT_FWD
#define SCAPIX_JAVA_API_ORG_OMG_PORTABLEINTERCEPTOR_CURRENT_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::org::omg::PortableInterceptor { class Current; }

template<>
struct scapix::jni::object_traits<scapix::java_api::org::omg::PortableInterceptor::Current>
{
	static constexpr fixed_string class_name = "org/omg/PortableInterceptor/Current";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::org::omg::PortableInterceptor::CurrentOperations, scapix::java_api::org::omg::CORBA::Current, scapix::java_api::org::omg::CORBA::portable::IDLEntity>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ORG_OMG_PORTABLEINTERCEPTOR_CURRENT_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ORG_OMG_PORTABLEINTERCEPTOR_CURRENT)
#define SCAPIX_JAVA_API_ORG_OMG_PORTABLEINTERCEPTOR_CURRENT

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class org::omg::PortableInterceptor::Current : public jni::object_base<"org/omg/PortableInterceptor/Current",
	java::lang::Object,
	org::omg::PortableInterceptor::CurrentOperations,
	org::omg::CORBA::Current,
	org::omg::CORBA::portable::IDLEntity>
{
public:


protected:

	Current(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ORG_OMG_PORTABLEINTERCEPTOR_CURRENT
