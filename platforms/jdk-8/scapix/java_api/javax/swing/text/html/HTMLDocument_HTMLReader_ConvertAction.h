// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/javax/swing/text/html/HTMLDocument_HTMLReader_TagAction.h>

#ifndef SCAPIX_JAVA_API_JAVAX_SWING_TEXT_HTML_HTMLDOCUMENT_HTMLREADER_CONVERTACTION_FWD
#define SCAPIX_JAVA_API_JAVAX_SWING_TEXT_HTML_HTMLDOCUMENT_HTMLREADER_CONVERTACTION_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::javax::swing::text::html { class HTMLDocument_HTMLReader_ConvertAction; }

template<>
struct scapix::jni::object_traits<scapix::java_api::javax::swing::text::html::HTMLDocument_HTMLReader_ConvertAction>
{
	static constexpr fixed_string class_name = "javax/swing/text/html/HTMLDocument$HTMLReader$ConvertAction";
	using base_classes = std::tuple<scapix::java_api::javax::swing::text::html::HTMLDocument_HTMLReader_TagAction>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_SWING_TEXT_HTML_HTMLDOCUMENT_HTMLREADER_CONVERTACTION_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVAX_SWING_TEXT_HTML_HTMLDOCUMENT_HTMLREADER_CONVERTACTION)
#define SCAPIX_JAVA_API_JAVAX_SWING_TEXT_HTML_HTMLDOCUMENT_HTMLREADER_CONVERTACTION

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/javax/swing/text/MutableAttributeSet.h>
#include <scapix/java_api/javax/swing/text/html/HTML_Tag.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class javax::swing::text::html::HTMLDocument_HTMLReader_ConvertAction : public jni::object_base<"javax/swing/text/html/HTMLDocument$HTMLReader$ConvertAction",
	javax::swing::text::html::HTMLDocument_HTMLReader_TagAction>
{
public:

	void start(jni::ref<javax::swing::text::html::HTML_Tag> p1, jni::ref<javax::swing::text::MutableAttributeSet> p2) { return call_method<"start", void>(p1, p2); }
	void end(jni::ref<javax::swing::text::html::HTML_Tag> p1) { return call_method<"end", void>(p1); }

protected:

	HTMLDocument_HTMLReader_ConvertAction(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_SWING_TEXT_HTML_HTMLDOCUMENT_HTMLREADER_CONVERTACTION
