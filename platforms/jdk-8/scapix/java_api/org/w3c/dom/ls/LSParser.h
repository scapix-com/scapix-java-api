// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_ORG_W3C_DOM_LS_LSPARSER_FWD
#define SCAPIX_JAVA_API_ORG_W3C_DOM_LS_LSPARSER_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::org::w3c::dom::ls { class LSParser; }

template<>
struct scapix::jni::object_traits<scapix::java_api::org::w3c::dom::ls::LSParser>
{
	static constexpr fixed_string class_name = "org/w3c/dom/ls/LSParser";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ORG_W3C_DOM_LS_LSPARSER_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ORG_W3C_DOM_LS_LSPARSER)
#define SCAPIX_JAVA_API_ORG_W3C_DOM_LS_LSPARSER

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/org/w3c/dom/DOMConfiguration.h>
#include <scapix/java_api/org/w3c/dom/Document.h>
#include <scapix/java_api/org/w3c/dom/Node.h>
#include <scapix/java_api/org/w3c/dom/ls/LSInput.h>
#include <scapix/java_api/org/w3c/dom/ls/LSParserFilter.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class org::w3c::dom::ls::LSParser : public jni::object_base<"org/w3c/dom/ls/LSParser",
	java::lang::Object>
{
public:

	static jshort ACTION_APPEND_AS_CHILDREN() { return get_static_field<"ACTION_APPEND_AS_CHILDREN", jshort>(); }
	static jshort ACTION_REPLACE_CHILDREN() { return get_static_field<"ACTION_REPLACE_CHILDREN", jshort>(); }
	static jshort ACTION_INSERT_BEFORE() { return get_static_field<"ACTION_INSERT_BEFORE", jshort>(); }
	static jshort ACTION_INSERT_AFTER() { return get_static_field<"ACTION_INSERT_AFTER", jshort>(); }
	static jshort ACTION_REPLACE() { return get_static_field<"ACTION_REPLACE", jshort>(); }

	jni::ref<org::w3c::dom::DOMConfiguration> getDomConfig() { return call_method<"getDomConfig", jni::ref<org::w3c::dom::DOMConfiguration>>(); }
	jni::ref<org::w3c::dom::ls::LSParserFilter> getFilter() { return call_method<"getFilter", jni::ref<org::w3c::dom::ls::LSParserFilter>>(); }
	void setFilter(jni::ref<org::w3c::dom::ls::LSParserFilter> p1) { return call_method<"setFilter", void>(p1); }
	jboolean getAsync() { return call_method<"getAsync", jboolean>(); }
	jboolean getBusy() { return call_method<"getBusy", jboolean>(); }
	jni::ref<org::w3c::dom::Document> parse(jni::ref<org::w3c::dom::ls::LSInput> p1) { return call_method<"parse", jni::ref<org::w3c::dom::Document>>(p1); }
	jni::ref<org::w3c::dom::Document> parseURI(jni::ref<java::lang::String> p1) { return call_method<"parseURI", jni::ref<org::w3c::dom::Document>>(p1); }
	jni::ref<org::w3c::dom::Node> parseWithContext(jni::ref<org::w3c::dom::ls::LSInput> p1, jni::ref<org::w3c::dom::Node> p2, jshort p3) { return call_method<"parseWithContext", jni::ref<org::w3c::dom::Node>>(p1, p2, p3); }
	void abort() { return call_method<"abort", void>(); }

protected:

	LSParser(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ORG_W3C_DOM_LS_LSPARSER
