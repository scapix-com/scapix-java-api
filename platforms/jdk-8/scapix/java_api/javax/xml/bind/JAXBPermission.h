// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/security/BasicPermission.h>

#ifndef SCAPIX_JAVA_API_JAVAX_XML_BIND_JAXBPERMISSION_FWD
#define SCAPIX_JAVA_API_JAVAX_XML_BIND_JAXBPERMISSION_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::javax::xml::bind { class JAXBPermission; }

template<>
struct scapix::jni::object_traits<scapix::java_api::javax::xml::bind::JAXBPermission>
{
	static constexpr fixed_string class_name = "javax/xml/bind/JAXBPermission";
	using base_classes = std::tuple<scapix::java_api::java::security::BasicPermission>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_XML_BIND_JAXBPERMISSION_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVAX_XML_BIND_JAXBPERMISSION)
#define SCAPIX_JAVA_API_JAVAX_XML_BIND_JAXBPERMISSION

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class javax::xml::bind::JAXBPermission : public jni::object_base<"javax/xml/bind/JAXBPermission",
	java::security::BasicPermission>
{
public:

	static jni::ref<javax::xml::bind::JAXBPermission> new_object(jni::ref<java::lang::String> p1) { return base_::new_object(p1); }

protected:

	JAXBPermission(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_XML_BIND_JAXBPERMISSION
