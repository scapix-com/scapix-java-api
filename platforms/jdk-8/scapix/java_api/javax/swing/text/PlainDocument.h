// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/javax/swing/text/AbstractDocument.h>

#ifndef SCAPIX_JAVA_API_JAVAX_SWING_TEXT_PLAINDOCUMENT_FWD
#define SCAPIX_JAVA_API_JAVAX_SWING_TEXT_PLAINDOCUMENT_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::javax::swing::text { class PlainDocument; }

template<>
struct scapix::jni::object_traits<scapix::java_api::javax::swing::text::PlainDocument>
{
	static constexpr fixed_string class_name = "javax/swing/text/PlainDocument";
	using base_classes = std::tuple<scapix::java_api::javax::swing::text::AbstractDocument>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_SWING_TEXT_PLAINDOCUMENT_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVAX_SWING_TEXT_PLAINDOCUMENT)
#define SCAPIX_JAVA_API_JAVAX_SWING_TEXT_PLAINDOCUMENT

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/javax/swing/text/AbstractDocument_Content.h>
#include <scapix/java_api/javax/swing/text/AttributeSet.h>
#include <scapix/java_api/javax/swing/text/Element.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class javax::swing::text::PlainDocument : public jni::object_base<"javax/swing/text/PlainDocument",
	javax::swing::text::AbstractDocument>
{
public:

	static jni::ref<java::lang::String> tabSizeAttribute() { return get_static_field<"tabSizeAttribute", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> lineLimitAttribute() { return get_static_field<"lineLimitAttribute", jni::ref<java::lang::String>>(); }

	static jni::ref<javax::swing::text::PlainDocument> new_object() { return base_::new_object(); }
	static jni::ref<javax::swing::text::PlainDocument> new_object(jni::ref<javax::swing::text::AbstractDocument_Content> p1) { return base_::new_object(p1); }
	void insertString(jint p1, jni::ref<java::lang::String> p2, jni::ref<javax::swing::text::AttributeSet> p3) { return call_method<"insertString", void>(p1, p2, p3); }
	jni::ref<javax::swing::text::Element> getDefaultRootElement() { return call_method<"getDefaultRootElement", jni::ref<javax::swing::text::Element>>(); }
	jni::ref<javax::swing::text::Element> getParagraphElement(jint p1) { return call_method<"getParagraphElement", jni::ref<javax::swing::text::Element>>(p1); }

protected:

	PlainDocument(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_SWING_TEXT_PLAINDOCUMENT
