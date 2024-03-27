// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/org/omg/CORBA/portable/ValueBase.h>
#include <scapix/java_api/org/omg/CORBA/CustomMarshal.h>

#ifndef SCAPIX_JAVA_API_ORG_OMG_CORBA_PORTABLE_CUSTOMVALUE_FWD
#define SCAPIX_JAVA_API_ORG_OMG_CORBA_PORTABLE_CUSTOMVALUE_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::org::omg::CORBA::portable { class CustomValue; }

template<>
struct scapix::jni::object_traits<scapix::java_api::org::omg::CORBA::portable::CustomValue>
{
	static constexpr fixed_string class_name = "org/omg/CORBA/portable/CustomValue";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::org::omg::CORBA::portable::ValueBase, scapix::java_api::org::omg::CORBA::CustomMarshal>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ORG_OMG_CORBA_PORTABLE_CUSTOMVALUE_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ORG_OMG_CORBA_PORTABLE_CUSTOMVALUE)
#define SCAPIX_JAVA_API_ORG_OMG_CORBA_PORTABLE_CUSTOMVALUE

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class org::omg::CORBA::portable::CustomValue : public jni::object_base<"org/omg/CORBA/portable/CustomValue",
	java::lang::Object,
	org::omg::CORBA::portable::ValueBase,
	org::omg::CORBA::CustomMarshal>
{
public:


protected:

	CustomValue(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ORG_OMG_CORBA_PORTABLE_CUSTOMVALUE
