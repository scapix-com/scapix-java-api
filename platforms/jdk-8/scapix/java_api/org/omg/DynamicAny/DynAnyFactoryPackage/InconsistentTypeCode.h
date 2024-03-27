// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/org/omg/CORBA/UserException.h>

#ifndef SCAPIX_JAVA_API_ORG_OMG_DYNAMICANY_DYNANYFACTORYPACKAGE_INCONSISTENTTYPECODE_FWD
#define SCAPIX_JAVA_API_ORG_OMG_DYNAMICANY_DYNANYFACTORYPACKAGE_INCONSISTENTTYPECODE_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::org::omg::DynamicAny::DynAnyFactoryPackage { class InconsistentTypeCode; }

template<>
struct scapix::jni::object_traits<scapix::java_api::org::omg::DynamicAny::DynAnyFactoryPackage::InconsistentTypeCode>
{
	static constexpr fixed_string class_name = "org/omg/DynamicAny/DynAnyFactoryPackage/InconsistentTypeCode";
	using base_classes = std::tuple<scapix::java_api::org::omg::CORBA::UserException>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ORG_OMG_DYNAMICANY_DYNANYFACTORYPACKAGE_INCONSISTENTTYPECODE_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ORG_OMG_DYNAMICANY_DYNANYFACTORYPACKAGE_INCONSISTENTTYPECODE)
#define SCAPIX_JAVA_API_ORG_OMG_DYNAMICANY_DYNANYFACTORYPACKAGE_INCONSISTENTTYPECODE

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class org::omg::DynamicAny::DynAnyFactoryPackage::InconsistentTypeCode : public jni::object_base<"org/omg/DynamicAny/DynAnyFactoryPackage/InconsistentTypeCode",
	org::omg::CORBA::UserException>
{
public:

	static jni::ref<org::omg::DynamicAny::DynAnyFactoryPackage::InconsistentTypeCode> new_object() { return base_::new_object(); }
	static jni::ref<org::omg::DynamicAny::DynAnyFactoryPackage::InconsistentTypeCode> new_object(jni::ref<java::lang::String> p1) { return base_::new_object(p1); }

protected:

	InconsistentTypeCode(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ORG_OMG_DYNAMICANY_DYNANYFACTORYPACKAGE_INCONSISTENTTYPECODE
