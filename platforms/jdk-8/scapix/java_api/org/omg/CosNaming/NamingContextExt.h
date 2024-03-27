// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/org/omg/CosNaming/NamingContextExtOperations.h>
#include <scapix/java_api/org/omg/CosNaming/NamingContext.h>
#include <scapix/java_api/org/omg/CORBA/portable/IDLEntity.h>

#ifndef SCAPIX_JAVA_API_ORG_OMG_COSNAMING_NAMINGCONTEXTEXT_FWD
#define SCAPIX_JAVA_API_ORG_OMG_COSNAMING_NAMINGCONTEXTEXT_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::org::omg::CosNaming { class NamingContextExt; }

template<>
struct scapix::jni::object_traits<scapix::java_api::org::omg::CosNaming::NamingContextExt>
{
	static constexpr fixed_string class_name = "org/omg/CosNaming/NamingContextExt";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::org::omg::CosNaming::NamingContextExtOperations, scapix::java_api::org::omg::CosNaming::NamingContext, scapix::java_api::org::omg::CORBA::portable::IDLEntity>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ORG_OMG_COSNAMING_NAMINGCONTEXTEXT_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ORG_OMG_COSNAMING_NAMINGCONTEXTEXT)
#define SCAPIX_JAVA_API_ORG_OMG_COSNAMING_NAMINGCONTEXTEXT

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class org::omg::CosNaming::NamingContextExt : public jni::object_base<"org/omg/CosNaming/NamingContextExt",
	java::lang::Object,
	org::omg::CosNaming::NamingContextExtOperations,
	org::omg::CosNaming::NamingContext,
	org::omg::CORBA::portable::IDLEntity>
{
public:


protected:

	NamingContextExt(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ORG_OMG_COSNAMING_NAMINGCONTEXTEXT
