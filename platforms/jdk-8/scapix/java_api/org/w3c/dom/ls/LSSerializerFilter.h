// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/org/w3c/dom/traversal/NodeFilter.h>

#ifndef SCAPIX_JAVA_API_ORG_W3C_DOM_LS_LSSERIALIZERFILTER_FWD
#define SCAPIX_JAVA_API_ORG_W3C_DOM_LS_LSSERIALIZERFILTER_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::org::w3c::dom::ls { class LSSerializerFilter; }

template<>
struct scapix::jni::object_traits<scapix::java_api::org::w3c::dom::ls::LSSerializerFilter>
{
	static constexpr fixed_string class_name = "org/w3c/dom/ls/LSSerializerFilter";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::org::w3c::dom::traversal::NodeFilter>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ORG_W3C_DOM_LS_LSSERIALIZERFILTER_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ORG_W3C_DOM_LS_LSSERIALIZERFILTER)
#define SCAPIX_JAVA_API_ORG_W3C_DOM_LS_LSSERIALIZERFILTER

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class org::w3c::dom::ls::LSSerializerFilter : public jni::object_base<"org/w3c/dom/ls/LSSerializerFilter",
	java::lang::Object,
	org::w3c::dom::traversal::NodeFilter>
{
public:

	jint getWhatToShow() { return call_method<"getWhatToShow", jint>(); }

protected:

	LSSerializerFilter(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ORG_W3C_DOM_LS_LSSERIALIZERFILTER