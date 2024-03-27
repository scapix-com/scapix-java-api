// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_JAVAX_SWING_TEXT_HTML_HTMLEDITORKIT_PARSERCALLBACK_FWD
#define SCAPIX_JAVA_API_JAVAX_SWING_TEXT_HTML_HTMLEDITORKIT_PARSERCALLBACK_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::javax::swing::text::html { class HTMLEditorKit_ParserCallback; }

template<>
struct scapix::jni::object_traits<scapix::java_api::javax::swing::text::html::HTMLEditorKit_ParserCallback>
{
	static constexpr fixed_string class_name = "javax/swing/text/html/HTMLEditorKit$ParserCallback";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_SWING_TEXT_HTML_HTMLEDITORKIT_PARSERCALLBACK_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVAX_SWING_TEXT_HTML_HTMLEDITORKIT_PARSERCALLBACK)
#define SCAPIX_JAVA_API_JAVAX_SWING_TEXT_HTML_HTMLEDITORKIT_PARSERCALLBACK

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/javax/swing/text/MutableAttributeSet.h>
#include <scapix/java_api/javax/swing/text/html/HTML_Tag.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class javax::swing::text::html::HTMLEditorKit_ParserCallback : public jni::object_base<"javax/swing/text/html/HTMLEditorKit$ParserCallback",
	java::lang::Object>
{
public:

	static jni::ref<java::lang::Object> IMPLIED() { return get_static_field<"IMPLIED", jni::ref<java::lang::Object>>(); }

	static jni::ref<javax::swing::text::html::HTMLEditorKit_ParserCallback> new_object() { return base_::new_object(); }
	void flush() { return call_method<"flush", void>(); }
	void handleText(jni::ref<jni::array<jchar>> p1, jint p2) { return call_method<"handleText", void>(p1, p2); }
	void handleComment(jni::ref<jni::array<jchar>> p1, jint p2) { return call_method<"handleComment", void>(p1, p2); }
	void handleStartTag(jni::ref<javax::swing::text::html::HTML_Tag> p1, jni::ref<javax::swing::text::MutableAttributeSet> p2, jint p3) { return call_method<"handleStartTag", void>(p1, p2, p3); }
	void handleEndTag(jni::ref<javax::swing::text::html::HTML_Tag> p1, jint p2) { return call_method<"handleEndTag", void>(p1, p2); }
	void handleSimpleTag(jni::ref<javax::swing::text::html::HTML_Tag> p1, jni::ref<javax::swing::text::MutableAttributeSet> p2, jint p3) { return call_method<"handleSimpleTag", void>(p1, p2, p3); }
	void handleError(jni::ref<java::lang::String> p1, jint p2) { return call_method<"handleError", void>(p1, p2); }
	void handleEndOfLineString(jni::ref<java::lang::String> p1) { return call_method<"handleEndOfLineString", void>(p1); }

protected:

	HTMLEditorKit_ParserCallback(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_SWING_TEXT_HTML_HTMLEDITORKIT_PARSERCALLBACK