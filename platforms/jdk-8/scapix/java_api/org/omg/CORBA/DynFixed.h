// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/org/omg/CORBA/Object.h>
#include <scapix/java_api/org/omg/CORBA/DynAny.h>

#ifndef SCAPIX_JAVA_API_ORG_OMG_CORBA_DYNFIXED_FWD
#define SCAPIX_JAVA_API_ORG_OMG_CORBA_DYNFIXED_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::org::omg::CORBA { class DynFixed; }

template<>
struct scapix::jni::object_traits<scapix::java_api::org::omg::CORBA::DynFixed>
{
	static constexpr fixed_string class_name = "org/omg/CORBA/DynFixed";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::org::omg::CORBA::Object, scapix::java_api::org::omg::CORBA::DynAny>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ORG_OMG_CORBA_DYNFIXED_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ORG_OMG_CORBA_DYNFIXED)
#define SCAPIX_JAVA_API_ORG_OMG_CORBA_DYNFIXED

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class org::omg::CORBA::DynFixed : public jni::object_base<"org/omg/CORBA/DynFixed",
	java::lang::Object,
	org::omg::CORBA::Object,
	org::omg::CORBA::DynAny>
{
public:

	jni::ref<jni::array<jbyte>> get_value() { return call_method<"get_value", jni::ref<jni::array<jbyte>>>(); }
	void set_value(jni::ref<jni::array<jbyte>> p1) { return call_method<"set_value", void>(p1); }

protected:

	DynFixed(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ORG_OMG_CORBA_DYNFIXED
