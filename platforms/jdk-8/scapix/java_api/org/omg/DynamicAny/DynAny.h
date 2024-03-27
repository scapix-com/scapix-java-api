// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/org/omg/DynamicAny/DynAnyOperations.h>
#include <scapix/java_api/org/omg/CORBA/Object.h>
#include <scapix/java_api/org/omg/CORBA/portable/IDLEntity.h>

#ifndef SCAPIX_JAVA_API_ORG_OMG_DYNAMICANY_DYNANY_FWD
#define SCAPIX_JAVA_API_ORG_OMG_DYNAMICANY_DYNANY_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::org::omg::DynamicAny { class DynAny; }

template<>
struct scapix::jni::object_traits<scapix::java_api::org::omg::DynamicAny::DynAny>
{
	static constexpr fixed_string class_name = "org/omg/DynamicAny/DynAny";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::org::omg::DynamicAny::DynAnyOperations, scapix::java_api::org::omg::CORBA::Object, scapix::java_api::org::omg::CORBA::portable::IDLEntity>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ORG_OMG_DYNAMICANY_DYNANY_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ORG_OMG_DYNAMICANY_DYNANY)
#define SCAPIX_JAVA_API_ORG_OMG_DYNAMICANY_DYNANY

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class org::omg::DynamicAny::DynAny : public jni::object_base<"org/omg/DynamicAny/DynAny",
	java::lang::Object,
	org::omg::DynamicAny::DynAnyOperations,
	org::omg::CORBA::Object,
	org::omg::CORBA::portable::IDLEntity>
{
public:


protected:

	DynAny(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ORG_OMG_DYNAMICANY_DYNANY