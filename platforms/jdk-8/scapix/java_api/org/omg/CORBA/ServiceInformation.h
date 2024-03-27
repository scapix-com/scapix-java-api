// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/org/omg/CORBA/portable/IDLEntity.h>

#ifndef SCAPIX_JAVA_API_ORG_OMG_CORBA_SERVICEINFORMATION_FWD
#define SCAPIX_JAVA_API_ORG_OMG_CORBA_SERVICEINFORMATION_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::org::omg::CORBA { class ServiceInformation; }

template<>
struct scapix::jni::object_traits<scapix::java_api::org::omg::CORBA::ServiceInformation>
{
	static constexpr fixed_string class_name = "org/omg/CORBA/ServiceInformation";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::org::omg::CORBA::portable::IDLEntity>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ORG_OMG_CORBA_SERVICEINFORMATION_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ORG_OMG_CORBA_SERVICEINFORMATION)
#define SCAPIX_JAVA_API_ORG_OMG_CORBA_SERVICEINFORMATION

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/org/omg/CORBA/ServiceDetail.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class org::omg::CORBA::ServiceInformation : public jni::object_base<"org/omg/CORBA/ServiceInformation",
	java::lang::Object,
	org::omg::CORBA::portable::IDLEntity>
{
public:

	jni::ref<jni::array<jint>> service_options() { return get_field<"service_options", jni::ref<jni::array<jint>>>(); }
	void service_options(jni::ref<jni::array<jint>> v) { set_field<"service_options", jni::ref<jni::array<jint>>>(v); }
	jni::ref<jni::array<org::omg::CORBA::ServiceDetail>> service_details() { return get_field<"service_details", jni::ref<jni::array<org::omg::CORBA::ServiceDetail>>>(); }
	void service_details(jni::ref<jni::array<org::omg::CORBA::ServiceDetail>> v) { set_field<"service_details", jni::ref<jni::array<org::omg::CORBA::ServiceDetail>>>(v); }

	static jni::ref<org::omg::CORBA::ServiceInformation> new_object() { return base_::new_object(); }
	static jni::ref<org::omg::CORBA::ServiceInformation> new_object(jni::ref<jni::array<jint>> p1, jni::ref<jni::array<org::omg::CORBA::ServiceDetail>> p2) { return base_::new_object(p1, p2); }

protected:

	ServiceInformation(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ORG_OMG_CORBA_SERVICEINFORMATION