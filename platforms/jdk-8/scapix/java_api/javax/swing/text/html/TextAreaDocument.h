// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/javax/swing/text/PlainDocument.h>

#ifndef SCAPIX_JAVA_API_JAVAX_SWING_TEXT_HTML_TEXTAREADOCUMENT_FWD
#define SCAPIX_JAVA_API_JAVAX_SWING_TEXT_HTML_TEXTAREADOCUMENT_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::javax::swing::text::html { class TextAreaDocument; }

template<>
struct scapix::jni::object_traits<scapix::java_api::javax::swing::text::html::TextAreaDocument>
{
	static constexpr fixed_string class_name = "javax/swing/text/html/TextAreaDocument";
	using base_classes = std::tuple<scapix::java_api::javax::swing::text::PlainDocument>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_SWING_TEXT_HTML_TEXTAREADOCUMENT_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVAX_SWING_TEXT_HTML_TEXTAREADOCUMENT)
#define SCAPIX_JAVA_API_JAVAX_SWING_TEXT_HTML_TEXTAREADOCUMENT

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class javax::swing::text::html::TextAreaDocument : public jni::object_base<"javax/swing/text/html/TextAreaDocument",
	javax::swing::text::PlainDocument>
{
public:


protected:

	TextAreaDocument(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_SWING_TEXT_HTML_TEXTAREADOCUMENT