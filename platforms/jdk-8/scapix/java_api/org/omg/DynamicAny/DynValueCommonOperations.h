// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/org/omg/DynamicAny/DynAnyOperations.h>

#ifndef SCAPIX_JAVA_API_ORG_OMG_DYNAMICANY_DYNVALUECOMMONOPERATIONS_FWD
#define SCAPIX_JAVA_API_ORG_OMG_DYNAMICANY_DYNVALUECOMMONOPERATIONS_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::org::omg::DynamicAny { class DynValueCommonOperations; }

template<>
struct scapix::jni::object_traits<scapix::java_api::org::omg::DynamicAny::DynValueCommonOperations>
{
	static constexpr fixed_string class_name = "org/omg/DynamicAny/DynValueCommonOperations";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::org::omg::DynamicAny::DynAnyOperations>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ORG_OMG_DYNAMICANY_DYNVALUECOMMONOPERATIONS_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ORG_OMG_DYNAMICANY_DYNVALUECOMMONOPERATIONS)
#define SCAPIX_JAVA_API_ORG_OMG_DYNAMICANY_DYNVALUECOMMONOPERATIONS

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class org::omg::DynamicAny::DynValueCommonOperations : public jni::object_base<"org/omg/DynamicAny/DynValueCommonOperations",
	java::lang::Object,
	org::omg::DynamicAny::DynAnyOperations>
{
public:

	jboolean is_null() { return call_method<"is_null", jboolean>(); }
	void set_to_null() { return call_method<"set_to_null", void>(); }
	void set_to_value() { return call_method<"set_to_value", void>(); }

protected:

	DynValueCommonOperations(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ORG_OMG_DYNAMICANY_DYNVALUECOMMONOPERATIONS
