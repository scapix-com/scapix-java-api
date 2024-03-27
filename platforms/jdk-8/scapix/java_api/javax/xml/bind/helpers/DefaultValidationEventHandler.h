// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/javax/xml/bind/ValidationEventHandler.h>

#ifndef SCAPIX_JAVA_API_JAVAX_XML_BIND_HELPERS_DEFAULTVALIDATIONEVENTHANDLER_FWD
#define SCAPIX_JAVA_API_JAVAX_XML_BIND_HELPERS_DEFAULTVALIDATIONEVENTHANDLER_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::javax::xml::bind::helpers { class DefaultValidationEventHandler; }

template<>
struct scapix::jni::object_traits<scapix::java_api::javax::xml::bind::helpers::DefaultValidationEventHandler>
{
	static constexpr fixed_string class_name = "javax/xml/bind/helpers/DefaultValidationEventHandler";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::javax::xml::bind::ValidationEventHandler>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_XML_BIND_HELPERS_DEFAULTVALIDATIONEVENTHANDLER_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVAX_XML_BIND_HELPERS_DEFAULTVALIDATIONEVENTHANDLER)
#define SCAPIX_JAVA_API_JAVAX_XML_BIND_HELPERS_DEFAULTVALIDATIONEVENTHANDLER

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/javax/xml/bind/ValidationEvent.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class javax::xml::bind::helpers::DefaultValidationEventHandler : public jni::object_base<"javax/xml/bind/helpers/DefaultValidationEventHandler",
	java::lang::Object,
	javax::xml::bind::ValidationEventHandler>
{
public:

	static jni::ref<javax::xml::bind::helpers::DefaultValidationEventHandler> new_object() { return base_::new_object(); }
	jboolean handleEvent(jni::ref<javax::xml::bind::ValidationEvent> p1) { return call_method<"handleEvent", jboolean>(p1); }

protected:

	DefaultValidationEventHandler(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_XML_BIND_HELPERS_DEFAULTVALIDATIONEVENTHANDLER