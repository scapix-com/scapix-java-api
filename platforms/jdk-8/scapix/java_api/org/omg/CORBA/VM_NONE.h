// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_ORG_OMG_CORBA_VM_NONE_FWD
#define SCAPIX_JAVA_API_ORG_OMG_CORBA_VM_NONE_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::org::omg::CORBA { class VM_NONE; }

template<>
struct scapix::jni::object_traits<scapix::java_api::org::omg::CORBA::VM_NONE>
{
	static constexpr fixed_string class_name = "org/omg/CORBA/VM_NONE";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ORG_OMG_CORBA_VM_NONE_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ORG_OMG_CORBA_VM_NONE)
#define SCAPIX_JAVA_API_ORG_OMG_CORBA_VM_NONE

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class org::omg::CORBA::VM_NONE : public jni::object_base<"org/omg/CORBA/VM_NONE",
	java::lang::Object>
{
public:

	static jshort value() { return get_static_field<"value", jshort>(); }


protected:

	VM_NONE(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ORG_OMG_CORBA_VM_NONE
