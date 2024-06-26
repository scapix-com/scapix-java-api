// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_ORG_W3C_DOM_DOMCONFIGURATION_FWD
#define SCAPIX_JAVA_API_ORG_W3C_DOM_DOMCONFIGURATION_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::org::w3c::dom { class DOMConfiguration; }

template<>
struct scapix::jni::object_traits<scapix::java_api::org::w3c::dom::DOMConfiguration>
{
	static constexpr fixed_string class_name = "org/w3c/dom/DOMConfiguration";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ORG_W3C_DOM_DOMCONFIGURATION_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ORG_W3C_DOM_DOMCONFIGURATION)
#define SCAPIX_JAVA_API_ORG_W3C_DOM_DOMCONFIGURATION

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/org/w3c/dom/DOMStringList.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class org::w3c::dom::DOMConfiguration : public jni::object_base<"org/w3c/dom/DOMConfiguration",
	java::lang::Object>
{
public:

	void setParameter(jni::ref<java::lang::String> p1, jni::ref<java::lang::Object> p2) { return call_method<"setParameter", void>(p1, p2); }
	jni::ref<java::lang::Object> getParameter(jni::ref<java::lang::String> p1) { return call_method<"getParameter", jni::ref<java::lang::Object>>(p1); }
	jboolean canSetParameter(jni::ref<java::lang::String> p1, jni::ref<java::lang::Object> p2) { return call_method<"canSetParameter", jboolean>(p1, p2); }
	jni::ref<org::w3c::dom::DOMStringList> getParameterNames() { return call_method<"getParameterNames", jni::ref<org::w3c::dom::DOMStringList>>(); }

protected:

	DOMConfiguration(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ORG_W3C_DOM_DOMCONFIGURATION
