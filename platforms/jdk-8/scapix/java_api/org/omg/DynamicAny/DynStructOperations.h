// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/org/omg/DynamicAny/DynAnyOperations.h>

#ifndef SCAPIX_JAVA_API_ORG_OMG_DYNAMICANY_DYNSTRUCTOPERATIONS_FWD
#define SCAPIX_JAVA_API_ORG_OMG_DYNAMICANY_DYNSTRUCTOPERATIONS_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::org::omg::DynamicAny { class DynStructOperations; }

template<>
struct scapix::jni::object_traits<scapix::java_api::org::omg::DynamicAny::DynStructOperations>
{
	static constexpr fixed_string class_name = "org/omg/DynamicAny/DynStructOperations";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::org::omg::DynamicAny::DynAnyOperations>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ORG_OMG_DYNAMICANY_DYNSTRUCTOPERATIONS_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ORG_OMG_DYNAMICANY_DYNSTRUCTOPERATIONS)
#define SCAPIX_JAVA_API_ORG_OMG_DYNAMICANY_DYNSTRUCTOPERATIONS

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/org/omg/CORBA/TCKind.h>
#include <scapix/java_api/org/omg/DynamicAny/NameDynAnyPair.h>
#include <scapix/java_api/org/omg/DynamicAny/NameValuePair.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class org::omg::DynamicAny::DynStructOperations : public jni::object_base<"org/omg/DynamicAny/DynStructOperations",
	java::lang::Object,
	org::omg::DynamicAny::DynAnyOperations>
{
public:

	jni::ref<java::lang::String> current_member_name() { return call_method<"current_member_name", jni::ref<java::lang::String>>(); }
	jni::ref<org::omg::CORBA::TCKind> current_member_kind() { return call_method<"current_member_kind", jni::ref<org::omg::CORBA::TCKind>>(); }
	jni::ref<jni::array<org::omg::DynamicAny::NameValuePair>> get_members() { return call_method<"get_members", jni::ref<jni::array<org::omg::DynamicAny::NameValuePair>>>(); }
	void set_members(jni::ref<jni::array<org::omg::DynamicAny::NameValuePair>> p1) { return call_method<"set_members", void>(p1); }
	jni::ref<jni::array<org::omg::DynamicAny::NameDynAnyPair>> get_members_as_dyn_any() { return call_method<"get_members_as_dyn_any", jni::ref<jni::array<org::omg::DynamicAny::NameDynAnyPair>>>(); }
	void set_members_as_dyn_any(jni::ref<jni::array<org::omg::DynamicAny::NameDynAnyPair>> p1) { return call_method<"set_members_as_dyn_any", void>(p1); }

protected:

	DynStructOperations(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ORG_OMG_DYNAMICANY_DYNSTRUCTOPERATIONS
