// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/org/w3c/dom/CharacterData.h>

#ifndef SCAPIX_JAVA_API_ORG_W3C_DOM_TEXT_FWD
#define SCAPIX_JAVA_API_ORG_W3C_DOM_TEXT_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::org::w3c::dom { class Text; }

template<>
struct scapix::jni::object_traits<scapix::java_api::org::w3c::dom::Text>
{
	static constexpr fixed_string class_name = "org/w3c/dom/Text";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::org::w3c::dom::CharacterData>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ORG_W3C_DOM_TEXT_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ORG_W3C_DOM_TEXT)
#define SCAPIX_JAVA_API_ORG_W3C_DOM_TEXT

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class org::w3c::dom::Text : public jni::object_base<"org/w3c/dom/Text",
	java::lang::Object,
	org::w3c::dom::CharacterData>
{
public:

	jni::ref<org::w3c::dom::Text> splitText(jint p1) { return call_method<"splitText", jni::ref<org::w3c::dom::Text>>(p1); }
	jboolean isElementContentWhitespace() { return call_method<"isElementContentWhitespace", jboolean>(); }
	jni::ref<java::lang::String> getWholeText() { return call_method<"getWholeText", jni::ref<java::lang::String>>(); }
	jni::ref<org::w3c::dom::Text> replaceWholeText(jni::ref<java::lang::String> p1) { return call_method<"replaceWholeText", jni::ref<org::w3c::dom::Text>>(p1); }

protected:

	Text(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ORG_W3C_DOM_TEXT
