// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/org/omg/CORBA_2_3/portable/ObjectImpl.h>
#include <scapix/java_api/java/io/Serializable.h>

#ifndef SCAPIX_JAVA_API_JAVAX_RMI_CORBA_STUB_FWD
#define SCAPIX_JAVA_API_JAVAX_RMI_CORBA_STUB_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::javax::rmi::CORBA { class Stub; }

template<>
struct scapix::jni::object_traits<scapix::java_api::javax::rmi::CORBA::Stub>
{
	static constexpr fixed_string class_name = "javax/rmi/CORBA/Stub";
	using base_classes = std::tuple<scapix::java_api::org::omg::CORBA_2_3::portable::ObjectImpl, scapix::java_api::java::io::Serializable>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_RMI_CORBA_STUB_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVAX_RMI_CORBA_STUB)
#define SCAPIX_JAVA_API_JAVAX_RMI_CORBA_STUB

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/org/omg/CORBA/ORB.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class javax::rmi::CORBA::Stub : public jni::object_base<"javax/rmi/CORBA/Stub",
	org::omg::CORBA_2_3::portable::ObjectImpl,
	java::io::Serializable>
{
public:

	static jni::ref<javax::rmi::CORBA::Stub> new_object() { return base_::new_object(); }
	jint hashCode() { return call_method<"hashCode", jint>(); }
	jboolean equals(jni::ref<java::lang::Object> p1) { return call_method<"equals", jboolean>(p1); }
	jni::ref<java::lang::String> toString() { return call_method<"toString", jni::ref<java::lang::String>>(); }
	void connect(jni::ref<org::omg::CORBA::ORB> p1) { return call_method<"connect", void>(p1); }

protected:

	Stub(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_RMI_CORBA_STUB
