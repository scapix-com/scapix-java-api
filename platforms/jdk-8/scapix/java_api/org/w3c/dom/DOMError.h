// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_ORG_W3C_DOM_DOMERROR_FWD
#define SCAPIX_JAVA_API_ORG_W3C_DOM_DOMERROR_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::org::w3c::dom { class DOMError; }

template<>
struct scapix::jni::object_traits<scapix::java_api::org::w3c::dom::DOMError>
{
	static constexpr fixed_string class_name = "org/w3c/dom/DOMError";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ORG_W3C_DOM_DOMERROR_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ORG_W3C_DOM_DOMERROR)
#define SCAPIX_JAVA_API_ORG_W3C_DOM_DOMERROR

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/org/w3c/dom/DOMLocator.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class org::w3c::dom::DOMError : public jni::object_base<"org/w3c/dom/DOMError",
	java::lang::Object>
{
public:

	static jshort SEVERITY_WARNING() { return get_static_field<"SEVERITY_WARNING", jshort>(); }
	static jshort SEVERITY_ERROR() { return get_static_field<"SEVERITY_ERROR", jshort>(); }
	static jshort SEVERITY_FATAL_ERROR() { return get_static_field<"SEVERITY_FATAL_ERROR", jshort>(); }

	jshort getSeverity() { return call_method<"getSeverity", jshort>(); }
	jni::ref<java::lang::String> getMessage() { return call_method<"getMessage", jni::ref<java::lang::String>>(); }
	jni::ref<java::lang::String> getType() { return call_method<"getType", jni::ref<java::lang::String>>(); }
	jni::ref<java::lang::Object> getRelatedException() { return call_method<"getRelatedException", jni::ref<java::lang::Object>>(); }
	jni::ref<java::lang::Object> getRelatedData() { return call_method<"getRelatedData", jni::ref<java::lang::Object>>(); }
	jni::ref<org::w3c::dom::DOMLocator> getLocation() { return call_method<"getLocation", jni::ref<org::w3c::dom::DOMLocator>>(); }

protected:

	DOMError(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ORG_W3C_DOM_DOMERROR
