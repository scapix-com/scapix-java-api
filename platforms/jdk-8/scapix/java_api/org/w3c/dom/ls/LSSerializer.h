// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_ORG_W3C_DOM_LS_LSSERIALIZER_FWD
#define SCAPIX_JAVA_API_ORG_W3C_DOM_LS_LSSERIALIZER_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::org::w3c::dom::ls { class LSSerializer; }

template<>
struct scapix::jni::object_traits<scapix::java_api::org::w3c::dom::ls::LSSerializer>
{
	static constexpr fixed_string class_name = "org/w3c/dom/ls/LSSerializer";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ORG_W3C_DOM_LS_LSSERIALIZER_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ORG_W3C_DOM_LS_LSSERIALIZER)
#define SCAPIX_JAVA_API_ORG_W3C_DOM_LS_LSSERIALIZER

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/org/w3c/dom/DOMConfiguration.h>
#include <scapix/java_api/org/w3c/dom/Node.h>
#include <scapix/java_api/org/w3c/dom/ls/LSOutput.h>
#include <scapix/java_api/org/w3c/dom/ls/LSSerializerFilter.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class org::w3c::dom::ls::LSSerializer : public jni::object_base<"org/w3c/dom/ls/LSSerializer",
	java::lang::Object>
{
public:

	jni::ref<org::w3c::dom::DOMConfiguration> getDomConfig() { return call_method<"getDomConfig", jni::ref<org::w3c::dom::DOMConfiguration>>(); }
	jni::ref<java::lang::String> getNewLine() { return call_method<"getNewLine", jni::ref<java::lang::String>>(); }
	void setNewLine(jni::ref<java::lang::String> p1) { return call_method<"setNewLine", void>(p1); }
	jni::ref<org::w3c::dom::ls::LSSerializerFilter> getFilter() { return call_method<"getFilter", jni::ref<org::w3c::dom::ls::LSSerializerFilter>>(); }
	void setFilter(jni::ref<org::w3c::dom::ls::LSSerializerFilter> p1) { return call_method<"setFilter", void>(p1); }
	jboolean write(jni::ref<org::w3c::dom::Node> p1, jni::ref<org::w3c::dom::ls::LSOutput> p2) { return call_method<"write", jboolean>(p1, p2); }
	jboolean writeToURI(jni::ref<org::w3c::dom::Node> p1, jni::ref<java::lang::String> p2) { return call_method<"writeToURI", jboolean>(p1, p2); }
	jni::ref<java::lang::String> writeToString(jni::ref<org::w3c::dom::Node> p1) { return call_method<"writeToString", jni::ref<java::lang::String>>(p1); }

protected:

	LSSerializer(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ORG_W3C_DOM_LS_LSSERIALIZER
