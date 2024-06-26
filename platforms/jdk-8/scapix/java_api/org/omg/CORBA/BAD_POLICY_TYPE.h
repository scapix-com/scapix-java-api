// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_ORG_OMG_CORBA_BAD_POLICY_TYPE_FWD
#define SCAPIX_JAVA_API_ORG_OMG_CORBA_BAD_POLICY_TYPE_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::org::omg::CORBA { class BAD_POLICY_TYPE; }

template<>
struct scapix::jni::object_traits<scapix::java_api::org::omg::CORBA::BAD_POLICY_TYPE>
{
	static constexpr fixed_string class_name = "org/omg/CORBA/BAD_POLICY_TYPE";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ORG_OMG_CORBA_BAD_POLICY_TYPE_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ORG_OMG_CORBA_BAD_POLICY_TYPE)
#define SCAPIX_JAVA_API_ORG_OMG_CORBA_BAD_POLICY_TYPE

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class org::omg::CORBA::BAD_POLICY_TYPE : public jni::object_base<"org/omg/CORBA/BAD_POLICY_TYPE",
	java::lang::Object>
{
public:

	static jshort value() { return get_static_field<"value", jshort>(); }


protected:

	BAD_POLICY_TYPE(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ORG_OMG_CORBA_BAD_POLICY_TYPE
