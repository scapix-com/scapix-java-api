// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/org/omg/CORBA/UserException.h>

#ifndef SCAPIX_JAVA_API_ORG_OMG_COSNAMING_NAMINGCONTEXTPACKAGE_NOTFOUND_FWD
#define SCAPIX_JAVA_API_ORG_OMG_COSNAMING_NAMINGCONTEXTPACKAGE_NOTFOUND_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::org::omg::CosNaming::NamingContextPackage { class NotFound; }

template<>
struct scapix::jni::object_traits<scapix::java_api::org::omg::CosNaming::NamingContextPackage::NotFound>
{
	static constexpr fixed_string class_name = "org/omg/CosNaming/NamingContextPackage/NotFound";
	using base_classes = std::tuple<scapix::java_api::org::omg::CORBA::UserException>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ORG_OMG_COSNAMING_NAMINGCONTEXTPACKAGE_NOTFOUND_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ORG_OMG_COSNAMING_NAMINGCONTEXTPACKAGE_NOTFOUND)
#define SCAPIX_JAVA_API_ORG_OMG_COSNAMING_NAMINGCONTEXTPACKAGE_NOTFOUND

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/org/omg/CosNaming/NameComponent.h>
#include <scapix/java_api/org/omg/CosNaming/NamingContextPackage/NotFoundReason.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class org::omg::CosNaming::NamingContextPackage::NotFound : public jni::object_base<"org/omg/CosNaming/NamingContextPackage/NotFound",
	org::omg::CORBA::UserException>
{
public:

	jni::ref<org::omg::CosNaming::NamingContextPackage::NotFoundReason> why() { return get_field<"why", jni::ref<org::omg::CosNaming::NamingContextPackage::NotFoundReason>>(); }
	void why(jni::ref<org::omg::CosNaming::NamingContextPackage::NotFoundReason> v) { set_field<"why", jni::ref<org::omg::CosNaming::NamingContextPackage::NotFoundReason>>(v); }
	jni::ref<jni::array<org::omg::CosNaming::NameComponent>> rest_of_name() { return get_field<"rest_of_name", jni::ref<jni::array<org::omg::CosNaming::NameComponent>>>(); }
	void rest_of_name(jni::ref<jni::array<org::omg::CosNaming::NameComponent>> v) { set_field<"rest_of_name", jni::ref<jni::array<org::omg::CosNaming::NameComponent>>>(v); }

	static jni::ref<org::omg::CosNaming::NamingContextPackage::NotFound> new_object() { return base_::new_object(); }
	static jni::ref<org::omg::CosNaming::NamingContextPackage::NotFound> new_object(jni::ref<org::omg::CosNaming::NamingContextPackage::NotFoundReason> p1, jni::ref<jni::array<org::omg::CosNaming::NameComponent>> p2) { return base_::new_object(p1, p2); }
	static jni::ref<org::omg::CosNaming::NamingContextPackage::NotFound> new_object(jni::ref<java::lang::String> p1, jni::ref<org::omg::CosNaming::NamingContextPackage::NotFoundReason> p2, jni::ref<jni::array<org::omg::CosNaming::NameComponent>> p3) { return base_::new_object(p1, p2, p3); }

protected:

	NotFound(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ORG_OMG_COSNAMING_NAMINGCONTEXTPACKAGE_NOTFOUND
