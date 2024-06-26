// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_ORG_W3C_DOM_LS_DOMIMPLEMENTATIONLS_FWD
#define SCAPIX_JAVA_API_ORG_W3C_DOM_LS_DOMIMPLEMENTATIONLS_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::org::w3c::dom::ls { class DOMImplementationLS; }

template<>
struct scapix::jni::object_traits<scapix::java_api::org::w3c::dom::ls::DOMImplementationLS>
{
	static constexpr fixed_string class_name = "org/w3c/dom/ls/DOMImplementationLS";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ORG_W3C_DOM_LS_DOMIMPLEMENTATIONLS_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ORG_W3C_DOM_LS_DOMIMPLEMENTATIONLS)
#define SCAPIX_JAVA_API_ORG_W3C_DOM_LS_DOMIMPLEMENTATIONLS

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/org/w3c/dom/ls/LSInput.h>
#include <scapix/java_api/org/w3c/dom/ls/LSOutput.h>
#include <scapix/java_api/org/w3c/dom/ls/LSParser.h>
#include <scapix/java_api/org/w3c/dom/ls/LSSerializer.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class org::w3c::dom::ls::DOMImplementationLS : public jni::object_base<"org/w3c/dom/ls/DOMImplementationLS",
	java::lang::Object>
{
public:

	static jshort MODE_ASYNCHRONOUS() { return get_static_field<"MODE_ASYNCHRONOUS", jshort>(); }
	static jshort MODE_SYNCHRONOUS() { return get_static_field<"MODE_SYNCHRONOUS", jshort>(); }

	jni::ref<org::w3c::dom::ls::LSParser> createLSParser(jshort p1, jni::ref<java::lang::String> p2) { return call_method<"createLSParser", jni::ref<org::w3c::dom::ls::LSParser>>(p1, p2); }
	jni::ref<org::w3c::dom::ls::LSSerializer> createLSSerializer() { return call_method<"createLSSerializer", jni::ref<org::w3c::dom::ls::LSSerializer>>(); }
	jni::ref<org::w3c::dom::ls::LSInput> createLSInput() { return call_method<"createLSInput", jni::ref<org::w3c::dom::ls::LSInput>>(); }
	jni::ref<org::w3c::dom::ls::LSOutput> createLSOutput() { return call_method<"createLSOutput", jni::ref<org::w3c::dom::ls::LSOutput>>(); }

protected:

	DOMImplementationLS(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ORG_W3C_DOM_LS_DOMIMPLEMENTATIONLS
