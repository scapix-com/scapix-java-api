// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/org/omg/PortableInterceptor/ORBInitializerOperations.h>
#include <scapix/java_api/org/omg/CORBA/Object.h>
#include <scapix/java_api/org/omg/CORBA/portable/IDLEntity.h>

#ifndef SCAPIX_JAVA_API_ORG_OMG_PORTABLEINTERCEPTOR_ORBINITIALIZER_FWD
#define SCAPIX_JAVA_API_ORG_OMG_PORTABLEINTERCEPTOR_ORBINITIALIZER_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::org::omg::PortableInterceptor { class ORBInitializer; }

template<>
struct scapix::jni::object_traits<scapix::java_api::org::omg::PortableInterceptor::ORBInitializer>
{
	static constexpr fixed_string class_name = "org/omg/PortableInterceptor/ORBInitializer";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::org::omg::PortableInterceptor::ORBInitializerOperations, scapix::java_api::org::omg::CORBA::Object, scapix::java_api::org::omg::CORBA::portable::IDLEntity>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ORG_OMG_PORTABLEINTERCEPTOR_ORBINITIALIZER_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ORG_OMG_PORTABLEINTERCEPTOR_ORBINITIALIZER)
#define SCAPIX_JAVA_API_ORG_OMG_PORTABLEINTERCEPTOR_ORBINITIALIZER

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class org::omg::PortableInterceptor::ORBInitializer : public jni::object_base<"org/omg/PortableInterceptor/ORBInitializer",
	java::lang::Object,
	org::omg::PortableInterceptor::ORBInitializerOperations,
	org::omg::CORBA::Object,
	org::omg::CORBA::portable::IDLEntity>
{
public:


protected:

	ORBInitializer(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ORG_OMG_PORTABLEINTERCEPTOR_ORBINITIALIZER
