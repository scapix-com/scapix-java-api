// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/org/omg/CosNaming/NamingContextOperations.h>
#include <scapix/java_api/org/omg/CORBA/Object.h>
#include <scapix/java_api/org/omg/CORBA/portable/IDLEntity.h>

#ifndef SCAPIX_JAVA_API_ORG_OMG_COSNAMING_NAMINGCONTEXT_FWD
#define SCAPIX_JAVA_API_ORG_OMG_COSNAMING_NAMINGCONTEXT_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::org::omg::CosNaming { class NamingContext; }

template<>
struct scapix::jni::object_traits<scapix::java_api::org::omg::CosNaming::NamingContext>
{
	static constexpr fixed_string class_name = "org/omg/CosNaming/NamingContext";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::org::omg::CosNaming::NamingContextOperations, scapix::java_api::org::omg::CORBA::Object, scapix::java_api::org::omg::CORBA::portable::IDLEntity>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ORG_OMG_COSNAMING_NAMINGCONTEXT_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ORG_OMG_COSNAMING_NAMINGCONTEXT)
#define SCAPIX_JAVA_API_ORG_OMG_COSNAMING_NAMINGCONTEXT

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class org::omg::CosNaming::NamingContext : public jni::object_base<"org/omg/CosNaming/NamingContext",
	java::lang::Object,
	org::omg::CosNaming::NamingContextOperations,
	org::omg::CORBA::Object,
	org::omg::CORBA::portable::IDLEntity>
{
public:


protected:

	NamingContext(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ORG_OMG_COSNAMING_NAMINGCONTEXT